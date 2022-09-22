#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    cout << s;
    return 0;
    /*
    cin遇到空格，tab键就会结束输入
    （并且会忽略），按下回车后输入的字符才会发送到缓冲区 
    */
}