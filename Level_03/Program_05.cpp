//A Program to print prefix sum array.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector <int> V1;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        V1.push_back(ele);
    }
    for(int i=1;i<n;i++){
        V1[i]=V1[(i-1)]+V1[i]; 
    }
    for(int i=0;i<n;i++){
        cout<<V1[i]<<" ";
    }
}