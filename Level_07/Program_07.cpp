// A Program to find maximum no. of consecutive 1's if we can flip atmost k 0's in the given binary string.

#include<bits/stdc++.h>
using namespace std;

// Sliding Window Technique

int binaryString(string A,int k){
    /*
    Time Complexity is O(n) where s length of the given binary string.
    Space Complexity is O(1).
    */
    int zero_count=0;
    int max_length=0;
    int s=0,e=0;
    //if(A[s]=='0') zero_count++;
    while(e < A.size()){
        if(A[e]=='0') zero_count++;
        while(zero_count>k){
            if(A[s]=='0') zero_count--;
            s++;
        }
        int length=(e-s+1);
        max_length=(max_length<length)?(length):(max_length);
        e++;
    }
    return max_length;
}

int main(){
    string A;
    int k;
    cout<<"Enter your binary string : ";
    cin>>A;
    cout<<"Enter k: ";
    cin>>k;
    int Ans=binaryString(A,k);
    cout<<"Maximum no. with consecutive 1's is : "<<Ans;
    return 0;
}