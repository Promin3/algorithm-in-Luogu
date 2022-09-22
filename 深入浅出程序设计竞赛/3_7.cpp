#include<iostream>
using namespace std;

int c(int n,int k){
    if(k > n) 
        return 0;
    if(k == n || k == 0) 
        return 1;
    else
        return c(n-1,k) + c(n-1,k-1);
}

int main(){
    int n,k;
    cout << "Please enter two integers n and k :";
    cin >> n >> k;
    cout << "C(n,k) = " << c(n,k) <<endl;
    return 0;
}