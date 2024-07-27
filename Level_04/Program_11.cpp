//A Program to remove all occurrences of 'a' in the given string.

#include<bits/stdc++.h>
using namespace std;

string F(string &s,int idx,int n);
  /*  if(idx==(n)) return "";
    string ans="";
    ans+=s[idx];
    return ((s[idx] =='a')?(""):(ans))+F(s,idx+1,n); 
}*/
int main(){
    int n;
    cout<<"Enter length of the string : ";
    cin>>n;
    string S;
    cout<<"Enter String :";
    cin>>S;
    string Ans=F(S,0,n);
    cout<<"After removing a from given string we get :"<<Ans;
    return 0;
}
string F(string &s,int idx,int n){
    if(idx==(n)) return "";
    string ans="";
    ans+=s[idx];
    return ((s[idx] =='a')?(""):(ans))+F(s,idx+1,n); 
}