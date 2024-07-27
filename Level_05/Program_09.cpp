// A Program to sort given array by bucket Sort.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector <float> A(n);
    cout<<"Enter elements : ";
   for(int i=0;i<n;i++){
    cin>>A[i];
   } 
   sort(A.begin(),A.end());
   cout<<"After Sorting we get: ";
   for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
   }   
   return 0;
}
