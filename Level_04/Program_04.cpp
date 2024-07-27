// A Program to now about void pointer.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    float m=9;
    void *ptr;
    ptr=&m;
    //cout<<*ptr;  it is not valid 
    float *ptr_01= (float *)ptr;
    cout<<*ptr_01;
    return 0;
}