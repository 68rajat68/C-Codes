// A Program to learn Strings.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int A=34;
    char Arr[20];
    string n;
    cout<<"Enter your name :";
    //getline(cin,n);
    cin>>Arr;
    n=Arr;
    cout<<n.length()<<" ";
    cout<<strlen(Arr)<<endl;
    string strA=to_string(A);
    cout<<strA+"1"<<endl;
    int Ans=int(Arr[0]);
    cout<<Ans;
    return 0;
}