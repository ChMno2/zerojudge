#include <bits/stdc++.h>
using namespace std;
vector<long long> dp(105, -1);
long long DP(int n)
{
    if (dp[n] != -1)
        return dp[n];
    else
        dp[n] = DP(n - 1) + DP(n - 2);
    return dp[n];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    dp[0] = 1;
    dp[1] = 1;
    while (cin >> n)
    {
        cout << DP(n) << '\n';
    }
}
