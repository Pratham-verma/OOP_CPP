#include<iostream>
using namespace std;

template<class t1 , class t2>

float funcaverage(t1 a , t2 b){
         float avg = (a+b)/2;
         return avg;
}


int main(){
    float a;
    a =  funcaverage(5.34 , 2.45);
    printf("%f \n", a);
    
    return 0;
}