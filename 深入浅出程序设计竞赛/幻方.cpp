#include<iostream>
using namespace std;
int n,a[40][40],x,y;
int main(){
	cin>>n;
	a[1][n/2+1]=1;
	x=1;y=n/2+1;
for(int i=2;i<=n*n;i++){
	if(x==1 && y!=n)
		a[n][y+1]=i,x=n,y++;
	else if(y==n && x!=1)
		a[x-1][1]=i,x--,y=1;
	else if(x==1&&y==n)
		a[2][n]=i,x=2;
	else if(x!=1&&y!=n){
		if(a[x-1][y+1]==0){
			a[x-1][y+1]==i,x--,y++;
			}
		else			
		a[x+1][y]=i,x++;
		
	}	

}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
		cout<<a[i][j]<<" ";
		cout<< endl;
	}
	return 0;
} 
