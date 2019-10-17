#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

typedef struct node{
    int element;
    struct node* next;
} node;

typedef struct list{
    node* head;
} list;

typedef struct req{

    int pos;
    node* add;

} req;

void add_ele(vector<req*> &v,list* list,int ele){
    
    node* temp = (node*)malloc(sizeof(node*));
    temp->element = ele;
    temp->next = NULL;
    req* r = (req*)malloc(sizeof(req*));
    if(list->head == NULL)
    {
        list->head = temp;
    }else{
        node* pre = list->head;
        while(pre->next != NULL)
            pre = pre->next;
        
        pre->next = temp;
    }

    r->pos = v.size();
    r->add = temp;
    v.push_back(r);
}

list* list_init(){
    list* temp = (list*)malloc(sizeof(list*));
    temp->head = NULL;
    return temp;
}

void list_display(list* list){
    node* temp = list->head;
    while(temp != NULL)
    {
        cout << temp << endl;
        temp = temp->next;
    }
}

void print_hash_table(vector<req*> &v){
    for(int i = 0;i < v.size();i++){
        printf("pos : %d add : %p\n",v[i]->pos,v[i]->add);
    }
}

int main(){
    list* test;
    vector<req*> v;
    test = list_init();
    add_ele(v,test,5);
    add_ele(v,test,1);
    add_ele(v,test,2);
    add_ele(v,test,3);
    add_ele(v,test,4);
    list_display(test);
    cout << (v[3]->add)->element << endl;

    
}