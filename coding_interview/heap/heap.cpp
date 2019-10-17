#include<bits/stdc++.h>
using namespace std;

int parent_index(int i){
    return (i - 1)/2;
}

int left_child(int i){
    return 2*i + 1;
}
int right_child(int i){
    return 2*i + 2;
}

void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insert_key(vector<int> &v,int x){
    v.push_back(x);
    int index = v.size() - 1;

    while(index != 0 && v[parent_index(index)] > v[index]){
        swap(&v[parent_index(index)],&v[index]);
        index = parent_index(index);
    }

}

void heapify(vector<int>&v,int index){
    int left = left_child(index);
    int right = right_child(index);
    int smaller = index;
    if(left < v.size() && v[left] < v[smaller])
        smaller = left;
    if(right < v.size() && v[right] < v[smaller])
        smaller = right;
    if(smaller != index)
    {
        swap(&v[smaller],&v[index]);
        heapify(v,smaller);
    }
}

void remove_min(vector<int>&v){
    if(v.size() == 0)
        return ;
    if(v.size() == 1)
    {    
        v.pop_back();
        return;
    }
    v[0] = v[v.size() - 1];
    heapify(v,0);
    v.pop_back(); 

}




void display_vector(vector<int>&v){
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;
}

int main(){

    vector<int> v;
    insert_key(v,5);
    display_vector(v);
    insert_key(v,6);
    display_vector(v);
    insert_key(v,2);
    display_vector(v);
    insert_key(v,1);
    
    insert_key(v,9);
    
    insert_key(v,3);
    
    insert_key(v,7);
    
    insert_key(v,8);

    vector<int> v1 = {5,6,2,1,9,3,7,8};

    for(int i = 3;i >=0;i-- )
        heapify(v1,i);

    display_vector(v1);
    


}