//A Program to Swap number using pointer 

#include<bits/stdc++.h>
using namespace std;

void Swap(int *A,int *B){
    int temp=*A;
    *A=*B;
    *B=temp;
}
int main(){
    int n,m;
    cout<<"Enter any two integers N and M :";
    cin>>n>>m;
    Swap(&n,&m);
    cout<<"After swaping given number we have N="<<n<<" and M= "<<m;
    return 0;
}