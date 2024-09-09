#include "Player.h"
#include <iostream>

std::string Player::get_name() {
  return name;
}

int Player::get_health() {
  return health;
}

int Player::get_xp() {
  return xp;
}

Player::Player(std::string name_val, int health_val, int xp_val)
 : name {name_val}, health {health_val}, xp {xp_val} {
  std::cout << "Three-args constructor called" << std::endl;
}

Player::Player(const Player &source) 
: name {source.name}, health {source.health}, xp {source.xp} {
  std::cout << "Copy constructor - made copy of " << source.name << std::endl; 
}

Player::~Player() {
  std::cout << "Destructor called for: " << name << std::endl; 
}
