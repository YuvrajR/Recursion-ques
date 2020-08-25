#include<iostream>
using namespace std;

int climbWays(int n){
    //base case
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    if(n==3){
        return 4;
    }
    //rec case
    int answer = climbWays(n-1) + climbWays(n-2) + climbWays(n-3);
    return answer;
}

int main(){
    int n;
    cin >> n;
    int answer = climbWays(n);
    cout <<answer <<endl;
    return 0;
}