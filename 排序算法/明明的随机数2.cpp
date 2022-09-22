#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,a[105];
    cin >> n;
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    int cnt = unique(a, a + n) - a;//unique()去重之后得到数组的最后一个元素的地址
    /*两个指针相减，为两个指针之间间隔这两个指针类型的数目。
    如：int *p,*q;
    p-q=(p地址-q地址)/sizeof(int)*/
    printf("%d\n",cnt);
    for(int i=0; i < cnt; i++){
        printf("%d ",a[i]);
    }
    return 0;

}//排序、去重STL