// A Program to find all subsequence of the given sequace.

#include<bits/stdc++.h>
using namespace std;

void F(string &A,string B,int idx,vector<string> &Ans){
    if(idx==A.size()){
        Ans.push_back(B);
        return;
    }
    F(A,B+A[idx],idx+1,Ans);
    F(A,B,idx+1,Ans);
}

int main(){
    string A;
    int n;
    cout<<"Enter length of the string : ";
    cin>>n;
    cout<<"Enter string : ";
    cin>>A;
    string B="";
    vector <string> Ans;
    F(A,B,0,(Ans));
    cout<<"All subsequance are: ";
    for(int i=0;i<Ans.size();i++){
        cout<<Ans[i]<<" ";
    }
    return 0;
}