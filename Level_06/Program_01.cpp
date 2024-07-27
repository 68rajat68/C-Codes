// A Program to learn Binary search algorithm on given sorted array.

#include<bits/stdc++.h>
using namespace std;

//Normal Method
int binarySearch(vector<int> &A,int T){
    int i=0;
    int j=A.size()-1;
    cout<<"i="<<i<<" j="<<j<<" ";
    while(i <= j){
        int mid=(j+i)/2;  //Modify it by Mid=l+(r-l)/2;
        if(A[mid]==T){
            cout<<"mid= "<<mid;
            return mid;
        }else if((A[mid]) < T){
            i = mid+1;
            cout<<"i="<<i<<" ";
        }else {
            j = mid-1;
            cout<<"j= "<<j<<" ";
        }
    }
    int a=(-1);
    return a;
}
//By Recursion
void binarySearch(vector<int> &A,int T,int l,int r,int &Ans){
    //Base case
    if(l>r) return;
    int Mid=l+(r-l)/2;  //Modify it by Mid=l+(r-l)/2;
    cout<<"Mid= "<<Mid<<" ";
    if(A[Mid]==T){
        Ans=Mid;
        return;
    }else if(A[Mid]<T){
        return binarySearch(A,T,(Mid+1),r,Ans);
    }else{
        return binarySearch(A,T,l,(Mid-1),Ans);
    }
}
int main(){
    int n,T;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter elements of the array: ";
    vector<int> A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter target element : " ;
    cin>>T;
    int Ans=(-1);
    binarySearch(A,T,0,(n-1),Ans);
    //int Ans=binarySearch(A,T);
    if(Ans==(-1)){
        cout<<"Target is not perset in the given array.";
    }else{
    cout<<"Given Target element is on the "<<Ans<<" index in the given array ";
    }
    return 0;
}