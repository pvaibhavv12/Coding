#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
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
    //cout << endl;
}

void inserion(node* temp,int key){

    queue<node*> q;
    q.push(temp);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp->left == NULL)
        {
            temp->left = new_node(key);
            return;
        }else{
            q.push(temp->left);
        }

        if(temp->right == NULL)
        {
            temp->right = new_node(key);
            return;
        }else{
            q.push(temp->right);
        }
    }
}

int main(){

    int n;
    cin >> n;
    node* head = new_node(10);

    while(n--){
        int temp;
        cin >> temp;
        inserion(head,temp);
        //cout << head->data << endl;
    }

    inorder(head);

}