#include<iostream>
using namespace std;
int main(){
	int a[110],i=0;
	for(;;i++){
		cin>>a[i];
		if(a[i]==0)break;	
	}
	i--;
	for(;i>=0;i--){
		cout<<a[i]<<' ';
	}
	return 0;
}
