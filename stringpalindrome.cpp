#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-1-i]){
            cout<<"No";
            return 0;
        }
}
// cout<<"passed"<<endl;
int d;
d=(int)(n-1)/2;
 for(int i=0;i<d/2;i++)
    {
        if(s[i]!=s[d-1-i]){
            cout<<"No";
            return 0;
        }
}
// cout<<"passed"<<endl;
d=(int)(n+3)/2;
 for(int i=d;i<n/2;i++)
    {
        if(s[i]!=s[n-1-i]){
            cout<<"No";
            return 0;
        }
}
cout<<"Yes";
}