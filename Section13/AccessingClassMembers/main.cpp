#include <iostream>
#include <string>
#include <vector>

class Player {
public: 
  // attributes
  std::string name;
  int health;
  int xp;

  // methods
  void talk(std::string text) {
    std::cout << name << " says " << text << std::endl;
  }
  bool is_dead();
};

class Account {
public: 
  // attributes
  std::string name;
  double balance;

  // methods
  bool deposit(double val) {
    balance += val;
    std::cout << "In Deposit" << std::endl;

    return 0;
  }
  bool withdraw(double val) {
    balance -= val;
    std::cout << "In Withdraw" << std::endl;
    
    return 0;
  }
};

int main() {
  Account jesang_account;
  jesang_account.name = "Jesang";
  jesang_account.balance = 100;
  jesang_account.deposit(100);
  jesang_account.withdraw(200);

  std::cout << jesang_account.balance << std::endl;


  Player jesang;
  jesang.name = "Jesang";
  jesang.health = 100;
  jesang.xp = 12;
  jesang.talk("Warg");

  Player *enemy = new Player;
  (*enemy).name = "Enemy";
  enemy->health = 100;
  enemy->xp = 12;

  enemy->talk("I am an enemy");

  delete enemy;

  return 0;
}
