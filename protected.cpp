#include <iostream>
using namespace std;

class ONE; // forward declaration

class TWO {
public:
    void display(ONE obj);
};

class ONE {


public:
    int private_variable;
    int protected_variable;
    ONE(int a, int b) {
        private_variable = a;
        protected_variable = b;
    }
    friend class TWO;
};

void TWO::display(ONE obj) {
    cout << "The value of Private Variable = " << obj.private_variable << endl;
    cout << "The value of Protected Variable = " << obj.protected_variable << endl;
}

int main() {
    ONE obj1(10, 20);
    TWO obj2;
    cout << obj1.private_variable << endl;
    cout << obj1.protected_variable << endl;
    obj2.display(obj1);
    return 0;
}
