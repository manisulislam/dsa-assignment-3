#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<string>q;
    int n;
    cin>>n;
   
    while(n--){
        int command;
        cin>>command;
        if(command==0){
            string name;
            cin>>name;
            q.push(name);

        }
        else if(command==1) {
            if(q.empty()){
                cout<<"Invalid"<<endl;
            }
            else{
                cout<<q.front()<<endl;
                q.pop();
            }
        }
    }
    return 0;
}