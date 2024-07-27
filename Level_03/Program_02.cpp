// A Program to shift the given array k times.

#include<bits/stdc++.h>

using namespace std;
void shiftArray(vector <int> V2,int k){
    k=k%V2.size();
    reverse(V2.begin(),V2.end());
    reverse(V2.begin(),V2.begin()+k);
    reverse(V2.begin()+k,V2.end());
}
int main(){
    int A,n,k;
    //vector <int> V1(n,0);
    cout<<"Hello :::::\n";
    cout<<"Enter (length of array) n: ";
    cin>>n;
    vector <int> V1(n,0);
    cout<<"Enter elements :";
    for(int i=0;i<n;i++){
        cin>>A;
        V1.push_back(A);
    }
    cout<<"Enter k: ";
    cin>>k;
    //shiftArray(V1,k);
    //k=k%V1.size();
    reverse(V1.begin(),V1.end());
    reverse(V1.begin(),V1.begin()+k);
    reverse(V1.begin()+k,V1.begin()+(n-k));
    cout<<"Given array is: ";
    for(int i=0;i<n;i++){
        cout<<V1[i]<<" ";
    }
    
}