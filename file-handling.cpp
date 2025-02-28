#include <iostream>
#include <fstream>
using namespace std;


void file_example(){

    ofstream fout;
    string filename = "sample.txt";
    string line = "This is a test line. Can you see it?....";

    fout.open(filename); //write mode by default
    fout << line << endl;

    fout.close();

    ifstream fin;
    fin.open(filename);

    while (fin){
        getline(fin, line);
        cout << line << endl;
    }
    fin.close();

}

void output_matrix(int matrix[][3], int r, int c){

    for (int i = 0 ; i < r; i++){
        for (int j = 0 ; j < c ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}

void bin_example(){
    int pixels[3][3];

    for (int i = 0 ; i < 3; i++){
        for (int j = 0 ; j < 3 ; j++){
            pixels[i][j] = 1 + i*j;
        }
    }

    output_matrix(pixels, 3, 3);

    ofstream fout("data.txt", ios::binary);

    for (int i = 0 ; i < 3; i++){
        for (int j = 0 ; j < 3 ; j++){
            fout.write((char*) &pixels[i][j], sizeof(int));
        }
    }
    fout.close();

    //resetting pixels

    cout << "resetting pixels" << endl;

    for (int i = 0 ; i < 3; i++){
        for (int j = 0 ; j < 3 ; j++){
            pixels[i][j] = 0;
        }
    }
     
    output_matrix(pixels, 3, 3);

    ifstream fin("data.txt", ios::binary);

    if (fin.fail()){
        cout << "Failed to read file ..." << endl;
    }
    
    else{

        for (int i = 0 ; i < 3; i++){
            for (int j = 0 ; j < 3 ; j++){
                fin.read((char*) &pixels[i][j], sizeof(int));
            }
        }
        
    }
    fin.close();

    cout << "Reading Again" << endl;
    output_matrix(pixels, 3, 3);
}


int main(){

    cout << sizeof(int) << endl;
    cout << sizeof(char) << endl;

    //file_example();
    bin_example();

    return 0;
}