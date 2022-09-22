#include<iostream>
using namespace std;
int main(){
    char s[50]="the c++ programming language!";
    short *p1 = (short*)(s+4);
    short *p2 = (short*)(s+20);
    cout << p2 <<endl;
    cout << p1 <<endl;
    cout << p2 -p1;
    return 0;
    }