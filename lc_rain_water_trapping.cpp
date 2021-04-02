#include<iostream>
#include<vector>
using namespace std;
int trapped_water(vector<int>A,int N)
{
     if(N==0 || N==1 )
   {
       return 0;
   }
    
   vector<int>l(N);
   vector<int>r(N);
   int max=A[0];
   l[0]=max;
  
   for(int i=1;i<N;i++)
   {
       if(A[i]>max)
       {
           l[i]=A[i];
           max=A[i];
       }
       else{
           l[i]=max;
       }
   }
   max=A[N-1];
   r[N-1]=max;
   for(int i=N-2;i>=0;i--)
   {
       if(max<A[i])
       {
           r[i]=A[i];
           max=A[i];
       }
       else{
           r[i]=max;
       }
   }
  int sum=0;

 for(int i=0;i<N;i++)
 {
     sum+= min(l[i],r[i])-A[i];
 }
   return sum;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<trapped_water(v,n);
}