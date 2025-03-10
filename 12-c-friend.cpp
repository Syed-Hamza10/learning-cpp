#include <iostream>
using namespace std;

class Employee{

    int pay_rate; //private, only accesible in this class

    

    public:

    friend void access_pay_rate_directly(Employee e);

        void set_pay_rate( int pay_rate){
            if (pay_rate > 14){
                this->pay_rate = pay_rate;
        }   else{
                cout << "Pay Rate : " << pay_rate << " not acceptable" << endl;
        }}

        int get_pay_rate(){
            // if user logged in
            return this->pay_rate;
        }
};


void access_pay_rate_directly(Employee e){
    cout << "Current Pay Rate :     " << e.pay_rate << endl;
}

int main(){
    Employee e;
    e.set_pay_rate(20);
    access_pay_rate_directly(e);
}