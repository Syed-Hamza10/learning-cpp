#include <iostream>
using namespace std;

class Employee{
    protected:
    int pay_rate; //private, only accesible in this class

    public:
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


class FacultyMember : public Employee{
    public:
        
    // if we override this method, that's an error.
    // for this, we need to make the pay_rate 'protected'.
        void set_pay_rate(int pay_rate){
            if (pay_rate > 25){
                this->pay_rate = pay_rate;
            }else{
                cout << "Pay Rate : " << pay_rate << " not acceptable" << endl;
            }
        }

        int get_pay_rate(){
            // if user logged in
            return this->pay_rate;
        }
};


int main(){
    Employee e;

    //e.pay_rate = 10; //error, bcoz pay_rate is private

    // e.set_pay_rate(15);

    // cout << "Current Pay rate: " << e.get_pay_rate() << " " << endl;

    // e.set_pay_rate(10);

    // cout << "Current Pay rate: " << e.get_pay_rate() << " " << endl;

    // e.set_pay_rate(19);

    // cout << "Current Pay rate: " << e.get_pay_rate() << " " << endl;

    FacultyMember f;
    f.set_pay_rate(25);
    cout << "Current Pay rate: " << f.get_pay_rate() << " " << endl;

}
