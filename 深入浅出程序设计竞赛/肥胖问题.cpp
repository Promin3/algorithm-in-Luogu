#include<iostream>
using namespace std;
int main(){
	double BMI,m,h;
	cin>>m>>h;
	BMI=m*1.0/h/h;
	if(BMI<18.5)cout<<"underweight";
	else if(BMI>=18.5&&BMI<24) cout<<"Nomal";
	else{
		cout<<BMI<<endl;
		cout<<"Overweight";
	}
	return 0;
}
