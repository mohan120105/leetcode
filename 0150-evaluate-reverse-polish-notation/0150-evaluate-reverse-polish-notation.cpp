class Solution {
public:
    int evalRPN(vector<string>& nums) {
        stack<int>s;
        int f,se;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]=="+"||nums[i]=="-"||nums[i]=="*"||nums[i]=="/"){
                
                se=s.top();
                s.pop();
                f = s.top();
                s.pop();
                if(nums[i]=="+"){
                    s.push(f+se);
                }
                else if(nums[i]=="-"){
                    s.push(f-se);
                }
                else if(nums[i]=="*"){
                    s.push(f*se);
                }
                else{
                    s.push(f/se);
                }
            }
            else{
                s.push(stoi(nums[i]));
            }
        }
        return s.top();
    }
};