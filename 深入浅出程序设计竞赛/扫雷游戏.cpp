#include<iostream>
#define max 110
using namespace std;
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
char a[max][max];

int main(){
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> a[i][j];

   for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
          if(a[i][j]=='?'){
              int cnt=0;
              for(int k=0;k<8;k++){
                  if( a[i+dx[k]] [j+dy[k]]=='*' )cnt++;
              }
           cout << cnt;   
          }
          else cout <<"*";
        cout << endl;

   }
   return 0;
}