#include<iostream>
using namespace std;
int main(){
	int i=2,s=0,j,num=0,L;
	cin>>L;
	while(s<=L){
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				break;
			}
		}
		if(j==i/2+1){
			cout<<i<<endl;
			num++;
			s+=i;
		}
		i++;  
	}
	cout<<num;
	return 0;
}
