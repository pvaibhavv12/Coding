#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}node ;

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
    if(head == NULL)
    {
        head = new_node(key);
        return;
    }

    node* temp = head;
    node* prev = NULL;
    //bool done = false;
    while(temp != NULL){
        prev = temp;
        if(key > temp->data)
            temp = temp->right;
        else
            temp = temp->left;
    }

    if(prev->data > key)
        prev->left = new_node(key);
    else
        prev->right = new_node(key);
}

void print_level(node* head,int level){
    if(head == NULL)
        return;
    if(level == 1)
        cout << head->data << " ";
    else if(level > 1)
    {
        print_level(head->left,level-1);
        print_level(head->right,level-1);
    }
}

node* insert_rec(node* head,int key){
    if(head == NULL)
        return new_node(key);
    else if (head->data > key)
        head->left = insert_rec(head->left,key);
    else
        head->right = insert_rec(head->right,key);
}

void print_queue(node* head){
    queue<node*> q;
    if(head == NULL)
        return;
    q.push(head);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if(temp->left != NULL)
            q.push(temp->left);
        if(temp->right != NULL)
            q.push(temp->right);
    }
}

void inorder_iter(node* head){
    stack<node*> s;
    node* temp = head;
    while (temp != NULL || !s.empty())
    {
        while(temp != NULL)
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


int main(){

    int n;
    cin >> n;
    node* head = new_node(n);
    while(n--){
        int temp;
        cin >> temp;
        insert_rec(head,temp);
        //
    }

    //print_level(head,3);
    inorder(head);
    cout << "fffffffffffffffffffffffffff\n";
    inorder_iter(head);
}