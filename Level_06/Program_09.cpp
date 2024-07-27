// A Program to search element in the given matrix.(In which all rows are sorted and first element of each row is greater then last element of the previes row).

#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<vector<int>> &A,int r,int c,int T){
    int lo=0;
    int hi=(r*c)-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        int x=mid/c;
        int y=mid%c;
        if(A[x][y]==T){
            return 1;
        }else if(A[x][y]<T){
            lo=mid+1;
        }else {
            hi=mid-1;
        }
    }
    return (-1);
}

int main(){
    int n,m,T;
    cout<<"Enter order: ";
    cin>>n>>m;
    vector<vector<int>> A(n,vector<int> (m));
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    int r;
    cout<<"How many time you want to check: ";
    cin>>r;
    while(r>0){
    cout<<"Enter Target :";
    cin>>T;
    int Ans=binarySearch(A,n,m,T);
    if(Ans==1) cout<<"Given element is present";
    else cout<<"Not Present";
    r--;
    }
    return 0;
}