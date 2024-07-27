/*
Pascal's triangle ;
for n=6;
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1
1 5 10 10 5 1   
*/

#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int combination(int n, int r){
    int Ans;
    Ans= fact(n)/(fact(n-r)*fact(r));
    return Ans;

}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}