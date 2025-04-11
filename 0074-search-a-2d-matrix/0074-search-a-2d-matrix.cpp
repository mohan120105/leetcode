#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int st = 0;
        int en = matrix.size() - 1;
        int n = matrix[0].size();

        // Narrow down to the correct row
        while (st <= en) {
            int mid = st + (en - st) / 2;
            if (matrix[mid][0] <= target && matrix[mid][n - 1] >= target) {
                // Target is within the range of this row
                return isfound(matrix[mid], target);
            } else if (matrix[mid][0] > target) {
                en = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return false; // Target not found in any row
    }

    bool isfound(vector<int>& nums, int key) {
        int st = 0, en = nums.size() - 1;
        while (st <= en) {
            int mid = st + (en - st) / 2;
            if (nums[mid] == key) {
                return true;
            }
            if (nums[mid] < key) {
                st = mid + 1;
            } else {
                en = mid - 1;
            }
        }
        return false;
    }
};
