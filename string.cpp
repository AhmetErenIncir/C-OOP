#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1,s2;
    s1 = "Eren";
    s2 = "Ahmet";
    cout << "My first name " <<s1<< " my second name " <<s2<<endl;
    if(s1 != s2){
        cout << "Error" << '\n';
    }
    if(s2 < s1){
        cout << "ok" << '\n';
    }
    else{
        cout << "nope" << '\n';
    }
    cout << "First char of s1 : " <<s1[0]<< '\n';

    string dogname;
    cout << "What is your dog's name ?" << '\n';
    cin >> dogname;
    cout << "My dog name is " <<dogname<< '\n';
    
    string s3;
    s3 = s1 + s2;
    cout << "what is that " <<s3<< '\n'; // s1 in sonuna s2 ekler.
}
