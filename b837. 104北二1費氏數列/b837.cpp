/*
解題策略：
因為A,B (0<=A,B<=1000000)，所以dp大小設成30即可
利用binary search 找到「不比」Ａ小，及「比Ｂ大」的數字
即可算出答案
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, a, b;
    vector<int> dp(41, -1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i < 40; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cin >> n;
    for (int q = 0; q < n; q++)
    {
        cin >> a >> b;
        int i = lower_bound(dp.begin(), dp.end(), min(a, b)) - dp.begin();
        int j = upper_bound(dp.begin(), dp.end(), max(a, b)) - dp.begin();

        if (j - i)
        {
            for (int t = i; t < j; t++)
            {
                cout << dp[t] << '\n';
            }
            cout << abs(j - i) << '\n';
        }
        else
            cout << 0 << '\n';
        if (q == n - 1)
            continue;
        cout << "------" << endl;
    }
}
