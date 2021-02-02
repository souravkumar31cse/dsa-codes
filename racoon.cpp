#include<iostream>
using namespace std;
int main()
{
    long long int r;
    cin>>r;
    int n;
    cin>>n;
    int a[n];
   long long int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    if(sum>=r){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}