#include<iostream>
using namespace std;
int main()
{
    int n,b;
    cin>>n;
    while(n>0){
        b=n%10;
        if(b==7){
            cout<<"Yes";
            return 0;
        }
        n=n/10;
    }
    cout<<"No";
}