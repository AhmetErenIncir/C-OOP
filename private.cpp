#include <iostream>
using namespace std;

class name_of_emp
{
private :
    string name;
public :
    void getname();
    void showname();
};

int main(){
    name_of_emp emp;
    emp.getname();
    emp.showname();
    //std::cout << "name : " <<emp.name<< endl; burasi calismiyor cunku name private
}

void name_of_emp :: getname(){
    std::cin >> name;
}
void name_of_emp :: showname(){
    std::cout << "name : " <<name<< endl;
}
