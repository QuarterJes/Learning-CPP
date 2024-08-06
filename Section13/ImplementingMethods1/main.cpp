#include <iostream>
#include <string>

class Account {
private:
  std::string name;
  double balance;

public:
  // declared in-line
  void set_balance(double amount) {
    balance = amount;
  }

  double get_balance() {
    return balance;
  }

  // declared outside class declaration
  void set_name(std::string n);
  std::string get_name();

  bool deposit(double amount);
  bool withdraw(double amount);
};

void Account::set_name(std::string n) {
  name = n; 
}

std::string Account::get_name() {
  return name;
}

bool Account::deposit(double amount) {
  balance += amount;
  return 1;
}

bool Account::withdraw(double amount) {
  if (amount <= balance) {
    balance -= amount;
    return 1;
  }
  return 0;
}

int main() {
  Account jesang_account;
  jesang_account.set_name("Jesang");
  jesang_account.set_balance(1000);

  if (jesang_account.deposit(200))
    std::cout << "Deposit OK" << std::endl;
  else
    std::cout << "Deposit failed" << std::endl;

  if (jesang_account.withdraw(500))
    std::cout << "Withdraw OK" << std::endl;
  else
    std::cout << "Withdraw failed" << std::endl;

  if (jesang_account.withdraw(1500))
    std::cout << "Withdraw OK" << std::endl;
  else
    std::cout << "Withdraw failed" << std::endl;
    

  return 1;
}
