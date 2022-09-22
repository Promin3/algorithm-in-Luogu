#include<iostream>
#include<cstring>
#define maxn 100
using namespace std;

struct Bigint
{
    int len,a[maxn];
    Bigint(int x = 0){
        memset(a, 0, sizeof(a) );

        for(len = 1; x ; len++)
            a[len] = x % 10,x /= 10;

        len --;
    }

    int &operator[](int i) {
       return a[i];
    }

    void flatten(int L){
        len = L;
        for(int i = 1; i <= len; i++){
            a[i + 1] += a[i] / 10, a[i] %= 10;
        }
        for(; !a[len]; ) len--;
    }

    void print(){
        for (int i = max(len,1); i >= 1; i--)
            printf("%d", a[i]);
    }
};

Bigint operator+(Bigint a,Bigint b){
    Bigint c;
    int len = max(a.len, b.len);
    for(int i = 1; i <=len ; i++)
        c[i] += a[i] + b[i];
    c.flatten(len + 1);
    return c;
}


int main(){
    int N;
    cin >> N;
    Bigint f[5010];
    f[1] = Bigint(1);
    f[2] = Bigint(2);
    for(int i = 3; i <= N; i++){
        f[i] = f[i - 1] + f[i - 2];
    }    
    f[N].print();
    return 0;
}