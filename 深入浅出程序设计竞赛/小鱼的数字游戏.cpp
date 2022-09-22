#include<iostream>
using namespace std;
int main(){
	int n=0,a[110],tmp;
	//先输入到0，后循环结束，使用do while语句
	do{
		cin>>tmp;a[n]=tmp;n++;
	}while(tmp!=0);
	n--;
	while(n--)
		cout<<a[n]<<' ';
		return 0;
}
