#include<iostream>
#include<cstdio>
#include<cstring>
char w[110];
int ans[26]={0};//从0开始依次表示字母a……
int main(){
    int maxn=0,minn=10000,l,delta;
    scanf("%s",w);
    l=strlen(w);/*这里如果用sizeof（既计算数组字节），
    参数要用指针，否则计算的是指向的第一个元
    素,数组名称也是指针，指向第一个元素的位置，可以用strlen（数组名称）*/
    for(int i=0;i<l;i++){
        ans[w[i]-'a']++;//统计字母对应ASCII码的个数
    }

    for(int i=0;i<26;i++){
        if(ans[i]>maxn) maxn=ans[i];
        if(ans[i]!=0 && ans[i]<minn) minn=ans[i];//注意26个字母中可能有字母是0，需要排除
    }

    delta=maxn-minn;
    //下面对质数（素数）特殊情况进行讨论
    if(delta==0||delta==1){
        printf("No Answer\n0\n");
        return 0;
    }
    for(int h=2;h*h<delta;h++){
        if(delta % h == 0){
            printf("No Answer\n0\n");
            return 0;
        }
    }
    printf("Lucky Word\n&d\n",delta);
    return 0;
}