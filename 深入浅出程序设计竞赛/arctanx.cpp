#include<iostream>
using namespace std;

double arctan(double x){
    double sum = 0;
    double a = x*x;
    int i = 1;
    double term = x;
    while(term > 1e-15){
        sum = (i % 4 == 1)? sum + term : sum - term;
        i = i + 2;
        term = term*a / i;
    }

    return sum;
}

int main(){
    double a = 16*arctan(1/5.0);
    double b = 4*arctan(1/239.0);
    cout << "PI ="<< a - b<< endl;
    return 0;
}