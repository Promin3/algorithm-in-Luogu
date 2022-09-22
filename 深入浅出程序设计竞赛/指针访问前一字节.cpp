#include<iostream>
using namespace std;
int main(){
	int a=7;
	char*p=(char*)&a;
	--p;
	scanf("%c",*p);
	return 0;
} 
