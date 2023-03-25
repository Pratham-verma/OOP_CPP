#include<iostream>

using namespace std;

class student
{
public:
string name;
int rollno ;

};

int main(){

    student s1;
    s1.name = "john";
    s1.rollno  =  2 ;

  cout<<"the student name is "<<s1.name<<endl;
  cout<<"the student rollno is "<<s1.rollno<<endl;
    

    
    return 0;
}