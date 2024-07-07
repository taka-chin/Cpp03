#include "ClapTrap.hpp"

int main() {
  ClapTrap player("田中");
  ClapTrap player1("山田");

  player.attack("山田");
  player1.takeDamage(10);
}
