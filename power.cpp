#include<iostream>
using namespace std;

int pow(int n, int p){
    //base case
    if(p==0){
        return 1;
    }
    if(p==1){
        return n;
    }
    //rec case
    return n*pow(n,p-1);
}




int main(){
    int n,p;
    cin >> n >> p;
    int a = pow(n,p);
    cout << a;
    return 0;
}