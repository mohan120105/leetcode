class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int max_area = 0;
        int i=0,j=height.size()-1;
        while(i<j){
            area = min(height[i],height[j])*(j-i);
            max_area = max(max_area,area);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return max_area;
    }
};