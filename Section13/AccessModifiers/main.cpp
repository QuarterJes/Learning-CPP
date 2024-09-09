#include <string>
#include <vector>
#include <iostream>

class Player { 
private:
  std::string name;
  int health;
  int xp;

public:
  void talk(std::string message) {
    std::cout << name << " says " << message << std::endl;
  }

  bool is_dead();
};

class Account {
private:
  double balance;

public:
  bool deposit(double amount) {
    balance += amount;

    return 0;
  }

  bool withdraw(double amount) {
    if (amount < balance) {
      balance -= amount;
      return 0;
    }
    return 1;
  }
};

int main () {
  Player jesang;
  jesang.name = "Jesang";

}
