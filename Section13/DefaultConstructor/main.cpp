#include <iostream>
#include <string>

class Player {
  private:
    std::string name;
    int health;
    int xp;

  public:
    void set_name(std::string n) {
      name = n;
    }

    std::string get_name() {
      return name;
    }

    Player() {
      name = "Player";
      health = 100;
      xp = 0;
    }

    Player(std::string n, int h, int e) {
      name = n;
      health = h;
      xp = e;
    }
};

int main() {
  Player hero;
  hero.set_name("Hero");
  Player jesang {"Jesang", 100, 0};
  std::cout << jesang.get_name() << "\n";
  std::cout << hero.get_name() << std::endl;

  return 1;
}
