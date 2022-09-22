#include<iostream>
#include<cstdio>
#define max 110
using namespace std;
char a[max];
int main(){
	scanf("%s",a);
	for(int i=0;a[i]!='\0';i++){
		if(a[i]<='z' && a[i]>='a'){
			a[i]-='a'-'A';
		}
	}
	printf("%s",a);
}
