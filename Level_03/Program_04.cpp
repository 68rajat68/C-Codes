//A Program to print square of the given shorted array in non decreasing order

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector <int> V1;
    cout<<"Enter length of the array :";
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        V1.push_back(ele);
    }
    vector <int> ans;
    int left_ptr=0;
    int right_ptr=(n-1);
    while(left_ptr<=right_ptr){
        if(abs(V1[left_ptr])<abs(V1[right_ptr])){
            ans.push_back(V1[right_ptr]*V1[right_ptr]);
            right_ptr--;
        }else{
            ans.push_back(V1[left_ptr]*V1[left_ptr]);
            left_ptr++;
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}