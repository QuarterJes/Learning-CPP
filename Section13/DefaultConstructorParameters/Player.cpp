#include "Player.h"
#include <iostream>

Player::Player(std::string name_val, int health_val, int xp_val)
  : name {name_val}, health {health_val}, xp {xp_val} {
    std::cout << "3 args constructor called" << std::endl;
  }
