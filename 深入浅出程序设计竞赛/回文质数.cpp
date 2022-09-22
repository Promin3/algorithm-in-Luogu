#include<iostream>
#include<cmath>
using namespace std;

//质数筛
bool is_prime(int n){
    if(n==0||n==1)
        return 0;
    if(n%2==0 || n%3==0)
        return 0;
    else{
        for(int h=2; h<=sqrt(n); h++){
            if(n%h == 0)return 0;
        }    
        return 1;
    }
}

//回文筛
bool is_hw(int n){
int sum=0;
int k=n;
while(n!=0){
    sum=sum*10+n%10;
    n/=10;
}
if(sum==k)
    return 1;
else 
    return 0;
}

int main() {
    int n,m;
    cin >> n >> m;
    for(int i=n ;i<=m; i++){
        if(i==998900)break;
        if(is_prime(i) && is_hw(i))
            cout << i <<endl;
    }
    return 0;
}