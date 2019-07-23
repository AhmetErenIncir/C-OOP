#include <iostream>
using namespace std;

void fillup(int a[] , int size);

int main(){
    int array[20];
    fillup(array,20);
}

void fillup(int a[] , int size){
    std::cout << "Enter " << size << " numbers:\n" ;
    for(int i=0 ; i < size ; i++){
        std::cin >> a[i];
    }
    std::cout << "The last array index used is " <<(size-1)<<endl;
}
