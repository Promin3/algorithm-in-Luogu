#include<iostream>
using namespace std;
#define max 5000010
int a[max], ans, k, n;
void qsort(int a[], int l, int r){//给出形参
    if(l == r){
        ans = a[l];
        return;
    }

    int i = l, j = r, flag = a[(l + r) / 2],tmp;
    do{
        while (a[i] < flag) i++;
        while (a[j] > flag) j--;
        if(i <= j){
            tmp = a[i]; a[i] = a[j];a[j] = tmp;
            i++; j--;
        }
    }while (i <= j);//第一轮排序结束，哨兵左边数均小于哨兵，哨兵右边数均大于哨兵

    if(k <= j) qsort(a, l, j);
    else if(k >= i) qsort(a, i, r);
    else qsort(a, j+1, i-1);
}

int main(){
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    qsort(a, 0, n-1);
    cout << ans;
    return 0;
}