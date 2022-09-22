#include<iostream>
#include<string>
#define max 1024
using namespace std;
int n;
struct student  
{
    string name;
    int ch,ma,en;
};

student a[max];//***

bool check(int x, int y ,int z){
    return abs(x-y)<= z;
}//***

int main(){
    cin >> n;
    for(int i=0; i<n; i++)
    cin >> a[i].name >> a[i].ch >> a[i].ma >> a[i].en;
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(check(a[i].ch,a[j].ch,5)
              &&check(a[i].ma,a[j].ma,5)
              &&check(a[i].en,a[j].en,5)
              &&check(a[i].ch+a[i].en+a[i].ma,a[j].ch+a[j].en+a[j].ma,10)
              ){
                  cout << a[i].name << " " << a[j].name <<endl;
              }
    return 0;
}