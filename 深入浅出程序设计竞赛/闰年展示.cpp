#include<iostream>
using namespace std;
void init();
void doit();
void output();

int x,y,ans[500],cnt=0;

int main(){
    init();
    doit();
    output();
    return 0; 
}

void init(){
    cin>> x >> y;
}

void doit(){
    for(int i=x;i<=y;i++){
        if(!(i%400) || !(i%4) && i%100 )//是4或400的整数倍，但不是100的整数
            ans[cnt++] = i;//相当于 ans[cnt]=i,cnt++
    }
}

void output(){
    cout << cnt <<endl;
    for( int i=0; i< cnt ;i++)
        cout << ans[i]<< " ";
    cout << endl;
}