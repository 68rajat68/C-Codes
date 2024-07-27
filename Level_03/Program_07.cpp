// To Find sum of the elements of array in given range .

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter length of the array: ";
    cin>>n;
    vector <int> V1((n+1),0);
    cout<<"Enter elements: ";
    for(int i=1;i<=n;i++){
        cin>>V1[i];
    }
    for(int i=2;i<=n;i++){
        V1[i]+=V1[i-1];
    }
    cout<<"Enter how many quary are there : ";
    int m;
    cin>>m;
    while(m--){
        cout<<"\nEnter range : ";
        int l,r;
        cin>>l>>r;
        int Sum=0;
        Sum=V1[r]-V1[(l-1)];
        cout<<"Sum of the elements in given range is : "<<Sum;
    }
}