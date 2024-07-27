//A Program to find n th fibonacci number using recursion.

#include<bits/stdc++.h>
using namespace std;

int F(int n){
    if(n==0 || n==1 ) return n;
    return (F(n-1)+F(n-2));
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int Ans=F(n);
    cout<<"Ans: "<<Ans;
    return 0;
}

//In the above program space complexity is O(n).

//To find space complexity we have to find maximum number
// of stack frame is used in the function.

//Ans Time Complexity is O(2^n).
//To find Time complexity in such case we have to find how much
//times the function is called and multiply it by time in single function.

