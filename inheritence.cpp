#include<iostream>
using namespace std;

//base class
class employee {

public:
int id;
float salary = 34.45;

employee(int inpid){
    id = inpid;
}
 employee(){}
};



//derived class
class programmer : employee
{
  programmer (int inpid){

     id = inpid;
  }
  
};





int main(){
    programmer p();


    
    return 0;
}