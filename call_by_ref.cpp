#include <iostream>
using namespace std;

void get_numbers(int& input1 , int& input2){
    cout << "Enter two integer" <<  endl;
    cin >> input1 >> input2;
}
void swap_values(int& num1 , int& num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
void show_result(int output1 , int output2){
    cout << "In reverse order the numbers are : "
         << output1 << " " << output2 << endl;
}
int main(){
    int number1 , number2;
    get_numbers(number1 , number2);
    swap_values(number1,number2);
    show_result(number1,number2);
}
