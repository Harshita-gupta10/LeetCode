class Solution {
public:
    int fibo(int n, vector<int>& dp)
    {
        // base case
        if(n == 0 || n == 1)
        {
            return n;
        }
        // step 3
        if(dp[n] != -1)
        {
            return dp[n];
        }
        // step 2
        dp[n] = (fibo(n-1, dp)+fibo(n-2, dp));
        return dp[n];
    }
    int fib(int n) {
        // step 1
        vector<int> dp(n+1);
        for(int i = 0; i < n+1; i++)
        {
            dp[i] = -1;
        }
        return fibo(n, dp);
    }
};