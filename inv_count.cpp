#include<iostream>
using namespace std;

int merge(int *a,int s, int e){
    int i = s;
    int mid = (s+e)/2;
    int j = mid+1;
    int k = s;
    int cnt = 0;
    int temp[1000];
    while(i<=mid && j <=e){
        if(a[i]<=a[j]){
            temp[k++] = a[i++];
        }
        else{
            cnt+=mid - i + 1;
            temp[k++] = a[j++];
        }
    }

    while(i<=mid){
        temp[k++] = a[i++];
    }
    while(j<=e){
        temp[k++] = a[j++];
    }
    for(int i=0;i<=e;i++){
        a[i] = temp[i];
    }
    return cnt;
}

int inversionCount(int *a,int s, int e){
    if(s>=e){
        return 0;
    }

    int mid = (s+e)/2;
    int x = inversionCount(a,0,mid);
    int y = inversionCount(a,mid+1,e);
    int z = merge(a,s,e);

    return x+y+z;
}


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int result = inversionCount(a,0,n-1);
    cout << result << endl;
}