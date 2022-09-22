#include<iostream>
#include<algorithm>
#define max 305
using namespace std;
int n;
struct student//相当于定义了一种数据类型，如char int
{
    int chinese,math,english,total;
    int id;
}a[max];

int main(){
    cin >> n;
    for(int i=0; i < n; i++){
        cin >> a[i].chinese >> a[i].math >> a[i].english;
        a[i].total = a[i].chinese + a[i].english + a[i].math;
        a[i].id = i + 1;
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if( a[i].total < a[j].total){
                student tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
            else if(a[i].total == a[j].total && a[i].chinese < a[j].chinese){
               student tmp = a[i];
                a[i] = a[j];
                a[j] = tmp; 
            }
             else if(a[i].total == a[j].total && a[i].chinese == a[j].chinese && a[i].id > a[j].id){
                student tmp = a[i];
                a[i] = a[j];
                a[j] = tmp; 
             }
            else continue;
            }
        }

        for(int i=0; i < 5; i++){
        printf("%d %d\n",a[i].id,a[i].total);
        }
        return 0;
    }