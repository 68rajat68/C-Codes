// A Program to find the sum of all element upto given pair.

//In this case we have three methods.

#include<bits/stdc++.h>
using namespace std;
struct matrix{
    int n,m;
    int a['n']['m'];
};
//Method_01
int Sum1(matrix &A,int r1,int c1,int r2,int c2){
    int way=0;
    int Sum=0;
    while(r1<=r2 && c1<=c2){
        if(way==0){
            for(int i=c1;i<=c2;i++){
                Sum+=A.a[r1][i];
            }
            r1++;
        }else if(way==1){
            for(int i=r1;i<=r2;i++){
                Sum+=A.a[i][c2];
            }
            c2--;
        }else if(way==2){
            for(int i=c2;i>=c1;i--){
                Sum+=A.a[r2][i];
            }
            r2--;
        }else {
            for(int i=r2;i>=r1;i--){
                Sum+=A.a[i][c1];
            }
            c1++;
        }
        way++;
        way%=4;
    }
    return Sum;
}
//Method_02
int Sum2(matrix &A,int r1,int c1,int r2,int c2){
    int Sum=0;
    for(int i=0;i<A.n;i++){
        for(int j=1;j<A.m;j++){
            A.a[i][j]+=A.a[i][(j-1)];
        }
    }
    for(int i=r1;i<=r2;i++){
        if(r1!=0){
            Sum+=A.a[i][c2]-A.a[i][(c1-1)];
        }else{
            Sum+=A.a[i][c2];
        }
    }
    return Sum;
}
//Method_03
int Sum3(matrix &A,int r1,int c1,int r2,int c2){
    for(int i=0;i<A.n;i++){
        for(int j=1;j<A.m;j++){
            A.a[i][j]+=A.a[i][(j-1)];
        }
    }
    for(int i=1;i<A.n;i++){
        for(int j=0;j<A.m;j++){
            A.a[i][j]+=A.a[(i-1)][j];
        }
    }
    int top_Sum=0;int left_Sum=0;int topLeft_Sum=0;
    if(r1!=0) top_Sum=A.a[(r1-1)][c2];
    if(c1!=0) left_Sum=A.a[r2][(c1-1)];
    if(r1!=0 && c1!=0) topLeft_Sum=A.a[(r1-1)][(c1-1)];

    int Sum=0;
    Sum=A.a[r2][c2]-top_Sum-left_Sum+topLeft_Sum;
    return Sum;
}
int main(){
    int r1,c1,r2,c2;
    matrix A;
    cout<<"Enter order of the matix: ";
    cin>>A.n>>A.m;
    cout<<"Enter elements of the matrix: ";
    for(int i=0;i<A.n;i++){
        for(int j=0;j<A.m;j++){
            cin>>A.a[i][j];
        }
    }
    cout<<"Enter order of the first element ";
    cin>>r1>>c1;
    cout<<"Enter order of the second element ";
    cin>>r2>>c2;
    cout<<"Given matrix is : \n";
    for(int i=0;i<A.n;i++){
        for(int j=0;j<A.m;j++){
            cout<<A.a[i][j]<<" ";
        }
        cout<<endl;
    }
    int Sum=Sum3(A,r1,c1,r2,c2);
    cout<<"Sum in the given rectangle is :"<<Sum;
}