// p1059 数据小，可用计数排序
#include<iostream>
#include<algorithm>
#define max 1005
using namespace std;
int a[max], n, ans[max],cnt, tmp = -1;
int main(){
    cin >> n;
    for(int i=0; i<n; i++)cin >> a[i];
    sort(a, a + n);//对a[0]到 a[n-1]进行排序
    for(int j=0; j<n ;j++){
        if(a[j] != tmp) ans[cnt++] = a[j];
        tmp = a[j];
    }
    cout << cnt <<endl;//注意为数组a开辟了多少元素空间，sizeof(a)/sizeof(int)就是多少，此处为1005
    for(int i=0; i< cnt; i++) cout << ans[i] << " ";
    return 0;4
}
