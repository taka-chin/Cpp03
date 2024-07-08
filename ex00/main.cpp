#include "ClapTrap.hpp"

int main() {
  ClapTrap player("田中");
  ClapTrap player1("山田");

  player.attack("山田");
  player1.takeDamage(0);
  player1.beRepaired(4294967285);
  player1.attack("田中");
  player.takeDamage(0);
  player1.beRepaired(4294967286);
}
