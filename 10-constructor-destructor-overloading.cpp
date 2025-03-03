#include <iostream>
#include <string>

using namespace std;

class Employee{
    public:
    string name;
    string cnic;

    int salary;
    int id;

    void sign_in();
    void sign_out();

    Employee(); //notice the missing return type, since its a constructor
    Employee(int salary); //function overloading (num/type of paramteres different)

    ~Employee(); //destructor
};

Employee::Employee(){
    salary = 100000;
    cout << "Employee instance being created without salary" << endl;
}

Employee::Employee(int salary){
    cout << "Employee(int salary) instance being created with salary" << endl;
    this->salary = salary; //salary on the right is local var, while on the left is field/member
}

Employee::~Employee(){
    cout << "Employee instance being deleted" << endl;
}

int main(){
    Employee *e;
    e = new Employee;

    delete e; //freeing up the memory where e is pointing
    e = new Employee(220000);

    delete e;
    e = NULL; //fix the dangling pointer!
    //pointer jis jaga ko point kr raha wo free hojaye gi through delete, it no longer exists, now contains garabage values


    cout << "This is the salary now :   " << e->salary << endl;
    return 0;
}