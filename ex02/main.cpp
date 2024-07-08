#include "FragTrap.hpp"

int main() {
  FragTrap player("田中");
  FragTrap player1("山田");

  player.attack("山田");
  player1.takeDamage(20);
  player1.beRepaired(4294967285);
  player.highFivesGuys();

  player1.attack("田中");
  player.takeDamage(20);
  player.beRepaired(4294967286);
  player1.highFivesGuys();
}
