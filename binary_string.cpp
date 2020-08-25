#include<iostream>
using namespace std;

int binary_string(int n){
    //basecase
    if(n==0){
        return 1;
    }
    if(n==1){
        return 2;
    }
    if(n==2){
        return 3;
    }

    //rec case
    int answer = binary_string(n-1) + binary_string(n-2);
    return answer;
}


int main(){
    int n;
    cin >> n;
    int answer = binary_string(n);
    cout << answer << endl;
    return 0;
}