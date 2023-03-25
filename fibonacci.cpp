#include <iostream>
#include <vector>
using namespace std;

class fibonacci
{
private:
    int n;

public:
    fibonacci(int n)
    {
        this->n = n;
    }
    vector<int> generate_series()
    {
        vector<int> fib_series;
        int a = 0, b = 1, c;
        for (int i = 0; i < n; i++)
        {
            fib_series.push_back(a);
            c = a + b;
            a = b;
            b = c;
        }
        return fib_series;
    }
};

int main()
{
    fibonacci f1(6);
    cout << "No.of terms: " << f1.generate_series().size() << endl;
    for (auto x : f1.generate_series())
    {
        cout << x << " ";
    }
    cout << endl;

    fibonacci f2(8);
    cout << "No.of terms: " << f2.generate_series().size() << endl;
    for (auto x : f2.generate_series())
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}