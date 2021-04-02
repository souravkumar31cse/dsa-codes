#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int sum=0,cnt=0;
    for(int i=n-1;i>=0;i--){
        if(sum>=m){
            break;
        }
        else{
            sum+=v[i];
            cnt++;
        }
    }
    cout<<cnt;
}