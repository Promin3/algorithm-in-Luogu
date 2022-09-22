#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int n,k,num=0,sum=0;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		if(i%k==0){
		num+=1;
		sum=sum+i;
		}
	}
	double averageA=1.0*sum/num;
	double averageB=1.0*(n*(n+1)/2-sum)/(n-num);
	printf("%.1f %.1f",averageA,averageB);
	
	
	return 0;
}
