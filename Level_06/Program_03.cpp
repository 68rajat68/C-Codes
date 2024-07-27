//A program to find squareroot of the given number.

#include<bits/stdc++.h>
using namespace std;

// This is called binary search on ans.
//Time Complexity is O(logn).

void binarySquareRoot(int n,int &Ans){
    int lo=1;
    int hi=n;
    while(lo<=hi){
        int Mid=lo+(hi-lo)/2;
        //cout<<"Mid ="<<Mid<<" ";
        if((Mid*Mid)<=n){
            Ans=Mid;
            lo=Mid+1;
        }else {
            hi=Mid-1;
        }
    }
    return ;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int Ans;
    binarySquareRoot(n,Ans);
    cout<<"Square Root of "<<n<< " is : "<<Ans;
    return 0;
}