#include<bits/stdc++.h>
using namespace std;
int main()
{

      int n;
      string s;
      unordered_map<string,int>m;
      cin>>n;
      unordered_map<string,int>::iterator itr;
      for(int i=0;i<n;i++)
      {
         cin>>s;
         m[s]++;

      }
      int max=0;
      for(itr=m.begin();itr!=m.end();itr++)
      {
         if(itr->second>max)
         {
            max=itr->second;
            s=itr->first;
         }
      }
      cout<<s;
   // int n;
   // cin>>n;
   // char s1[50],s2[50];
   // int cnt1=0,cnt2=0;
   // if(n==1)
   // {
   //    cin>>s1;
   //    cout<<s1;
   //    return 0;
   // }
   // cin>>s1;
   // cnt1++;
   // for(int i=1;i<n;i++)
   // {
   //    cin>>s2;
      
   //   if(strcmp(s1,s2)==0)
   //   {
   //       cnt1++;  
   //   } 
   //   else
   //   {
        
   //      cnt2++;
   //   }
     
      
   // }
   // if(cnt1>cnt2)
   // cout<<s1;
   // else
   // cout<<s2;








   //  int n;
   //  cin>>n;
   //  string s;
  
   //  map<char,int>m;
   //  for(int i=0;i<n;i++)
   //  {
   //      cin>>s;
   //      for(int j=0;s[j]!='\0';j++)
   //      {
   //          // cout<<s[j]<<endl;
   //            m[s[j]]++;
   //      }
         
   //  }
   //  int max=0;
   // for(auto x:m)
   // {
   //    if(max<=x.second)
   //    {
   //        max=x.second;
   //    }
   // }
   // for(auto x:m)
   // {
   //    if(max==x.second)
   //    {
   //       cout<<x.first;
   //    }
   // }
    
}