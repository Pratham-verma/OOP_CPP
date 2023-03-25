#include <iostream>
using namespace std;

class average
{
public:
    static float calculateaverage(float a, float b, float c)
    {
        return (a + b + c) / 3;
    }
   
};

int main()
{
    float a,b,c;
    cout<<"enter the value of a,b,c "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
   
    cout<<"the average of a,b,c is : "<<average :: calculateaverage(a,b,c)<<endl;
}