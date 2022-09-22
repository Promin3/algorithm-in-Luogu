#include<iostream>
#include<cstdio>
#include<cstring>
#define max 55
using namespace std; 
int a[max][max];
int main(){
	int n,m;
	cin>>n>>m;
	memset(a,0,sizeof(a));
	for(int i=1;i<=m;i++){
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		for(int i=x1;i<=x2;i++)
			for(int j=y1;j<=y2;j++)
			a[i][j]++;
	}
	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<(j==n?'\n': ' ');
		}
		
		return 0;
}

