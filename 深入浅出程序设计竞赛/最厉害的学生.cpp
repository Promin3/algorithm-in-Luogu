#include<iostream>
#include<string>
using namespace std;

struct student
{
    string name;
    int ch,ma,en;
} a, ans;

int main(){
    int n;
    cin >> n;
    ans.ch=-1,ans.en=-1,ans.ma=-1;//可能存在所有学生分数均为0 0 0的情况
    for(int i=0; i<n; i++){
        cin >> a.name >> a.ch >> a.ma >> a.en;
        if(a.ch + a.en + a.ma > ans.ch + ans.en + ans.ma)
        ans = a; 
    }
    cout << ans.name <<" "<< ans.ch <<" "<< ans.ma <<" "<< ans.en << endl;
    return 0; 
}