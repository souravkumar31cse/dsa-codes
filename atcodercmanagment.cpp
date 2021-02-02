#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    int n;
    int t;
    cin>>n;
    map<int,int>m;
    int temp;
     map<int,int>::iterator iter;

    for(int i=1;i<=n;i++)
    {   
        m.insert({{i,0}});
    }
    m[1]=0;
    for(int i=2;i<=n;i++){
        cin>>t;
        m[t]++;
        
    }

    for(iter=m.begin();iter!=m.end();iter++)
    {
        cout<<(*iter).second<<endl;;
    }
    
      
}