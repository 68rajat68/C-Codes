// A Program to find maximum number of chocolates given to any student is minimum.
//Given array of boxes and no. of student(m).

#include<bits/stdc++.h>
using namespace std;

bool possibleOrNot(int A[],int n,int m,int mid){
    int StudentRequd=1;
    int currentSum=0;
      for(int i=0;i<n;i++){
        if(A[i]>mid){
            return false;
        }
        if(currentSum+A[i]>mid){
            StudentRequd++;
            currentSum=A[i];
            if(StudentRequd>m){
                return false;
            }
        }else {
            currentSum+=A[i];
        }
      }
      return true;
}

int binarySearch(int A[],int n,int m){
    /*
    Time Complexity is O(n*log(Sum of all chocolates));
    space Complexity O(1);
    */
    int lo=A[0];
    int hi=0;
    for(int i=0;i<n;i++){
        hi+=A[i];
    }
    int ans=(-1);
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(possibleOrNot(A,n,m,mid)){
            ans=mid;
            hi=mid-1;
        }else {
            lo=mid+1;
        }
    }
    return ans;
}

int main(){
    int n,m;
    cout<<"Enter n:";
    cin>>n;
    int A[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter no. of student: ";
    cin>>m;
    int Ans=binarySearch(A,n,m);
    cout<<"Ans: "<<Ans;
    return 0; 
}