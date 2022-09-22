#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n,bigger;
    bool is_prime=1;
    scanf("%d",&n);
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            bigger=n/i;
        for(int h=2;h*h<=bigger;h++){
            if(bigger%h==0) is_prime=0;
            }
        }
        else  continue;
        if(is_prime) break;
    }
    printf("%d",bigger);
    return 0;
}