#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    queue<int>q;
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.push(x);
    }
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        q.push(x);
    }
    
    int flag=1;
    if(s.size()!=q.size()){
        flag=0;
    }
    while(!s.empty()&& !q.empty()){
        if(s.top()!=q.front()){
            flag=0;
            break;
        }
        s.pop();
        q.pop();

    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else if( flag==0){
        cout<<"NO"<<endl;
    }

    
    
    return 0;
}