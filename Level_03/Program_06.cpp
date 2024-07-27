//Check is there any partition such that prefix sum is equal to suffix sum.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector <int> V1;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        V1.push_back(ele);
    }
    bool flag=false;
    int left_ptr=1;int preFixSum=V1[0];
    int right_ptr=(n-2);int sufFixSum=V1[(n-1)];
    while(left_ptr!=(right_ptr+1)){
        if(preFixSum<sufFixSum){
            preFixSum+=V1[left_ptr++];
        }else{
            sufFixSum+=V1[right_ptr--];
        }
       // cout<<endl<<left_ptr<<" "<<right_ptr;
    }
    if(preFixSum==sufFixSum) cout<<"TRUE";
    else cout<<"FALSE" ;
    //cout<<endl<<left_ptr<<" "<<right_ptr;
    cout<<endl<<"PreFix_Sum: "<<preFixSum<<" and SufFixSum: "<<sufFixSum;
}