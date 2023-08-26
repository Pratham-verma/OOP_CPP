#include<iostream>
using namespace std;

//base class
class employee {

public:
int id;
float salary ;

employee(int inpid){
    id = inpid;
    salary = 34.45;
}
 employee(){}
};



//derived class
class programmer : public employee
{
  public:  
  programmer (int inpid){

     id = inpid;
  }
  
};


int main(){
    employee;
    programmer p(12);
    cout<<p.id<<endl;


    
    return 0;
}