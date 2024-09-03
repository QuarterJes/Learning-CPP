#include <iostream>

class Player {
  private:
    std::string name;
    int health;
    int xp; 

  public:
    void set_name(std::string n) {
      name = n;
    }

    // Overloaded constructors
    Player() {
      std::cout << "No args constructor called" << std::endl;
    }

    Player(std::string name) {
      std::cout << "String arg constructor called" << std::endl;
    }

    Player(std::string name, int health, int xp) {
      std::cout << "Three args constructor called" << std::endl;
    }

    ~Player() {
      std::cout << "Destructor called for " << name << std::endl;
    }
};

int main() {

  {
    Player slayer;
    slayer.set_name("Slayer");
  }

  {
    Player jesang;
    jesang.set_name("Jesang");
    Player hero("Hero");
    hero.set_name("Hero");
    Player villain("Villain", 100, 12);
    villain.set_name("Villain");
  }

  return 1;
}
