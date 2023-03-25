#include<iostream>
using namespace std;
 
 class volume
 {
  float length, breadth, height;
  public:
  volume() 
  {
    length = 2.5;
    breadth = 1.5;
    height = 2.5;
  }
  void printnumber()
  {
    cout<<"the volume of box is "<<length*breadth*height<<endl;
  }
 };



int main(){
   volume box;
   box.printnumber();
    
    return 0;
}