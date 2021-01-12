#include <iostream>
#include "main.hpp"
using namespace std;

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


int main() {
  string passy;
  user Cameron(2000,"Piper1998","Cameron");
  for (int i=0;i<6;i++){
  cout << "\nPlease enter your password:\n\n";
  cin >> passy;
    if (passy!=Cameron.password){
    cout << "\nIncorrect Password! Try again.\n";
    }
    if (i==5){cout << "\nPlease call 720-384-6993 for futher assistance with logging into your Wells Fargo Account. Thank you for banking with Wells Fargo!\n";
    return 0;
    }
    else if (passy==Cameron.password){
      cout << "\nWelcome to Wells Fargo, " << Cameron.name << ". What would you like to do?\n\n";
    welcome_screen();
    break;
    }
  }
}