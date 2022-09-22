#include<iostream>
using namespace std;
#define max 100000
char a[max+10];
int main(){
	int L,load=0;
	cin>>L;
	for(int i=2;i<=max;i++){
		a[i]=1;
	} 
	for(int i=2;i<=max;i++)
		if(a[i])
			for(int j=2*i;j<=max;j+=i)a[j]=0; 
	int i=2,num=0;
	for(;i<=max;i++){
		if(a[i]){
			load+=i;
			if(load>L)break;
			num++;cout<<i<<endl;
		}
	}	
	cout<<num<<endl;
	return 0;
}
