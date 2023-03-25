
#include <iostream>
#include <cstring>

using namespace std;

class Student {
    private:
        char* name;
        int id;
    public:
        Student(const char* n, int i): id(i) {
            name = new char[strlen(n) + 1];
            strcpy(name, n);
        }

    

        void display() {
            cout << "The student name : " << name << endl;
            cout << "The student id : " << id << endl;
        }

        ~Student() {
            delete[] name;
        }
};

int main() {
    Student* s = new Student("Saraswathi", 555);
    s->display();
    delete s;
    return 0;
}
