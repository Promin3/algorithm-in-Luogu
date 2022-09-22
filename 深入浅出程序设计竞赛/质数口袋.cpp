#include<iostream>
using namespace std;
int main(){
	int L,load=0,num=0;
	cin>>L;
	for(int i=2;;i++){
		int is_prime=1;
		for(int j=2;j*j<=i;j++)			
			if(i%j==0){
		 	is_prime=0;
		 	break;	
			} 
		if(is_prime==0)continue;
		if(i+load>L)break;
		cout<<i<<endl;
		num++;load+=i;
		}
		cout<<num;
		return 0;
	}
	

