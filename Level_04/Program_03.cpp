//A Program to learn pointer arithmetic.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=1;
    int *ptr_01=&a;
    //cout<<ptr_01<<" "<<*ptr_01;
    int A[3]={1,5,10};
    int *ptr_02=A;
    //cout<<++(*ptr_02)<<" ";
    //cout<<ptr_02;
    //cout<<endl<<A;
    int (*P)[3] = &A;
    cout<<P<<" ";
    cout<<++P;
    return 0;
}