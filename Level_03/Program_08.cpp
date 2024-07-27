// Given two arrays in increasing order then print the array in which all elements are thier in increasing order.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    vector <int> V1,V2,V3;
    cout<<"Enter length of the first array: ";
    cin>>n;
    cout<<"Enter length of the second array: ";
    cin>>m;
    cout<<"Enter elements of the first array: ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        V1.push_back(ele);
    }
    cout<<"Enter elements of the second array: ";
    for(int i=0;i<m;i++){
        int ele;
        cin>>ele;
        V2.push_back(ele);
    }
    int left_ptr_1=0;
    int left_ptr_2=0;
    while(left_ptr_1<n && left_ptr_2<m){
        if(V1[left_ptr_1]<V2[left_ptr_2]){
            V3.push_back(V1[left_ptr_1]);
            left_ptr_1++;
        }else{
            V3.push_back(V2[left_ptr_2]);
            left_ptr_2++;
        }
    }
    while(left_ptr_1<n){
        V3.push_back(V1[left_ptr_1++]);
    }
    while(left_ptr_2<m){
        V3.push_back(V2[left_ptr_2++]);
    }
    cout<<V2[left_ptr_2]<<endl;
        for(int i=0;i<V3.size();i++){
        cout<<V3[i]<<" ";
    }
}