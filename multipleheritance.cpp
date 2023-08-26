#include <iostream>
using namespace std;

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = b;
    }
};
class derived : public base1, public base2
{
public:
    void display()
    {
        cout << "The value of base 1 is : " << base1int << endl;
        cout << "The value of base 2 is : " << base2int << endl;
        cout << "The sum of base 1 and base 2 is : " << base1int + base2int << endl;
    }
};

int main()
{
  derived D;

   D.set_base1int(23);
   D.set_base2int(10);
   D.display();

    return 0;
}