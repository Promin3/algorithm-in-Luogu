#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
    int n,a[10];
    cin >> n;
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
    do{
        for(int i = 1; i <= n; i++){
            printf("%5d",a[i]);
        }
        puts("");
    }while(next_permutation(a + 1,a + n + 1));//ÇóÅÅÁÐº¯Êý
    return 0;
}