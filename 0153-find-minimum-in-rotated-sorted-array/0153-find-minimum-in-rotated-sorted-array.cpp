class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int mid=low+(high-low)/2;
        while(low<high){
            mid = low+(high-low)/2;
            if(nums[mid]>nums[high]){
                low = mid+1;
            }
            else{
                high=mid;
            }
        }
        return nums[low];
    }
};