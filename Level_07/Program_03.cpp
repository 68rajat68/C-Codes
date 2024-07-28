// A Program to find that given two string are anagram of each other or not.

#include<bits/stdc++.h>
using namespace std;

bool anagramOrNot(string &A,string &B){
    //Time Complexity is O(length of the array)
    int n=A.size();
    vector <int> F(26,0);
    for(int i=0;i<n;i++){
        int idx1=A[i]-'a';
        int idx2=B[i]-'a';
        F[idx1]++;
        F[idx2]--;
    }
    //cout<<F[0]<<" "<<F[1]<<" "<<F[2]<<" "<<F[3]<<endl; 
    for(int i=0;i<n;i++){
        if((F[i]) != 0){
            return false;
        }
    }
    return true;
}

int main(){
    string A,B;
    cout<<"Enter first string: ";
    cin>>A;
    cout<<"Enter second string: ";
    cin>>B;
    int n=A.size();
    int m=B.size();
    if(n==m){
    bool Ans=anagramOrNot(A,B);
    if(Ans) cout<<"Yes";
    else cout<<"No";
    }else{
        cout<<"No";
    }
    return 0;
}