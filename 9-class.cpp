#include <iostream>
#include <string>
using namespace std;

class Employee{
    public: //private by default
        string name;
        string cnic;
        int id;

        void sign_in();
        void sign_out();
};


void Employee::sign_in(){
    cout << "I am signing as Head of State " << name << endl;
}

void Employee::sign_out(){
    cout << "I am signing out from Head of State " << name << endl;
}

int main(){
    Employee e1;
    Employee *e = &e1;

    e1.name = "Hamza";
    e1.cnic = "1234";

    e1.sign_in();

    cout << e->name << endl;

    e = new Employee;
    e->name = "Okay Now I might not be Hamza";

    cout << e->name << endl;
}