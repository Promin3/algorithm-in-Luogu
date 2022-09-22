#include<iostream>
using namespace std;
int main(){
	int n,temp,minnum=1000;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(temp<minnum)minnum=temp;
	}
	cout<<minnum<<endl;
	return 0;
} 
