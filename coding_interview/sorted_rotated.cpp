#include<iostream>
#include<vector>
using namespace std;

int BS(vector<int> &v,int start,int end,int key){
    
    if(start <= end)
    {
        int mid = (start + end)/2;
        if(v[mid] == key)
            return mid;
        if(v[mid] > key)
            return BS(v,start,mid-1,key);
        else
            return BS(v,mid+1,end,key);
    }
    return -1;

}

int find_pivote(vector<int> &v,int start,int end){
    if(start == end)
        return start;
    if(start == end - 1)
    {
        if(v[start] > v[end])
            return start;
        else
            return end;
    }else
    {   
        int mid = (start + end) / 2;
        if(v[start] >= v[mid])
            return find_pivote(v,start,mid);
        else
            return find_pivote(v,mid,end);
    }
}

int search(vector<int> &v,int n,int key){
    int pivote = find_pivote(v,0,n - 1);

    if(v[pivote] == key)
        return pivote;
    if(v[0] < key)
        return BS(v,0,pivote-1,key);
    else
        return BS(v,pivote+1,n-1,key);
}



int main(){
    vector<int> v = {5,6,7,8,9,1,2,3,4};
    cout << search(v,9,2) << endl;
}