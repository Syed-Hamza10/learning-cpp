#include <iostream>
using namespace std;

#define INCLUDE_INV_MODULE

#define SIZE 5

#define ABS(a) ( (a < 0) ? -(a): (a) )


#ifdef INCLUDE_INV_MODULE
void show_inventory(){
    cout << "Showing inventory if switch is ON" << endl ;
}
#endif

int main(){
    cout << SIZE << endl;

    for (int i = 0 ; i < SIZE ; i++){
        cout << i << " ";

    }
    cout << endl;

    #ifdef INCLUDE_INV_MODULE
    show_inventory();
    #endif
}

