#include<iostream>
#include<string>
#define max 100100
using namespace std;
struct person
{
    int direction;
    string work;
} a[max];

int main(){
    int m,n;
    char side;
    int step;

    cin >> n >> m;
    
    for(int i=0; i<n; i++){
        cin >> a[i].direction >> a[i].work;
    }

    int cnt=0;

    for(int i=0; i<m; i++){
        cin >> side >> step;
        if(a[cnt].direction==0 && side==0){
            cnt = (cnt + step) % n;
        }
        else if(a[cnt].direction==0 && side==1){
            cnt = (cnt + n - step) % n;
        }
        else if(a[cnt].direction==1 && side==0){
            cnt = (cnt + n - step) % n;
        }
        else if(a[cnt].direction==1 && side==1){
            cnt = (cnt + step) % n;
        }
    }

 /*for(int i=0; i<m; i++){
        cin >> side >> step;
        if(a[cnt].direction==0 && side==0){cnt = (cnt + step) % n;}
        else if(a[cnt].direction==0 && side==1){
            cnt = (cnt - step) % n;
            if(cnt < 0) cnt+=n;
        }
        else if(a[cnt].direction==1 && side==0){
            cnt = (cnt - step) % n;
            if(cnt < 0) cnt+=n;
        }
        else if(a[cnt].direction==1 && side==1){cnt = (cnt + step) % n;}
    }*/

    cout << a[cnt].work <<endl;
    return 0;
}