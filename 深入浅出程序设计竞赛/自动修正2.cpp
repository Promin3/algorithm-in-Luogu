#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    char s;
    while(1){
        if(s==EOF)break;
        if('a'<=s && s<='z'){
            s-='a'-'A';
        }
        putchar(s);
    }
    return 0;
}