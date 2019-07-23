#include <iostream>
using namespace std;

struct CDAccountV1{
    double balance;
    double interestRate;
    int term;
};

void getData(CDAccountV1& theAccount);

void checkAccount(CDAccountV1& theAccount);

void showAccount(CDAccountV1& theAccount);

int main(){
    CDAccountV1 account ;
    getData(account);
    checkAccount(account);
    showAccount(account);
}

void getData(CDAccountV1& theAccount){
    std::cout << "Enter the account balance : $" <<endl ;
    std::cin >> theAccount.balance;
    std::cout << "Enter the account interest rate" << '\n';
    std::cin >> theAccount.interestRate;
    std::cout << "Enter the number of months until maturity" << '\n';
    std::cin >> theAccount.term;
}

void checkAccount(CDAccountV1& theAccount){
    double rateFrac , interest;
    rateFrac = theAccount.interestRate / 100.0;
    interest = theAccount.balance * (rateFrac*(theAccount.term/12.0));
    theAccount.balance = theAccount.balance + interest;
}

void showAccount(CDAccountV1& theAccount){
    std::cout << "When your CD matures in " <<theAccount.term<< " Months\n"
              <<"it will have a balance of $"<<theAccount.balance<<endl;
}
