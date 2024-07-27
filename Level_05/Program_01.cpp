//A Program to sort the given array (by using bubble sorting )

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter length of the array : ";
    cin>>n;
    int A[n];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    /*
    //Normal 
    for(int i=0;i<(n-1);i++){
        for (int j = i+1; j < n; j++)
        {
            if(A[i]>A[j]){
                swap(A[i],A[j]);
            }
        }
    }*/
    // Bubble sort with opitimized form.

    bool flag;
    for(int i=0;i<(n-1);i++){
        flag =false;
        for(int j=0;j<(n-i-1);j++){
            if(A[j]>A[j+1]) {
                swap(A[j],A[(j+1)]);
                flag=true;
            }
        }
        if(!flag) break;
       // cout<<"i"<<i;
    }
    cout<<"Given array in increasing order is : ";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
