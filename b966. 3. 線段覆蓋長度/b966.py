/*
https://zerojudge.tw/ShowProblem?problemid=b966
*/
#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b[10000000] = {0};
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int L, R;
        cin >> L >> R;
        for (int j = L; j <= R; j++)
        {
            b[j] = 1;
        }
    }
    int temp = 0;
    for (int i = 0; i < 10000000; i++)
    {
        if (b[i] == 1)
            temp += 1;
    }
    cout << temp << endl;
}
