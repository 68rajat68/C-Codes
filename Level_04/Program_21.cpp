// A Program to calculate no. of ways of going from top left to the bottom right of the given matix.

#include<bits/stdc++.h>
using namespace std;

void F(int idxr,int idxc,int r,int c,int *Count){
    /*if(idxr == r){
        F(idxr,idxc+1,r,c,Count);
    }
    if(idxc ==c){
        F(idxr+1,idxc,r,c,Count);
    }*/
    if(idxr == r && idxc==c ){
        (*Count)++;
        //cout<<(*Count);
        return;
    }
    if(idxr>r || idxc>c){
        return;
    }
    F(idxr,idxc+1,r,c,Count);
    F(idxr+1,idxc,r,c,Count);
}

int main(){
    int n,m;
    cout<<"Enter order of the matrix : ";
    cin>>n>>m;
    int Total=0;
    F(1,1,n,m,&Total);
    cout<<"Total: "<<Total;
    return 0;
}