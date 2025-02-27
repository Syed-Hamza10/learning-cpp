#include <iostream>
using namespace std;

void pointer_test(){

    int x = 25;
    int *p;

    p = &x;

    cout << "The value of x itself          : " << x << endl;

    cout << "The address of x is            : " << &x << endl;

    cout << "The value of p is              : " << p << endl;

    cout << "The value at address (pointed to by p)     : " << *p << endl;

}

void pointer_array_test(){
    int a[] = {1,2,3};
    int *p;
    p = a; //p = &a[0] 

    for (int i = 0; i < 3; i++){
        cout << "The value of p         : " << p << endl;
        cout << "The value at p         : " << *p << endl;

        p++;
    }
}

int main(){
    //pointer_test();
    pointer_array_test();
}