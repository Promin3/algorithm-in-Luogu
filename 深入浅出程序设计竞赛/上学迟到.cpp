#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	int s,v;
	scanf("%d%d",&s,&v);
	int span=ceil(1.0*s/v);
	int t=32*60-span;
	int h=(t/60)%24;
	int m=t%60;
	printf("%d:%d",h,m);
	return 0;
} 
