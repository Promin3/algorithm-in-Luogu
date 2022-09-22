#include<iostream>
using namespace std;
int a[105],n;
bool is_prime(int x){// 返回类型 函数名（形参）
    if(x==0||x==1)return 0;
    for(int h=2; h*h<=x; h++)
        if(x%h==0)
        return 0;
    return 1;
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        if( is_prime(a[i]))
            cout<<a[i]<<" ";
    cout<< endl;
    return 0;
}