#include "ClapTrap.hpp"

int main() {
  ClapTrap player("田中");
  ClapTrap player1("山田");
  ClapTrap player2(player);

  player.attack("山田");
  player1.takeDamage(10);
}
