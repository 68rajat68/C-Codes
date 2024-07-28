// Given an array of string to find longest common prefix string amongest an array of string.

#include<bits/stdc++.h>
using namespace std;

//Method_01
string longestStringPrefix(string A[],int n){
    string Ans="";
    cout<<n<<" ";
    for(int i=0;i<(A[0].size());i++){
        int j=0;
        while(j < (n-1)){
            cout<<A[j][i]<<" "<<A[j+1][i]<<" ";
        if(A[j][i]!=A[j+1][i]){
            cout<<"Return"<<" "<<Ans;
            return Ans;
        }else{
            j++;
            cout<<j<<" ";
        }
    }
    Ans+=A[j-1][i];
    cout<<Ans<<" ";
 }
 return Ans;
}
//Method_02
string longestStringPrefix2(vector<string> &A){
    sort(A.begin(),A.end());//Time Complexity is O(nlog(n)*k) where k is length of strings.
    string S1=A[0];
    int i=0;
    string S2=A[A.size()-1];
    int j=0;
    string Ans="";
    while(i<S1.size() && j<S2.size()){
        if(S1[i]==S2[j]){
            Ans+=S1[i];
            i++; j++;
        }else {
            break;
        }
    }
    //Time Complexity is O(min(A[0],.size(),A[n-1].size())).
    return Ans;
}
//Method_03
string longestStringPrefix3(vector<string> &A){
    string S1=A[0];
    int ans_length=S1.size();
    for(int i=1;i<A.size();i++){
        int j=0;
        while(j<S1.size() && j<A[i].size() && S1[j]==A[i][j]){
            j++;
        }
        ans_length=min(ans_length,j);
    }
    string Ans=S1.substr(0,ans_length);
    return Ans;
}
int main(){
    int n;
    cout<<"Enter length of the array: ";
    cin>>n;
    vector<string> A(n);
    //string A[n];
    cout<<"Enter all strings :";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    string Ans=longestStringPrefix3(A);
    cout<<"Longest common prefix string is: "<<Ans;
    return 0;
}