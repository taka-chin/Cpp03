#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(std::string name)
    : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
  std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap() { std::cout << "destructor called" << std::endl; }

ClapTrap::ClapTrap(const ClapTrap &f) {
  std::cout << "Copy constructor called" << std::endl;
  *this = f;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &f) {
  std::cout << "Copy assignment operator called" << std::endl;
  this->Name = f.getName();
  this->HitPoints = f.getHitPoints();
  this->EnergyPoints = f.getEnergyPoints();
  this->AttackDamage = f.getAttackDamage();
  return *this;
}
const std::string ClapTrap::getName() const {
  const std::string ret = Name;
  return (ret);
}

int ClapTrap::getHitPoints() const {
  int ret = HitPoints;
  return (ret);
}

int ClapTrap::getEnergyPoints() const {
  int ret = EnergyPoints;
  return (ret);
}

int ClapTrap::getAttackDamage() const {
  int ret = AttackDamage;
  return (ret);
}

void ClapTrap::attack(const std::string &target) {
  std::cout << "attck function called" << std::endl;
  if (!getEnergyPoints()) {
    std::cout << "ClapTrap " << getName() << "No Energy Points !!" << std::endl;
  } else if (!getHitPoints()) {
    std::cout << "ClapTrap " << getName() << "No Hit Points !!" << std::endl;
  } else {
    std::cout << "ClapTrap " << getName() << " attacks" << target
              << ", causing " << getAttackDamage() << " points of damage!"
              << std::endl;
    this->EnergyPoints -= 1;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "takeDamage function called" << std::endl;
  this->HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (getEnergyPoints()) {
    std::cout << "beRepaired function called" << std::endl;
    this->HitPoints += amount;
    this->EnergyPoints -= 1;
  } else {
    std::cout << "ClapTrap No Energy Points !!" << std::endl;
  }
}
