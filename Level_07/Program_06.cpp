// A Program to decode the given coded string .

#include<bits/stdc++.h>
using namespace std;

string decodedmsg(string &A){
    /*
    space complexity is O(n) where n is length of the decoded string.
    Time Complexity is O(n) where n is length of the decoded string.
    */
    string result="";
    for(int i=0;i<A.size();i++){
        if(A[i]!=']'){
            result.push_back(A[i]);
        }else{
            string str="";
            while(!result.empty() && result.back()!='['){
                str.push_back(result.back());
                result.pop_back();
            }
            reverse(str.begin(),str.end());

            result.pop_back();

            string num="";
            while(!result.empty() && (result.back()>='0' && result.back()<='9')){
                num.push_back(result.back());
                result.pop_back();
            }
            reverse(num.begin(),num.end());
            int int_num=stoi(num);
            while(int_num){
                result+=str;
                int_num--;
            }
        }
    }
    return result;
}

int main(){
    string A;
    cout<<"Enter your coded string : ";
    cin>>A;
    string Ans=decodedmsg(A);
    cout<<"Your string after decoding : "<<Ans;
    return 0;
}