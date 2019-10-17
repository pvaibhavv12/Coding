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
        
        if(ele == 3)
            temp->next = list->head;
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
        cout << temp << endl;
        temp = temp->next;
    }
}

bool is_cyclic(list* list){

    node* prev,*pre;
    if(list->head == NULL)
        return false;
    if(list->head->next == NULL)
        return false;

    pre = list->head;
    prev = list->head;
    bool hascycle = false;
    
    while (!hascycle && pre != NULL && pre->next != NULL)
    {
        pre = pre->next->next;
        prev = prev->next;
        if(pre ==  prev)
            hascycle = true;

    }

    
    if(hascycle)
    {
        pre = list->head;
        cout << pre << " " << prev << endl;
        while(pre != prev){
            pre = pre->next;
            prev = prev->next;
            cout << "sadf";
        }

        cout << "they meet at element and pointer :" << pre->element << pre << " "<< prev ;
        return true;
    }
        
    return false;
}




int main(){
    list* test;
    test = list_init();
    
    add_ele(test,5);
    add_ele(test,1);
    add_ele(test,2);
    add_ele(test,5);
    add_ele(test,5);
    add_ele(test,3);

    is_cyclic(test);


    cout << test->head << endl;


}