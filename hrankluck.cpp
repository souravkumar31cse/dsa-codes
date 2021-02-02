#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  long long int l=0;
    vector<int>v(n);
    int a,x,cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>x>>a;
        if(a==0)
        {
            l+=x;
        }
        else
        {
            v.push_back(x);
            cnt++;
        }
    }

    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=0;i<cnt;i++)
    {
       if(i>=k)
       {
           l-=v[i];
       }
       else
        l+=v[i];
    }
    for(int i=0;i<cnt-k;i++)
    {

    }
    cout<<l;
}