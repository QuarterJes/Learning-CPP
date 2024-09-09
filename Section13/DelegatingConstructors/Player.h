#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
#include <iostream>

class Player {
  private:
    std::string name;
    int health;
    int xp;

  public:
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health, int xp);
};

#endif
