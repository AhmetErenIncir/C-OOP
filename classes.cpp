#include <iostream>
using namespace std;

class DayOfYear
{
public:
    void output();
    void input();
    void check_birth(DayOfYear& date , DayOfYear& birth);
private:
    int month;
    int day;
};
int main(){
    DayOfYear today , birthday;
    std::cout << "Enter date of today" << '\n';
    today.input();
    std::cout <<endl;
    std::cout << "Enter date of birthday" << '\n';
    birthday.input();
    std::cout <<endl;
    std::cout << "Today's date is "<<endl ;
    today.output();
    std::cout << endl;
    std::cout << "Your birthday is" <<endl ;
    birthday.output();
    std::cout << endl;
    today.check_birth(today , birthday);
    //std::cout << today.month << endl; month private oldugu icin basamaz
}
void DayOfYear :: output(){
    switch (month) {
        case 1:
            std::cout << "january";
            break;
        case 2:
            std::cout << "february";
            break;
        case 3:
            std::cout << "march";
            break;
        case 4:
            std::cout << "april";
            break;
        case 5:
            std::cout << "may";
            break;
        case 6:
            std::cout << "june";
            break;
        case 7:
            std::cout << "july";
            break;
        case 8:
            std::cout << "august";
            break;
        case 9:
            std::cout << "semptember";
            break;
        case 10:
            std::cout << "october";
            break;
        case 11:
            std::cout << "november";
            break;
        case 12:
            std::cout << "december";
            break;
        default:
            std::cout << "inavlid month entered" << '\n';
    }
    std::cout << day;
}

void DayOfYear :: input(){
    std::cout << "Enter the month as number" << '\n';
    std::cin >> month;
    std::cout << "Enter the day of month" << '\n';
    std::cin >> day;
}

void DayOfYear :: check_birth(DayOfYear& date , DayOfYear& birth){
    //eger fonksyonu yazarken DayOfYear :: kullanmasaydim month ve day private oldugu icin hata alirdim.
    if(date.month == birth.month && date.day == birth.day){
        std::cout << "Happy birthday" << '\n';
    }
    else{
        std::cout << "Happy unbirthday" << '\n';
    }
}
