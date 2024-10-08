#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class Account {
  private:
    std::string name;
    double balance;

  public:
    // methods
    // declared in line
    void set_balance(double bal) {
      balance = bal;
    }

    double get_balance() {
      return balance;
    }

    // declared outside declaration
    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif // ACCOUNT_H_
