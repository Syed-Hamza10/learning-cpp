// 

#include <iostream>
using namespace std;

class User{
    
    int id;
    static int next_id;

    public:
    static int next_user_id(){
        next_id += 1;
        return next_id;
    }


    User(){
        id = User::next_user_id();
    }

    int get_id(){
        return id;
    }

    

};

int User::next_id = 0;

int fib(int n){
    static int count = 0;

    if (n == -1){
        return count;
    }

    count += 1;

    if (n <= 1){
        return n;
    }else{
        return fib(n - 1) + fib(n - 2);
    }
}

int main(){

    User u;
    cout << "User u id :    " << u.get_id() << endl;
    
    User v;
    cout << "User v id :    " << v.get_id() << endl;
    
    fib(5);
    cout << "Total Function calls :     " << fib(-1) << endl;
}