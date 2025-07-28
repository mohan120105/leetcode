class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++; // Just increment and return
                return digits;
            }
            digits[i] = 0; // Set to 0 and continue to next digit
        }

        // If all digits were 9, then we need to add 1 at the beginning
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
