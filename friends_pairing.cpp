#include<iostream>
using namespace std;

int noPairs(int n){
    //basecase
    if(n==1){
        return 1;
    }
    if(n==0){
        return 1;
    }

    //rec case
    int answer = noPairs(n-1) + (n-1)*noPairs(n-2);
    return answer;
}

int main(){
    int n;
    cin >>n;
    int answer = noPairs(n);
    cout << answer<<endl;
    return 0;
}