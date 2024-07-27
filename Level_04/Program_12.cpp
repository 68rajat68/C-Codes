//A Program to find that given number is palindrome or not ?

#include<bits/stdc++.h>
using namespace std;

bool F(int n,int *temp){
    if(n>=0 && n<=9){
        int lastDigitOfTemp;
        lastDigitOfTemp=(*temp)%10;
        (*temp)/=10;
        return (n==lastDigitOfTemp);
    }
    bool flag;
    flag = (F(n/10 , temp) && ((n%10)==(*temp)%10));
    (*temp)/=10;
    return flag;
    
}
bool f(int num,int *temp);
int main(){
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    int temp;
    temp=n;
    bool Check=f(n,&temp);
    if(Check) cout<<"Given number is palindrome ";
    else cout<<"Given number is not a palindrome number.";
    return 0;
}

bool f(int num,int *temp){
    if(num>=0 and num<=9){
        int lastDigitOfTemp=(*temp)%10;
        (*temp)/=10;
        return (num%10 == lastDigitOfTemp);
    }
    bool flag = (f(num/10,temp) and ((num%10)==(*temp)%10));
    (*temp)/=10;
    return flag;
}