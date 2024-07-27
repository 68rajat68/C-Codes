//In a given array find is there any pair to the given absolute difference if increasing array is given.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int A['n'];
    int Diff;
    cout<<"Enter length of the array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter Absolute Difference you want to find: ";
    cin>>Diff;
    bool flag=false;
    int left_ptr=0;
    int right_ptr=(n-1);
    while(left_ptr<right_ptr){
        if(A[right_ptr]-A[left_ptr]==Diff){
            flag=true;
            break;
        }else if(A[right_ptr]-A[left_ptr]<Diff){
            left_ptr++;
        }else right_ptr--;
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
}