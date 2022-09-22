#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,opt,start,len;
    string s,add;
    cin >> n;
    cin >> s;
    while (n--)
    {
        cin >> opt;
        if(opt==1){
            cin >> add;
            s+=add;//s.append(add)
            cout<< s <<endl;
        }

        else if(opt==2){
            cin>>start>>len;
            s=s.substr(start,len);
            cout<< s <<endl;
        }
        
        else if(opt==3){
            cin >> start;
            cin >> add;
            s=s.insert(start,add);
            cout<< s <<endl;
        }

        else{
            cin >> add;
            cout<< (int)s.find(add)<<endl;
        }
    
    }
    return 0;
}