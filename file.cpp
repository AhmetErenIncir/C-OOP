#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string first_name , last_name;
    int score;
    fstream input_stream; // fsteam tipinde bir degisken tanimlaniyor

    input_stream.open("a.txt"); // Dosya acma komutu
    input_stream >> score; // Dosyadan int deger okur
    input_stream >> first_name >> last_name; // dosyadan 2 tane string okur

    cout << "Name : " << first_name << " "
         <<last_name << endl;
    cout << "Score : " << score << endl;
    input_stream.close();
}
