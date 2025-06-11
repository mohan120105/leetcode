using namespace std;
class Solution {
public:
    int hammingWeight(int n) {
       bitset<32> binary(n); // 8 bits
    //    int k = binary;
       return binary.count();
       
    }
};