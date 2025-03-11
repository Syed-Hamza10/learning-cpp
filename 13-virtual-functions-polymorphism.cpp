#include <iostream>
#include <string>
using namespace std;

class Plugin{
    public:
        virtual void apply_filter(int img[5][5]){
            cout << "Can't do anything bcoz it doesn't make sense, does it?" << endl;
        } //ye khud kuch nahi krta, lekin jo inherit kre ga wo kre ga

        virtual void apply_filter(int img[5][5]) = 0; //that's a pure virtual function
        // it makes the class abstract, mtlb class def is incomplete
        // any child is also abstract unless it defines this function
};


class MakeItWhite : public Plugin{
    public:
        void apply_filter(int img[5][5]){
            for (int i = 0; i < 5; i++){
                for (int j = 0; j < 5; j++){
                    img[i][j] = 255;
                }
            }
        }
};

class MakeItBlack : public Plugin{
    public:
        void apply_filter(int img[5][5]){
            for (int i = 0; i < 5; i++){
                for (int j = 0; j < 5; j++){
                    img[i][j] = 0;
                }
            }
        }
};

void init_matrix(int img[5][5]){
    int val = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            img[i][j] = val;
            val += 1;
        }
    }

}

void output_matrix(int img[5][5]){
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << img[i][j] << " "; 
        }
        cout << endl;
    }

}

Plugin * select_plugin(){
    string plugin_name = "MIB";
    
    Plugin *p;

    if (plugin_name == "MIW"){
        p = new MakeItWhite;
    }else{
        p = new MakeItBlack;
    }
    return p;
}


int main(){

    int pic[5][5];

    init_matrix(pic);

    cout << "Before:" << endl;
    output_matrix(pic);

    // Plugin p1;
    // p1.apply_filter(pic);

    MakeItBlack mib;
    mib.apply_filter(pic);

    cout << "After Applying Black Filter:" << endl;
    output_matrix(pic);

    MakeItWhite miw;
    miw.apply_filter(pic);

    cout << "After Applying White Filter:" << endl;
    output_matrix(pic);

    init_matrix(pic); // resetting to original


    Plugin *p;
    p = select_plugin();

    p->apply_filter(pic);
    cout << "After plugin application:  " << endl;

    output_matrix(pic);
}


