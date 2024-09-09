#include "Account.h"

void Account::set_balance(double amount) {
  balance = amount;
}

double Account::get_balance() {
  return balance;
}

void Account:set_name(std::string n) {
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
