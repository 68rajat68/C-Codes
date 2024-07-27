// A Program to find first and last index of the given character in the string.

#include<bits/stdc++.h>
using namespace std;

void findFirstAndLast(string A,char b,int *first,int *last){
    for(int i=0;i<A.size();i++){
        if(A[i] == b ){
            if(*first==(-1)){
                *first=i;
            }
            *last=i;
        }
    }
}

int main(){
    string A;
    char a;
    cout<<"Enter your string : ";
    cin>>A;
    cout<<"Enter charater : ";
    cin>>a;
    int first=-1;
    int last=-1;
    findFirstAndLast(A,a,&first,&last);
    cout<<a<<" apper at First index "<<first<<" and last index "<<last<<" in the given string.";
    return 0;
}