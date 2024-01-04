//https://leetcode.com/problems/number-of-ways-to-reach-a-position-after-exactly-k-steps/description/

class Solution {
public:
    int numberOfWays(int startPos, int endPos, int k) {
        vector<vector<int>> dp(4001,vector<int>(1001,-1));
        return helper(startPos, k,endPos,dp );
    }
    long long helper(int pos, int k, int endPos, vector<vector<int>> &dp)
    {
        if(k==0 && pos == endPos)return 1;
        if(k==0)return 0;

        if(dp[pos+1000][k]!=-1)return dp[pos+1000][k];

        long long x = helper(pos+1,k-1,endPos,dp);
        long long y = helper(pos-1,k-1,endPos,dp);

        return dp[pos+1000][k] = (x+y)%1000000007;
    }
};