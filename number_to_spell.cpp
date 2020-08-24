#include<iostream>
using namespace std;

void spellNumber(int n){

    char value[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    //base case
    if(n==0){
        return;
    }
    //rec case
    spellNumber(n/10);
    int digit = n%10;
    cout << value[digit]<<" ";
}




int main(){
    int n;
    cin >>n;
    spellNumber(n);
    return 0;
}