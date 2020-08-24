#include<iostream>
using namespace std;

int firstOcc(int *a,int n,int key){
    if(n==0){
        return -1;
    }
    if(a[0]==key){
        return 0;
    }
    int i = firstOcc(a+1,n-1,key);
    if(i==-1){
        return -1;
    }
    return i+1;
}


int main(){
    int n,key;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> key;
    int r = firstOcc(a,n,key);
    cout << r<< endl;
    return 0;
}