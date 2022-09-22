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

bool cmp(student a,student b){
    if(a.total != b.total ) return a.total > b.total;
    else if(a.chinese != b.chinese) return a.chinese > b.chinese;
    else return a.id < b.id;
}

int main(){
    cin >> n;
    for(int i=0; i < n; i++){
        cin >> a[i].chinese >> a[i].math >> a[i].english;
        a[i].total = a[i].chinese + a[i].english + a[i].math;
        a[i].id = i + 1;
    }

    sort(a, a + n, cmp);

    for(int i=0; i < 5; i++){
        printf("%d %d\n",a[i].id,a[i].total);
    }
    return 0;
}