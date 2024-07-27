//Frog problem

#include<bits/stdc++.h>
using namespace std;

int F(int *array,int n,int idx){
    if(idx==(n-1)) return 0;
    if(idx==(n-2)) return (F(array,n,idx+1)+abs(array[idx]-array[(idx+1)]));
    return min((F(array,n,idx+1)+abs(array[idx]-array[(idx+1)])),(F(array,n,idx+2)+abs(array[idx]-array[(idx+2)])));
}

int main(){
    int n;
    cout<<"Enter length of the array (hight of the stones): ";
    cin>>n;
    int array[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int Sum=F(array,n,0);
    cout<<"Minimum cost is :"<<Sum;
    return 0;
}