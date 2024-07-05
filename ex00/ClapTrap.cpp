#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(std::string name)
    : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
  std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap() { std::cout << "destructor called" << std::endl; }

ClapTrap::ClapTrap(const ClapTrap &f) {
  std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &f) {
  std::cout << "Copy assignment operator called" << std::endl;
  return *this;
}
const std::string ClapTrap::getName() {
  const std::string ret = Name;
  return (ret);
}

const int ClapTrap::getAttackDamage() {
  const int ret = AttackDamage;
  return (ret);
}

void ClapTrap::attack(const std::string &target) {
  std::cout << "attck function called" << std::endl;
  std::cout << "ClapTrap " << getName() << "attacks" << target << ", causing "
            << getAttackDamage() << "points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "takeDamage function called" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount) {
  std::cout << "beRepaired function called" << std::endl;
}
