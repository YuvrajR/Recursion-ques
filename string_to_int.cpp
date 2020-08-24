#include <bits/stdc++.h>
using namespace std;

int toNumber(char *a, int n){
    //base case
    if(n==0){
        return 0;
    }
    //rec case
    int digit = a[n-1] - '0';
    int num = toNumber(a,n-1);
    return num*10 + digit;

}


int main(){
    char str[] = "2567";
    int len = strlen(str);
    int number = toNumber(str,len);
    cout<<number<<endl;
    return 0;
}