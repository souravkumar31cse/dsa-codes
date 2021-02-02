#include<iostream>
#include<algorithm>
#include<iomanip>
#include<cmath>
#include<climits>
using namespace std;
int main()
{
    int a[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int meh=1,msf=INT_MIN;
    for(int i=0;i<n;i++)
    {
        meh=meh*a[i];
        if(meh<a[i])
        {
            meh=a[i];
        }
        if(msf<meh)
        {
            msf=meh;
        }
    }
    cout<<msf;
}