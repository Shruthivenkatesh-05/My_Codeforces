#include <bits/stdc++.h>
#define ll long long int
#define cy cout << "YES\n";
#define cn cout << "NO\n";
#define mod 1000000007
using namespace std;
int main()
{
    string str = "";
    cin >> str;
    string decode = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '.')
        {
            decode += "0";
        }
        else if (str[i + 1] == '.')
        {
            decode += "1";
            i++;
        }
        else
        {
            decode += "2";
            i++;
        }
    }
    cout << decode;
    return 0;
}
