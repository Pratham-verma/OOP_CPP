#include <iostream>
using namespace std;

class A
{
public:
    void set_A()
    {
        cout << "A" << endl;
    }
};

class B : public A
{
    public:
    void set_B()
    {
        cout << "B" << endl;
    }
};
class C : public A
{
    public:
    void set_C()
    {
        cout << "C" << endl;
    }
};

int main()
{
   B D1;
   cout<<"calling from class B "<<endl;
   D1.set_B();
   D1.set_A();

   C D2;
   cout<<"calling from class C "<<endl;
   D2.set_C();
   D2.set_A();
   
  return 0;
}