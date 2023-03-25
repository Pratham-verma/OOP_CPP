#include <iostream>
using namespace std;

class cal
{
public:
    static int add(int a, int b)
    {

        return a + b;
    }

    static int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    cal ob;
    cout <<ob.add(12,12)<< endl;
    cout <<ob.add(13,13,24)<< endl;

    return 0;
}