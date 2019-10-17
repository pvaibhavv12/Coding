#include<bits/stdc++.h>
using namespace std;

typedef struct node{
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
    queue<node*> q;
    q.push(head);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp->left == NULL){
            temp->left = new_node(key);
            break;
        }else{
            q.push(temp->left);
        }
        if(temp->right == NULL){
            temp->right = new_node(key);
            break;
        }else
        {
            q.push(temp->right);
        }
        
    }
}

int find_max(node* head){
    int root_value,left_value,right_value,max_value = 0;
    if(head != NULL){
        root_value = head->data;
        left_value = find_max(head->left);
        right_value = find_max(head->right);

        max_value = max(max(root_value,left_value),right_value);
    }

    return max_value;
}

int find_max_levelorder(node* head){
    queue<node*> q;
    q.push(head);
    int max_value = 0;
    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if(temp->data > max_value)
            max_value = temp->data;
        if(temp->left != NULL)
            q.push(temp->left);
        if(temp->right != NULL)
            q.push(temp->right);

    }

    return max_value;
    
}

int search(node* head,int key){
    if(head != NULL){
        if(head->data == key)
            return 1;
        else{
            int temp = search(head->left,key);
            if(temp)
                return temp;
            else
                return search(head->right,key);
        }
    }
}

int main(){
    int n;
    cin >> n;
    node* head = new_node(n);
    while(n--){
        int temp;
        cin >> temp;
        insert(head,temp);
    }

    cout << find_max(head) << endl;
    cout << find_max_levelorder(head) << endl;
    cout << search(head,3) << endl;

}