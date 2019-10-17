#include<bits/stdc++.h>
using namespace std;

typedef struct Node{

    int data;
    struct node* left;
    struct node* right;

}node;

node* new_node(int key){

    node* temp = new node;
    temp->data = key;
    temp->left = temp->right = NULL;
    return temp;

}

void inorder(node* head){
    if(head != NULL){
        inorder(head->left);
        cout << head->data << " ";
        inorder(head->right);
    }
}

void insert(node* head,int key){

    if(head == NULL){
        head = new_node(key);
        return;
    }
    queue<node*> q;
    q.push(head);
    
    while(!q.empt()){
        node* temp = q.front();
        q.pop();

        if(temp->left == NULL){
            temp->left = new_node(key);
            break;
        }else
            q.push(temp->left);

        if(temp->right == NULL){
            temp->right = new_node(key);
            break;
        }else
            q.push(temp->right);
    }

}

void inorder_iter(node* head){
    if(head == NULL)
        return;
    stack<node*> s;
    node* temp = head;
    while( temp != NULL || !s.empty()){

        while (temp != NULL)
        {
            s.push(temp);
            temp = temp->left;
        }

        temp = s.top();
        s.pop();
        cout << temp->data << " ";
        temp = temp->right;

    }

}

int get_leaf_count(node*head){
    if(head == NULL)
        return 0;
    else if(head->left == NULL && head->right == NULL)
        return 1;
    else
        return(get_leaf_count(head->right) + get_leaf_count(head->left));
}

int size(node* head){
    if(head == NULL)
        return 0;
    else{
        return (size(head->right + 1 + size(head->left)));
    }
}

int main(){

}