#include <bits/stdc++.h>
#define ll long long int
#define cy cout << "YES\n";
#define cn cout << "NO\n";
#define mod 1000000007
using namespace std;
int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    int n = s.size();
    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    string ans = "";
    int flag = 0;
    int tempk = k;

    for (auto it : mp)
    {

        if (it.second % k != 0)
        {
            cout << -1;
            flag = 1;
            break;
        }
        int x = it.second / k;
        while (x--)
        {
            ans += it.first;
        }
    }
    //   cout<<ans<<" ";

    string str = ans;
    tempk = k - 1;
    while (tempk--)
    {
        ans += str;
    }

    if (flag != 1)
    {
        cout << ans;
    }
    return 0;
}
