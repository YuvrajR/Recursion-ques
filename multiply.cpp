#include<iostream>
using namespace std;

int multiply(int a,int b){
    if(b==0){
        return 0;
    }
    int result = a;

    return result + multiply(a,b-1);
}
int main(){
    int a,b;
    cin >> a >>b;
    int r = multiply(a,b);
    cout <<r;
    return 0;
}