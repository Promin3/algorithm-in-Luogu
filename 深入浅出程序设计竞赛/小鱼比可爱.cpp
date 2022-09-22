#include<iostream>
using namespace std;
int main(){
	int n,a[110];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int j=0;j<n;j++){
		int num=0;
		for(int k=j-1;k>=0;k--){
			if(a[k]<a[j])num++;
		}
		cout<<num<<" ";
	}
	return 0;
}
