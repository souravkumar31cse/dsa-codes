// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,pos=0,l,r,k;
//     cin>>n>>k;
//     int a[n],b[];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
   
//     sort(a,a+n);
//     for(int i=0;i<k;i++)
//     {
//         cin>>b[i];
//         l=0;
//         r=n-1;
//         int x=b[i];
//         while (l <= r) { 
//         int m = l + (r - l) / 2; 
  
//         // Check if x is present at mid 
//         if (a[m] == x) {
//               break;
//               pos=m;
//         }
          
  
//         // If x greater, ignore left half 
//         if (a[m] < x) 
//             l = m + 1; 
  
//         // If x is smaller, ignore right half 
//         else
//             r = m - 1; 
//     }
//     cout<<pos<<" ";
//         }
        
//     }
   
