#include<iostream>
using namespace std;
#define ROWS 8
#define COLS 8
int a[ROWS][COLS];
int b[ROWS][COLS];
int c[ROWS][COLS];
int main(){
	int n,m,p,q;//m=p
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		cin>>a[i][j];		
		}
	}
	cin>>p>>q;
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			cin>>b[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<q;j++){
			c[i][j]=0;
			for(int k=0;k<m;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<q;j++){
		cout<<c[i][j]<<' ';			
		}
		cout<<endl;	
	} 
	return 0;

}
