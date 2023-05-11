#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
struct Queue{
    Node* top;
    Node* tail;
    void createQueue(){
        top=NULL;
        tail=NULL; 
    } 
    void add(){
        
    }
};
int main(){
    int c=0;
    cin>>c;
    cout<<c+2;
}
