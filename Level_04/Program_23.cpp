// A Porgram to find all posible string formed by the given string of numbers 2 to 9 only.

#include<bits/stdc++.h>
using namespace std;

void F(string &A,string New,int idx,vector<string> &Ans,vector<string> &V){
    if(idx==A.size()){
        Ans.push_back(New);
        return;
    }
    int digit= A[idx]-'0'; //To convert it in number from ASCII code.
    /*int digit1=A[idx];
    int digit=int(digit1);
    cout<<digit<<" "<<char(50);*/
    if(digit <=1){
        F(A,New,idx+1,Ans,V);
        return ;
    }
    for(int j=0;j<V[digit].size();j++){
        F(A,New+V[digit][j],idx+1,Ans,V);
    }
    return ;
}

int main(){
    string A,New="";
    vector <string> Ans;
    vector <string> V{"", "" , "abc", "def", "ghi" ,"jkl", "mno", "pqrs", "tuv", "wxyz"};
    cout<<"Enter your string : ";
    cin>>A;
    F(A,New,0,Ans,V);
    cout<<"All strings are: ";
    for(int i=0;i<Ans.size();i++){
        cout<<Ans[i]<<" ";
    }
    return 0;
}