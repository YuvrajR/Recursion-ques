#include<bits/stdc++.h>
using namespace std;

int tiling_problem(int n){
    //base case
    if(n==1 || n==2 || n==3){
        return 1;
    }
    if(n==4){
        return 2;
    }
    //rec case
    int numWays = tiling_problem(n-1) + tiling_problem(n-4);

    return numWays;
}

int main(){
    int n;
    cin >> n;
    int answer = tiling_problem(n);
    cout << answer<<endl;

    return 0;
}