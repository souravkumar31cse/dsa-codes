#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans*=i;
    }
    return ans;
}
int main()
{
    int t,n;
    cin>>t;
    int a,b,c,res;
    while(t--)
    {
        cin>>n;
        if(n<=1){
        cout<<0<<endl;
        continue;}
        else if(n==2)
        {
             cout<<1<<endl;
        continue;
        }
        res=(n*(n-2))/2;
        cout<<res<<endl;
    }
}
