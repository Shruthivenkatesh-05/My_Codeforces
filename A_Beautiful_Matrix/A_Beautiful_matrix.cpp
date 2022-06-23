#include<bits/stdc++.h>
#define ll long long int 
#define cy cout<<"YES\n";
#define cn cout<<"NO\n";
#define mod 1000000007
using namespace std;
int main()
{
    vector<vector<int>> mat(5, vector<int>(5));
    int r=0,c=0;
    for (int i = 0; i < 5; i++)
    {   
        for (int j = 0; j < 5; j++)
        {
           cin>>mat[i][j];
           if (mat[i][j]==1)
           {
              r=i+1;
              c=j+1;
           
           }
        } 
    }
    //   cout<<r<<" "<<c<<" ";
    int ans=abs(3-r)+abs(3-c);
    cout<<ans;
    

    return 0;
}
