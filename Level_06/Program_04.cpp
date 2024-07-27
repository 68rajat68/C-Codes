//A Program to find first and last occurence of the target in given array .

#include<bits/stdc++.h>
using namespace std;

void binaryFirstSearch(int A[],int n,int T,int &Ans){
    int lo=0;
    int hi=(n-1);
    while(lo <= hi){
        int mid=(lo + (hi-lo)/2); 
        //cout<<mid<<" ";
        if(A[mid]==T){
            Ans=mid;
            hi=mid-1;
        }else if(A[mid]<T){
            lo=mid+1;
        }else{
            hi=mid-1;
          //  cout<<" 2"<< " ";
        }
    }
    return ;
}

/*
//For Lower bound 
void binaryFirstSearch(int A[],int n,int T,int &Ans){
    int lo=0;
    int hi=(n-1);
    while(lo <= hi){
        int mid=(lo + (hi-lo)/2); 
        cout<<mid<<" ";
        if(A[mid]>=T){
            Ans=mid;
            hi=mid-1;
        }else{
            lo=mid+1;
            cout<<" 2"<< " ";
        }
    }
    return ;
}
*/
void binaryLastSearch(int A[],int n,int T,int &Ans){
    int lo=0;
    int hi=(n-1);
    while(lo <= hi){
        int mid=(lo + (hi-lo)/2); 
        //cout<<mid<<" ";
        if(A[mid]==T){
            Ans=mid;
            lo=mid+1;
        }else if(A[mid]<T){
            lo=mid+1;    
        }else{
            hi=mid-1;
            //cout<<" 2"<< " ";
        }
    }
    return ;
}

int main(){
    int n,T;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter elements : ";
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter target : ";
    cin>>T;
    int lastidx=(-1),firstidx=(-1);
    binaryFirstSearch(A,n,T,firstidx);
    binaryLastSearch(A,n,T,lastidx);
    //binaryFirstSearch(A,n,T,firstidx);
    cout<<"Target is in range ["<<firstidx<<","<<lastidx<<"]";
    return 0;
}