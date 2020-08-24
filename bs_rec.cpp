#include<iostream>
using namespace std;

bool binarySearch(int *a,int start, int end, int key){
    int mid = (start+end)/2;
    if(key == a[mid]){
        return true;
    }
    if(start==end && key != a[mid]){
        return false;
    }

    if(key < a[mid]){
        return binarySearch(a,start,mid-1,key);
    }
    else if(key >a[mid]){
        return binarySearch(a,mid+1,end,key);
    }
    
    return -1;
}



int main(){
    int n,key;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >>key;

    cout << binarySearch(a,0,n,key)<<endl;
    
    return 0;
}