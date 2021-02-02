#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int n=6;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='s')
        cout<<s[i]<<endl;
    }
}