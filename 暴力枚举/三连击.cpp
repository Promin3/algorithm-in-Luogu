#include<iostream>
#include<stdio.h>
using namespace std;

bool check(int x,int y,int z){
    if(y >= 999 || z >= 999) return 0;
    char a[15] = {0};
    a[x % 10] = 1;
    a[x / 10 % 10] = 1;
    a[x / 100] = 1;
     a[y % 10] = 1;
    a[y / 10 % 10] = 1;
    a[y / 100] = 1;
     a[z % 10] = 1;
    a[z / 10 % 10] = 1;
    a[z / 100] = 1;
    for(int i = 1;i < 10; i++){
        if( !a[i] ) return 0;
    }
    return 1;
}

int main(){
    int x,y,z,cnt;
    long long a,b,c;
   cin >> a >> b >> c;
    for (x = 123; x <= 987; x++){
        if( x * b % a || x * c % a ) continue;
         y = x * b / a;
         z = x * c / a;
    if( check(x, y, z) ) printf("%d %d %d\n",x,y,z),cnt++;
    }
    if (!cnt) printf("%s","No!!!");
    return 0;
}