#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct node{
    int element;
    struct node* next;
} node;

typedef struct list{
    node* head;
} list;



void add_ele(list* list,int ele){
    
    node* temp = (node*)malloc(sizeof(node*));
    temp->element = ele;
    temp->next = NULL;
    
    if(list->head == NULL)
    {
        list->head = temp;
    }else{
        node* pre = list->head;
        while(pre->next != NULL)
            pre = pre->next;
        pre->next = temp;
    }   

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
        cout << temp->element << endl;
        temp = temp->next;
    }
}

node* merge(node* a,node* b){
    
    node* temp = NULL;
    if(a == NULL)
        return a;
    if(b == NULL)
        return b;
    if(a->element < b->element)
    {
        temp = a;
        temp->next = merge(a->next,b);
    }else
    {
        temp = b;
        temp->next = merge(a,b->next);
    }
    return temp;
}

int main(){

    list* test1,*test2;
    test1 = list_init();
    
    add_ele(test1,1);
    add_ele(test1,1);
    add_ele(test1,2);
    add_ele(test1,5);
    add_ele(test1,6);
    add_ele(test1,7);
    //cout << "done 1\n";
    
    test2 = list_init();

    add_ele(test2,1);
    add_ele(test2,2);
    add_ele(test2,3);
    add_ele(test2,4);
    add_ele(test2,4);
    add_ele(test2,9);
    
    node* temp = merge(test1->head,test2->head);
    temp->element = 6;

    while(temp != NULL)
    {
        printf("%d \n",temp->element);
        temp = temp->next;

    }
    cout << "/////////////////////////////////\n";
    list_display(test1);
    cout << "/////////////////////////////////\n";
    list_display(test2);
}
