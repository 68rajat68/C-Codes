// A Program to check whether two given strings are isomorphic or not.

#include<bits/stdc++.h>
using namespace std;

bool checkIsomorphic(string A,string B){
    int n=A.size();
    int m=B.size();
    if(n!=m){
        return false;
    }
        vector <int> F1(128,-1);
        vector<int> F2(128,-1);
        for(int i=0;i<n;i++){
            int idx1=A[i];
            int idx2=B[i];
            if(F1[idx1]==F2[idx2]){
                F1[idx1]=i;
                F2[idx2]=i;
            }else{
                return false;
            }
        }
    return true;
}

int main(){
    string A,B;
    cout<<"Enter first string :";
    cin>>A;
    cout<<"Enter second string :";
    cin>>B;
    bool ans=checkIsomorphic(A,B);
    if(ans) cout<<"Yes";
    else cout<<"No";
    return 0;
}