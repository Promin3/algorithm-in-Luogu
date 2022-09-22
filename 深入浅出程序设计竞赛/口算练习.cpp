#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    int n,a,b,c;
    char last,s[20],ans[20];
    scanf("%d\n",&n);
    while (n--)
    {
        fgets(s,sizeof(s),stdin);//读入一行字符串，并存入数组s[]
        if(s[0]=='a'||s[0]=='b'||s[0]=='c')
        last=s[0],s[0]=' ';
        sscanf(s,"%d %d",&a,&b);
        switch (last)
        {
        case'a':c=a+b;sprintf(ans,"%d+%d=%d",a,b,c);break;
        case'b':c=a-b;sprintf(ans,"%d-%d=%d",a,b,c);break;
        case'c':c=a*b;sprintf(ans,"%d*%d=%d",a,b,c);break;
        //sprintf(字符数组名，"数组形式"，数组形式对应参数)
        }
    printf("%s\n%d\n",ans,strlen(ans));
    }

}