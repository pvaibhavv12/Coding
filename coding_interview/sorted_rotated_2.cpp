#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> &v,int start,int end,int key){
    int mid = (start + end ) / 2;
    
    if(start > end)
        return -1;
    
    if(v[mid] == key)
        return mid;
    if(v[start] <= v[mid])
    {
        if(key >= v[start] && key <= v[mid])
            return search(v,start,mid,key);
        return search(v,mid,end,key);
    }
    if(key <= v[end] && key >= v[mid])
        return search(v,mid,end,key);
    return search(v,start,mid,key);

}

int main(){
    vector<int> v = {5,6,7,8,9,1,2,3,4};
    cout << search(v,0,8,2) << endl;
}