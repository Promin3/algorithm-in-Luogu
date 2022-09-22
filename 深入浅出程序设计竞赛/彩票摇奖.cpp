#include<iostream>
using namespace std;
int main(){
	int n,a[10],num[10]={0};
	int ans=0;
	cin>>n;
	for(int i=1;i<=7;i++){
		cin>>a[i];
	}//初始化中奖彩票 
		while(n--){//n个彩票 
		
		for(int j=1;j<=7;j++){
		int x;
		cin>>x;
		for(int k=1;k<=7;k++)
			if(a[k]==x)ans++;		
		}//遍历一个完整的彩票
	 num[ans]++;
	}
	for(int i=7;i;i--){
		cout<<num[i]<<(i==1?'\n': ' '); 
		}
		return 0;
}
