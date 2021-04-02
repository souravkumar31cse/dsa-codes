#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<string>s;
    string c;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        s.insert(c);
    }
    cout<<s.size();
}