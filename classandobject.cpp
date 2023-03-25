#include<iostream>
#include<string>
using namespace std;

class student
{
public:
string name;
int roll_no;
int long phonenumber;
string address;

};
int main(){

  student s1,s2;

  s1.name = "john";
  s1.phonenumber = 983243581;
  s1.address = "c-11 baprola new delhi 110043";
  s1.roll_no = 2;

  s2.name = "sam";
  s2.phonenumber = 706546532;
  s2.address =" gautam bhudh nagar near knowledge park metro station";
  s2.roll_no = 3;

  cout<<"the student1 name is : "<<s1.name<<endl;
  cout<<"the student1 phonenumber is : "<<s1.phonenumber<<endl;
  cout<<"the student1 address is : "<<s1.address<<endl;
  cout<<"the student1 roll_no is : "<<s1.roll_no<<endl;
  cout<<"\n";
  cout<<"the student2 name is : "<<s2.name<<endl;
  cout<<"the student2 phonenumber is : "<<s2.phonenumber<<endl;
  cout<<"the student2 address is :  "<<s2.address<<endl;
  cout<<"the student2 roll_no is : "<<s2.roll_no<<endl;

    
    return 0;
}