#include<bits/stdc++.h>
using namespace std;

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
}Node ;

Node* new_node(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void insert(Node* root,int data){

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(!temp->left){
            temp->left = new_node(data);
            break;
        }else
            q.push(temp->left);
        if(!temp->right){
            temp->right = new_node(data);
            break;
        }else
            q.push(temp->right);
        
    }
}

void del_dellpest(Node* root,Node* to_del_node){
    queue<int> q;
    q.push(root);
    Node* temp;
    while(!q.empty()){
        temp = q.front();
        q.pop();
        
        if(temp == to_del_node){
            temp = NULL;
            delete (to_del_node);
            return;
        }
        if(temp->right){
            if(temp->right == to_del_node){
                temp = NULL;
                delete (to_del_node);
                return;
            }else
                q.push(temp->left);
        }
        if(temp->left){
            if(temp->left == to_del_node){
                temp = NULL;
                delete (to_del_node);
                return;
            }else
                q.push(temp->right);
        }

    }
    
}

Node* del_node(Node* root,int to_del){

    if(root == NULL)
        return NULL;
    if(root->right == NULL && root->right == NULL){
        if(root->data == to_del)
            return NULL;
        else
            return root;
    }

    queue<Node*> q;
    q.push(root);
    Node* temp ,*to_del_node = NULL;
    while(!q.empty()){
        temp = q.front();
        q.pop();
        if(temp->data == to_del){
            to_del_node = temp;
            break;
        }
        if(!temp->left)
            q.push(temp->left);
        if(!temp->right)
            q.push(temp->right);
    }

    if(del_node != NULL)
    {
        int deppest_node_value = temp->data;
        del_dellpest(root,temp);
        to_del_node->data = deppest_node_value;
    }

    return root;

}

void inorder(Node* root){
    if(root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
    Node *head = new_node(10);
    insert(head,11);
    insert(head,7);
    insert(head,9);
    insert(head,15);
    insert(head,8);
    //if(head == NULL)
    //cout << "what " << endl;
    inorder(head);
}