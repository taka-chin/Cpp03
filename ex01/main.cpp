#include "ScavTrap.hpp"

int main() {
  ScavTrap player("田中");
  ScavTrap player1("山田");

  player.attack("山田");
  player1.takeDamage(20);
  player1.beRepaired(4294967285);
  player.guardGate();

  player1.attack("田中");
  player.takeDamage(20);
  player.beRepaired(4294967286);
  player1.guardGate();
}
