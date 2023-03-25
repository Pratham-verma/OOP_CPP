#include <iostream>
using namespace std;

class Distance
{
public:
    static float addDistance(float f1, float f2, float i1, float i2)
    {
        return f1 + f2 + i1 + i2;
    }
};
int main()
{

    float f1, f2, i1, i2, op;
    cout << "enter length of distance 1 : " << endl;
    cout << "feet : ";
    cin >> f1;
    cout << "inches : ";
    cin >> i1;

    cout << "enter length of distance 2 : " << endl;
    cout << "feet : ";
    cin >> f2;
    cout << "inches : ";
    cin >> i2;

    if (i1 > 12 )
    {
        cout << "inch 1 is not valid" << endl;
    }

       if (i2 > 12)
    {
        cout << "inch 2 is not valid" << endl;
    }
    else 
    {
        cout << "the sum of two distance is : " << Distance::addDistance(f1, f2, i1, i2) << endl;
    }

    return 0;
}