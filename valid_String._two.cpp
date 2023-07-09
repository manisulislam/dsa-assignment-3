#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        stack<char>s1;
        for(char c: s){
            if(!s1.empty()&&((c=='A' && s1.top()=='B')|| (c=='B' && s1.top()=='A'))){
                s1.pop();
            }
            else{
                s1.push(c);
            }
        }
        if(s1.empty()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}