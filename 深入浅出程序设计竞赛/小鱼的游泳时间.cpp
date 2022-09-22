#include<iostream>
#include<cstdio>
int main(){
	int a,b,c,d,e,f,g;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	g=c*60+d-a*60-b;
	e=g/60;
	f=g%60;
	printf("%d %d",e,f);
	return 0;
} 
