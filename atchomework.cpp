#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int home;
    cin>>home;
    int days;
    int sum=0,diff;
    while(home--){
        cin>>days;
        sum+=days;
    }
    diff=n-sum;
    if(diff>=0){
        cout<<diff;
    }
    else
    {
        cout<<"-1";
    }
    

}