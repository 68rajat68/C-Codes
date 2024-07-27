// A Program to move all even integer in the stating and odd in the last.

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> V1;
    int n;
    cout<<"Enter length of array : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int A;
        cin>>A;
        V1.push_back(A);
    }
    int left_ptr=0;
    int right_ptr=V1.size()-1;
    while(left_ptr<right_ptr){
        if(V1[left_ptr]%2==1 && V1[right_ptr]%2==0){
            swap(V1[left_ptr],V1[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        if(V1[left_ptr]%2==0){
            left_ptr++;
        }
        if(V1[right_ptr]%2==1){
            right_ptr--;
        }
    }
    //reverse(V1.begin(),V1.end());
    for(int i=0;i<n;i++){
        cout<<V1[i]<<" ";
    }
}