#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
     int val;
     Node* next;
    Node(int val) {
        this->val=val;
        this->next=NULL;

    }
};
class myStack{
    vector<int>v;
    public:
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        if(v.size()==0) return true;
        else return false;
    }

};

class myQueue{
    public:
        Node * head= NULL;
        Node * tail= NULL;
        int sz=0;
        void push(int val){
            sz++;
            Node * newNode= new Node(val);
            if(head==NULL){
                head=newNode;
                tail=newNode;
                return;
            }
            tail->next=newNode;
            tail=tail->next;
        }
        void pop(){
            sz--;
            Node * deleteNode= head;
            head=head->next;
            delete deleteNode;
            if(head==NULL){
                tail=NULL;
            }
        }
        
        int front(){
            return head->val;
        }
        int size(){
            return sz;
        }
        bool empty(){
            if(sz==0) return true;
            else return false;
        }

};
int main(){
    int n,m;
    cin>>n>>m;
    myStack a;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push(x);
        
    }
    myQueue b;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        b.push(x);
        
    }
    int flag=1;
    
    if(a.size()!= b.size()){
        flag=0;
    }
    while(!a.empty() && !b.empty()){
        if(a.top()!= b.front()){
            flag=0;
            break;
        }
        a.pop();
        b.pop();

    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else if( flag==0){
        cout<<"NO"<<endl;
    }


    return 0;
}