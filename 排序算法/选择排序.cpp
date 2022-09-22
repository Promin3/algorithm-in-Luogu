#include<iostream>
using namespace std;
int main(){
    int a[]={4,1,9,5,1,7};
    for(int i = 0; i < 5; i++){
        for(int j=i+1; j<6; j++)
            if(a[j] < a[i]){
                int p = a[i];
                a[i] = a[j];
                a[j] = p;
            }  
    }
    for(int i=0; i < 6; i++)
    cout << a[i] <<" ";
    return 0;
}