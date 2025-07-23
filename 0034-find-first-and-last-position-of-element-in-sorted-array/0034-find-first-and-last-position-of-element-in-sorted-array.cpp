class Solution {
public:
    int findFirst(vector<int>nums,int target){
        int first=-1;
        int l = 0,h=nums.size()-1,mid;
        while(l<=h){
            mid = (l+h)/2;
            if(nums[mid]==target){
                first = mid;
                h= mid-1;
            }
            else if(nums[mid]>target){
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return first;
    }
    int findLast(vector<int>nums,int target){
        int last = -1;
        int l=0,h=nums.size()-1,mid;
        while(l<=h){
            mid = (l+h)/2;
            if(nums[mid]==target){
                last = mid;
                l = mid+1;
            }
            else if(nums[mid]>target){
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int fi = findFirst(nums,target);
        if(fi==-1)return {-1,-1};
        int l = findLast(nums,target);
        return {fi,l};
        // return {i,j};
    }
};