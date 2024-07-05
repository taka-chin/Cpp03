#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <string>

class ClapTrap {
private:
  std::string Name;
  int HitPoints;
  int EnergyPoints;
  int AttackDamage;

public:
  ClapTrap(std::string name);
  ~ClapTrap();
  ClapTrap(const ClapTrap &f);
  ClapTrap &operator=(const ClapTrap &f);
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  const std::string getName();
	const int getAttackDamage();
};

#endif
