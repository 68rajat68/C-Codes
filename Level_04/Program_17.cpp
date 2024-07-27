//A Program to check given number is armstrong number or not.

#include<bits/stdc++.h>
using namespace std;

int Power(int a,int b){
    int Pow=1;
    for(int i=0;i<b;i++){
        Pow*=a;
    }
    return Pow;
}
int F(int n,int d){
    if(n==0) return 0;
    int Sum=Power((n%10),d);
    return (Sum + F(n/10,d));
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int digits=0,m=n;
    while(m!=0){
        m/=10;
        digits++;
    }
    int Sum=F(n,digits);
    if(Sum==n) cout<<"YES";
    else cout<<"NO";
    return 0;
}