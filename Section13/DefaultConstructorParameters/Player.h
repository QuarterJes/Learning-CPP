#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player {
  private:
    std::string name;
    int health;
    int xp;

  public:
    Player(std::string name_val = "None", int health_val = 100, int xp_val = 0);
};

#endif
