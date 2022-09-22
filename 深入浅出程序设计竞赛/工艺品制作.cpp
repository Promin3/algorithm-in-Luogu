#include<iostream>
#define max 25
using namespace std;
int a[max][max][max];
int main(){
	int w,x,h,q,x1,y1,z1,x2,y2,z2,ans;
	cin>>w>>x>>h>>q;
	for(int i=0;i<w;i++)
		for(int j=0;j<x;j++)
			for(int k=0;k<h;k++)
			a[i][j][k]=1;
	while(q--){	
		cin>>x1>>y1>>z1>>x2>>y2>>z2;
		for(int i=x1;i<=x2;i++) 
			for(int j=y1;j<=y2;j++)
				for(int k=z1;k<=z2;k++)
				a[i][j][k]=0;
	for(int i=0;i<w;i++)
		for(int j=0;j<x;j++)
			for(int k=0;k<h;k++)
			ans+=a[i][j][k];
	
}
		cout<<ans<<endl;
	return 0;
}
