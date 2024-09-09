#include <iostream>
#include "Player.h"

void display_player(Player p);

int main() {
  Player empty;

  display_player(empty);

  Player jesang {"Jesang"};
  Player hero {"Hero", 100};
  Player villain {"Villain", 100, 6};


  return 1;
}


void display_player(Player p) {
  std::cout << "Name: " << p.get_name() << "\n";
  std::cout << "Health: " << p.get_health() << "\n";
  std::cout << "XP: " << p.get_xp() << std::endl;
}
