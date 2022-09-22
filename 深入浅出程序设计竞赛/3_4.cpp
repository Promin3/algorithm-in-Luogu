#include<iostream>
using namespace std;

bool is_prime(unsigned n) {
    unsigned m = n;
    unsigned k = 0;
    while(m > 0){
        k = k*10 + m % 10;
        m /= 10;
    }

    return n == k;
}

int main(){
 for(int i = 11; i <= 999; i++){
     if(is_prime(i) && is_prime(i*i) && is_prime(i*i*i)){
         cout << "m =" << i;
         cout << " m*m ="<< i*i;
         cout << " m*m*m ="<< i*i*i << endl;
     }
 }
    return 0;
}
