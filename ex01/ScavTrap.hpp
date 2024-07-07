#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
  ScavTrap(std::string name);
  ~ScavTrap();
  ScavTrap(const ScavTrap &f);
  ScavTrap &operator=(const ScavTrap &f);
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  const std::string getName() const;
  int getHitPoints() const;
  int getEnergyPoints() const;
  int getAttackDamage() const;
  void guardGate();
};

#endif
