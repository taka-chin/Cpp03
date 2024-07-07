#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(std::string name)
    : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
  std::cout << "Default constructor called" << std::endl;
}
