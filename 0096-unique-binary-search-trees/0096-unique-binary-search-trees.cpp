class Solution {
public:
    int numTrees(int n) {
        // dp[i] will store the number of unique BSTs with i nodes.
        vector<long long> dp(n + 1, 0);

        // Base case: There is one unique BST with 0 nodes (the empty tree).
        dp[0] = 1;

        // Outer loop: Calculate dp[i] for i from 1 to n.
        for (int i = 1; i <= n; i++) {
            // Inner loop: Choose each node k (from 1 to i) as the root.
            for (int j = 1; j <= i; j++) {
                // Left subtree will have j-1 nodes.
                // Right subtree will have i-j nodes.
                dp[i] += dp[j - 1] * dp[i - j];
            }
        }
        return dp[n];
    }
};