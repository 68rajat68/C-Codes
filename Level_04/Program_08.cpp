//A Program to find sum of all digits of the given number by recursion only

#include<bits/stdc++.h>
using namespace std;

int F(int n){
    if(n==0) return 0;  //OR if(n>=0 && n<=9) return n;
    return ((n%10)+F(n/10));
}
int main(){
    int n ;
    cout<<"Enter the number :" ;
    cin>>n;
    int Ans=F(n);
    cout<<"Sum of all digits of "<<n<<" is :" <<Ans;
    return 0;
}