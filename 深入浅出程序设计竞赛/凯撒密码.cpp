#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n;
    char a[55];
    scanf("%d %s",&n,a);
    for(int i=0;a[i];i++){
        putchar((a[i]-'a'+n)%26+'a');/*putchar函数用于输出一个
        字符，括号内数字表示字符的ASCII码
        */
    }
    return 0;
}