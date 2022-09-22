#include<iostream>
#include<cstdio>
//#include<cmath>
using namespace std;

bool is_prime(int k){
    for(int h = 2; h*h <= k; h++){
        if(k % h == 0)return 0;
    }
    return 1;
}

int main(){
    int N,n,b;
    scanf("%d",&N);
for (int i=4; i<=N ; i++){
    if( i % 2 == 0) n=i;
    else continue;
    for (int a=2; a<=n/2; a++){
        if(is_prime(a)){
            b = n - a;
            if(is_prime(b)){
            printf("%d=%d+%d\n",n,a,b);
            break;
            }
        }
    }
}
    return 0;
}