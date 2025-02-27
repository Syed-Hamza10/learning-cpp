#include <iostream>
#include <string>

using namespace std;

struct student{
    int roll_no;
    float marks;
};

void array_test()
{
    int a[5];
    a[0] = 15;

    cout << "Before Assignment" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        a[i] = i;
    }
    
    cout << endl;

    cout << "After Assignment" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    
    cout << endl;



}

void array_test_2d(){

    int a[2][3];

    cout << "Before Assignment" << endl ;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl ;
    }

    int val = 0;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            a[i][j] = val;
            val++;
        }
        cout << endl ;
    }

    cout << "After Assignment" << endl ;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl ;
    }


}

void string_test(){
    char a[] = "Hello";
    cout << a << endl ;

    cout <<"a[5] = " <<a[5] << endl ;

    if (a[5] == '\0'){
        cout << "a[5] is a null character!" << endl;
    }
}

void struct_test(){
    student s1;
    student s2;

    s1.marks = 94;
    s1.roll_no = 15;

    s2.marks = 92;
    s2.roll_no = 19;

    student s[5];
    s[0].marks = 33.4;

    cout << "Student s1 has " << s1.marks << endl;
    cout << "Student s2 has " << s2.marks << endl;

    cout << "Student s[0] has " << s[0].marks << endl;
}

int main(){
    //array_test();
    //array_test_2d();

    //string_test();
    struct_test();
    return 0;
}