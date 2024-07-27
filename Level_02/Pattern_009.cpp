/*
Floyd's triangle 
for n=5;
1
2 3
4 5 6
7 8 9 10
11 12 13 14

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int Sum=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<Sum++<<" ";
        }
        cout<<endl;
    }
    return 0;
}