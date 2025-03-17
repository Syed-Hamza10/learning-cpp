// let's say you want to make a function that can find max of all int, double, characters.
// WE'll use class templates for this

#include <iostream>
#include <string>

using namespace std;

template <class T>

T find_max(T a, T b){
    T result;
    result = (a > b) ? a : b ;

    return result;
}

int main(){
    
    int x, y, k;

    x = 5;
    y = 10;

    k  = find_max<int>(x, y);
    cout << "Max number is :    " << k << endl;

    // the same function works for strings as well

    string a, b, l;

    a = "Hamza";
    b = "Dorami";

    l = find_max<string>(a, b);
    cout << "Max string is :    " << l << endl;


}

