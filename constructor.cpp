#include<iostream>
using namespace std;

class complex
{
 int a,b;
 public:
 complex(void);
 
    void printnumber()
    {
        cout<<"The number is "<< a<< "+" << b<<"i "<<endl;
    };
};
 complex :: complex(void)
 {
  a = 10;
  b = 23;

 }
    


int main(){
    complex box;
    box.printnumber();

    
    return 0;
}