#include<iostream>
using namespace std;
int main(){
    int a[] = {4,1,9,5,1,7,5,8};
    for(int i=0; i < 7; i++){
        for(int j=0; j < 7-i; j++){
            if(a[j] > a[j+1]){
                int p = a[j];
                a[j] = a[j+1];
                a[j+1] = p;
            }
        }
    }

    for(int i=0;i < sizeof(a)/sizeof(int); i++)//sizeof(数组名（不加[]）)表示一整个数组的大小
    //sizeof(&数组名)表示数组第一个元素的大小
    cout << a[i] << " ";
    return 0;
}//冒泡排序每经过一轮循环，就确定一个较大值在数组末尾