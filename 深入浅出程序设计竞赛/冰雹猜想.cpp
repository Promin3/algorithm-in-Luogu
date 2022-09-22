#include<iostream>
using namespace std;
int main(){
	int n,a[205],num=0;
	cin>>n;
	while(n!=1){
		a[num]=n;num++;
		if(n%2!=0)n=n*3+1;
		else n/=2;
	}
	a[num]=1;
	for(int i=num;i>=0;i--)
		cout<<a[i]<<' ';
	return 0;
} 
