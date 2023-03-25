#include<iostream>
using namespace std;

class STUDENT {
    private:
    string sname; 
    int name;
    int marks[6];
    int total;
    int Tmax; 
     
    public:
    void assgin(int m1, int m2, int m3, int m4, int m5, int m6 , int tmax ,string name )
{
    sname = name;
    Tmax = tmax;
    marks[0] = m1;
    marks[1] = m2;
    marks[2] = m3;
    marks[3] = m4;
    marks[4] = m5;
    marks[5] = m6;


}
 void compute()
{
    total = 0;
    for(int i= 0;)
}

};

int main(){

    
    return 0;
}