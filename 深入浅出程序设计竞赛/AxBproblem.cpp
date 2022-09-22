#include<iostream>
#include<string>
#define maxn 5010
using namespace std;
int a[maxn],b[maxn],c[maxn];
int main(){
    string A,B;
    cin >> A >> B;
    int lena = A.length(),lenb = B.length();
    for(int i=lena-1,j=1; i>=0; i--,j++){
        a[j] = A[i] - '0';
    }

    for(int i=lenb-1,j=1; i>=0; i--,j++){
        b[j] = B[i] - '0';
    }
    for(int i=1; i<=lena; i++)
        for(int j=1; j<=lenb; j++)
            c[i+j-1] += a[i]*b[j];
    
    int len=lena+lenb;
    for(int i=1; i<=len; i++){
        c[i+1] += c[i] / 10;
        c[i] %= 10;
    }

    for(; !c[len]; )len--;

    for(int i = max(1,len); i>=1; i--)
    cout << c[i];
    return 0; 
}