#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(std::string name) : Name(name)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "destructor called" << std::endl;
}
		
ClapTrap::ClapTrap(const ClapTrap&f){
	std::cout << "Copy constructor called" << std::endl;
}
		
ClapTrap &ClapTrap:: operator=(const ClapTrap& f){
	  std::cout << "Copy assignment operator called" << std::endl;
  		return *this;
}
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
