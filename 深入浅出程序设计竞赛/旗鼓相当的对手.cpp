#include<iostream>
#include<cmath>
#define max 1024
using namespace std;
int score[max][3],sum[max];
int main(){
	int N,ans=0;
	cin>>N;
	for(int i=1;i<=N;i++){
		cin>>score[i][0]>>score[i][1]>>score[i][2];
		 sum[i]=score[i][0]+score[i][1]+score[i][2];
		for(int i=1;i<=N-1;i++){
			for(int j=i+1;j<=N;j++){
				if(abs(score[i][0]-score[j][0])<=5
				&&abs(score[i][1]-score[j][1])<=5
				&&abs(score[i][2]-score[j][2])<=5
				&&abs(sum[i]-sum[j])<=10)
					ans++;
			}
		}
	}
	cout<<ans<<endl;
	return 0; 
} 
