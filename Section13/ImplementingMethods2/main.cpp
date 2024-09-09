#include <iostream>
#include "Account.h"

int main() {
  Account jesang_account;
  jesang_account.set_name("Jesang's Account");
  jesang_account.set_balance(1000.0);

  if (jesang_account.deposit(200.0))
    std::cout << "Deposit Successful!\n";
  else
    std::cout << "Deposit Failed!\n";

  if (jesang_account.withdraw(500.0))
    std::cout << "Withdraw Successful!\n";
  else
    std::cout << "Withdraw Failed!\n";

  if (jesang_account.withdraw(1500.0))
    std::cout << "Withdraw Successful!\n";
  else
    std::cout << "Withdraw Failed!\n";


  return 1;
}
