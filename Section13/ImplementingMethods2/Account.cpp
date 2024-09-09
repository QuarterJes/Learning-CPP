#include "Account.h"

void Account::set_name(std::string n) {
  name = n;
}

std::string Account::get_name() {
  return name;
}

bool Account::deposit(double amount) {
  if (amount > 0) {
    balance += amount;
    return 1;
  }
  return 0;
}

bool Account::withdraw(double amount) {
  if (balance - amount >= 0) {
    balance -= amount;
    return 1;
  }
  return 0;
}
