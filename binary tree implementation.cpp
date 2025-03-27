#include<iostream>
using namespace std;
class node{
    public: int data;
    node *left;
    node *right;
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    cout<<"preorder\n";
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    
}