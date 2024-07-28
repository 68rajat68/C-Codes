//A Program to sort the given string.

#include<bits/stdc++.h>
using namespace std;

void sortString(string &A){
    vector <int> B(26,0);
    int n=A.size();
    for(int i=0;i<n;i++){
        int idx=int(A[i])-'a';
        B[idx]++;
    }
    /*
    //-->> Method_01
    for(int i=1;i<26;i++){
        B[i]+=B[i-1];
    }
    //cout<<B[0]<<endl;
    vector <int> Ans(n);
    for(int i=(n-1);i>=0;i--){
        int ans=int(A[i])-'a';
       // cout<<ans<<" ";
        Ans[--B[ans]]=ans;
    }
    //cout<<Ans[0]<<" "<<Ans[1]<<" "<<Ans[2]<<endl;
    for(int i=0;i<n;i++){
        A[i]=char(Ans[i]+97);
    }*/
    //--->> Method_02
    int j=0;
    for(int i=0;i<26;i++){
        while(B[i]--){
            A[j++]=i+'a';
        }
    }
}

int main(){
    string A;
    cout<<"Enter your String :" ;
    cin>>A;
    sortString(A);
    cout<<"Sorted string is :"<<A;
    return 0;
}