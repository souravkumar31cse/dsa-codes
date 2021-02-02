#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
 int c=1,f=0;
 string s;
 int a[n]={0};
 int k=0;
    for(int i=0;i<n;i++){
        c=1;
     s=v[i];
       for(int j=i+1;j<n;j++)
        {
            if(s==v[j]){
                v[j]=v[j]+to_string(c);
                a[k]=j;
                c++;
                k++;
            }

        }
    }
    int p=0;
     for(int i=0;i<n;i++){
         p=0;
         for(int j=0;j<n;j++)
         {
         if(a[j]==i && i!=0)
       {
           cout<<v[i]<<endl;
         p=1;
       }
    
          }
            if(p==1)
            {  continue;
           
            }
            else
            {
                     cout<<"ok"<<endl;
            }
            

     }
     
}


