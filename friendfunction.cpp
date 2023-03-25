#include<iostream>
using namespace std;

class ClassA {
private:
    int a;
public:
    ClassA(int value) {
        a = value;
    }
    int getA() {
        return a;
    }
    friend class ClassB;
};

class ClassB {
private:
    int b;
public:
    ClassB(int value) {
        b = value;
    }
    int getB() {
        return b;
    }
    void swapValues(ClassA& obj) {
        int temp = obj.a;
        obj.a = b;
        b = temp;
    }
};

int main() {
    int firstValue, secondValue;
    cout << "Enter first value : ";
    cin >> firstValue;
    cout << "Enter second value : ";
    cin >> secondValue;

    ClassA objA(firstValue);
    ClassB objB(secondValue);

    cout << "Before swap the values are : " << objA.getA() << " " << objB.getB() << endl;

    objB.swapValues(objA);

    cout << "After swap the values are : " << objA.getA() << " " << objB.getB() << endl;

    return 0;
}
