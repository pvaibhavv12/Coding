#include<iostream>
#include<vector>
using namespace std;

int left_search(vector<int> &v,int start,int end,int key){

    if(start <= end){
        int mid =( start + end ) / 2;
        if((mid == start && v[mid] == key) || (v[mid] == key && v[mid - 1] < key))
            return mid;
        else if(key > v[mid])
            return left_search(v,mid + 1,end,key);
        else
            return left_search(v,start,mid - 1,key);
    }
    return -1;

}

int right_search(vector<int> &v,int start,int end,int key){
    if(start <= end){
        int mid = (start + end)/2;
        if((mid == end && v[mid] == key) || (v[mid] == key && v[mid + 1] > key))
            return mid;
        else if(key < v[mid])
            return right_search(v,start,mid - 1,key);
        else
            return right_search(v,mid+1,end,key);
    }
    return -1;
}


int main(){

     vector<int> v = {1,1,1,2,2,2,2,3,3,3,3,3,3,4,4,4,4,6,6};
    cout << left_search(v,0,v.size() - 1,3) << endl;
    cout << right_search(v,0,v.size() - 1,3) << endl;

}