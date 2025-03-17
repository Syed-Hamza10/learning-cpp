#include <iostream>
using namespace std;

//namespace is a sub scope inside global scope
namespace first{
    int var = 5; 
}

namespace second{
    float var = 15.19;
}


int main(){

    using namespace first;
    //using namespace second; var will become ambiguous

    cout << "The var value in first namespace is:   " << var << endl;
    cout << "The var value in second namespace is:  " << second::var << endl;
    
}