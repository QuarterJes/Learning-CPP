#include <iostream>
#include <string>
#include <vector>

class Player {
  // attributes
  std::string name;
  int health;
  int xp;

  // methods
  void talk(std::string);
  bool is_dead();
};

class Account {
  // attributes
  std::string name;
  double balance;

  // methods
  bool deposit(double);
  bool withdraw(double);
};

int main () {
  Player jesang;
  Player hero;

  return 0;
}
