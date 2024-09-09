#include "Player.h"

Player::Player(std::string name_val, int health_val, int xp_val)
  : name {name_val}, health {health_val}, xp {xp_val} {
    std::cout << "3 args constructor" << std::endl;
  }

Player::Player()
  : Player {"None", 100, 0} {
    std::cout << "No args constructor" << std::endl;
  }

Player::Player(std::string name_val)
  : Player {name_val, 100, 0} {
    std::cout << "1 arg constructor" << std::endl;
  }
