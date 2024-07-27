// A Program to find factorial of the number using recursion.

#include<bits/stdc++.h>
using namespace std;

long int Fact(int n){
    if(n==0) return 1;
    return (n*Fact(n-1));    
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    long int Ans=Fact(n);
    cout<<"Factorial of the "<<n<<" is :"<<Ans;
    return 0;
}