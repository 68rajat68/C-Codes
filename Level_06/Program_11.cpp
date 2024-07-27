//A Program to find maximum of the minimum distance between any two children.

#include<bits/stdc++.h>
using namespace std;

bool possibleOrNot(int A[],int n,int m,int mid){
    int Student=1;
    int lastStudent=A[0];
    for(int i=1;i<n;i++){
        if((A[i]-lastStudent)>=mid){
            Student++;
            lastStudent=A[i];
            if(Student==m){
                return true;
            }
        }
    }
    return false;
}

int binarySearch(int A[],int n,int m){
    /*
    Time Complexity is O(n*log(Xn-X1));
    Space Complexity is O(1);
    */
    int lo=1;
    int hi=A[(n-1)]-A[0];
    int Ans=(-1);
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(possibleOrNot(A,n,m,mid)){
            Ans=mid;
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }
    return Ans;
}

int main(){
    int n,m;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter no. of points: ";
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter number of student: ";
    cin>>m;
    int Ans=binarySearch(A,n,m);
    cout<<"Maximum of Minimum distance is "<<Ans;
    return 0;
}