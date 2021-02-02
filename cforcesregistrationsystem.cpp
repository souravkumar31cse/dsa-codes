#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string  ,int>m;
    unordered_map<int ,string>u;
    int n,i;
    cin>>n;
    string s;
    int l=1;
    for(int i=0;i<n;i++)
    {
        cin>>s;
       
        if(!m.count(s))
        {
             m[s]=0;
            cout<<"OK"<<endl;
        }
        else
        {
            m[s]++;
        cout<<s<<m[s]<<endl;
        }
    }

    // for(auto x:u)
    // {
    //     cout<<x.second<<x.first<<endl;
    // }
   
}