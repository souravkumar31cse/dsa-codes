#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    int c0,c1,h;
     int sum=0,max=10;
    cin>>t;
    string s;
    while (t--)
    {

         sum=0;
        cin>>n>>c0>>c1>>h;
        cin>>s;
        for(auto x:s)
        {
          if(x=='0')
             sum+= min(c0,c1+h);
            else
             sum+=min(c1,c0+h);
        }
        cout<<sum<<endl;
       
    }
    
}