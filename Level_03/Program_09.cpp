//In a given array find is there any pair to the given sum if increasing array is given 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int A['n'];
    int Sum;
    cout<<"Enter length of the array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter sum you want to find: ";
    cin>>Sum;
    bool flag=false;
    int left_ptr=0;
    int right_ptr=(n-1);
    while(left_ptr<right_ptr){
        if(A[left_ptr]+A[right_ptr]==Sum){
            flag=true;
            break;
        }else if(A[left_ptr]+A[right_ptr]<Sum){
            left_ptr++;
        }else right_ptr--;
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
}