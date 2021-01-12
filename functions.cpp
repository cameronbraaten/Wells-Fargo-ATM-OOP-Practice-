#include <iostream>
using namespace std;
#include "main.hpp"

class user{
  public:
  int current_balance;
  string password;
  string name;
  
  user(int x,string y,string z){
  current_balance=x;
  password=y;
  name=z;
  }


  void check_balance(){
    cout << "\nCurrent Balance: $" << current_balance;
  }
  void deposit(int deposit_amount){
    current_balance=current_balance+deposit_amount;
    check_balance();
  }
  void withdraw(int withdraw_amount){
    if (current_balance-withdraw_amount>=0){
    current_balance=current_balance-withdraw_amount;
    check_balance();
    }
    else {
      cout << "\nInsufficient funds.\n";
    }
  }
};

user Cameron(2000,"Piper1998","Cameron");

void welcome_screen(){
  int depositer;
  int option;
  int withdraw_amount;
  cout << "1) Check Balance\n" << "2) Deposit\n" << "3) Withdraw\n" << "4) Quit\n\n";
  cin >> option;
  switch (option){
    
    case 1:
    Cameron.check_balance();
    cout << "\n\nWhat would you like to do next?\n\n";
    welcome_screen();
    break;

    case 2:
    cout << "\nHow much would you like to deposit?\n\n";
    cin >> depositer;
    Cameron.deposit(depositer);
    cout << "\n\nWhat would you like to do next?\n\n";
    welcome_screen();
    break;

    case 3:
    cout << "\nHow much would you like to withdraw?\n\n";
    cin >> withdraw_amount;
    Cameron.withdraw(withdraw_amount);
    cout << "\n\nWhat would you like to do next?\n\n";
    welcome_screen();
    break;

    case 4:
    cout << "\nThank you for banking with Wells Fargo!";
    break;

    default:
    cout << "\nInvalid choice. Please select another option.\n\n";
    welcome_screen();
    break;
  }

  }