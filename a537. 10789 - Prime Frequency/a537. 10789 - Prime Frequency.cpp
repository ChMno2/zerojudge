#include <bits/stdc++.h>
using namespace std;
// 題目要求：給定一個字串，判斷其字元出現的次數，若為質數則輸出該字元
// step1:建立質數表 >2001
// step2:用map對應字源出現次數是否在質數表中

int main()
{
    vector<int> v;
    bool p = true;
    v.push_back(2);
    for (int i = 3; i < 2002; i++)
    {
        p = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                p = false;
        }
        if (p)
            v.push_back(i);
    }
    int n;
    cin >> n;
    string s;
    for(int e=1;e<=n;e++)
    {
        map<char, int> mp;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        cout<<"Case "<<e<<": ";
            bool u=false;

        for(auto &q:mp)
        {
            for(int i=0;i<v.size();i++){
                if(q.second==v[i])
                {
                    u=true;
                    cout<<q.first;
                    break;
                }
            }
        }
        if(!u)
            cout<<"empty";
        cout<<endl;
    }
}
