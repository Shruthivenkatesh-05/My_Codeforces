#include<bits/stdc++.h>
#define ll long long int 
#define cy cout<<"YES\n";
#define cn cout<<"NO\n";
#define mod 1000000007
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t;
    cin>>t;
    string str;
    cin>>str;
    string ans=str;
    while (t--)
    {   
        for (int i = 0; i < n; i++)
        {
            if (i!=n-1 && str[i]=='B' && str[i+1]=='G')
            {
                ans[i]='G';
                ans[i+1]='B';
            }
        }
        
        str=ans;
    }
    cout<<str;

    return 0;
}
