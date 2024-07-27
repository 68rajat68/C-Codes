//A Program to print spiral order of the given matrix

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int m,n;
    //vector<vector<int> > A(n , vector<int> (m));
    cout<<"Enter order of the matrix: ";
    cin>>n>>m;
    int A[n][m];
    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Given matrix is : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    int top=0,bottom=(n-1);
    int left=0,right=(m-1);
    int way=0;
    while(top<=bottom && left<=right){
        if(way==0){
            for(int i=left;i<=right;i++){
                cout<<A[top][i]<<" ";
            }
            top++;
        }else if(way==1){
            for(int i=top;i<=bottom;i++){
                cout<<A[i][right]<<" ";
            }
            right--;
        }else if(way==2){
            for(int i=right;i>=left;i--){
                cout<<A[bottom][i]<<" ";
            }
            bottom--;
        }else{
            for(int i=bottom;i>=top;i--){
                cout<<A[i][left]<<" ";
            }
            left++;
        }
        way++;
        way=way%4;
        //cout<<" //"<<way<<"//";
    }
}