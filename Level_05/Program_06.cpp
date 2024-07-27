//A Program to sort given array by Quick sort

#include<bits/stdc++.h>
using namespace std;

int partition (int Arr[],int first,int last){
    int i=(first-1);
    int j=first;
    int Pi=Arr[last];
    for(;j<last;j++){
        if(Arr[j]<Pi){
            i++;
            swap(Arr[i],Arr[j]);
        }
    }
    swap(Arr[i+1],Arr[last]);
    return (i+1);
}

void quickSort(int Arr[],int first,int last){
    //base case
    if(first>=last){
        return ;
    }
    int Pi=partition(Arr,first,last);
    quickSort(Arr,first,(Pi-1));
    quickSort(Arr,(Pi+1),last);
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int A[n];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    quickSort(A,0,(n-1));
    cout<<"After sorting we get :";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}