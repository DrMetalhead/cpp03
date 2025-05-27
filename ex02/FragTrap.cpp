#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
	_healthPoints = 100;
	_energyPoints = 100;
	_attackPoints = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
	_healthPoints = 100;
	_energyPoints = 100;
	_attackPoints = 30;
	std::cout << "FragTrap Name Constructor Called, name is : " << this->_name << std::endl;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other){
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other){
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->_healthPoints = other._healthPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackPoints = other._attackPoints;
	return(*this);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Deconstructor called" << std::endl;
}

void FragTrap::attack(const std::string &target){
	if (_energyPoints == 0){
		std::cout << "No.. ennnnerrrrgyyy le..f.t Hav a ni..c..e dayyyyy" << std::endl;
		return;
	}
	if (_healthPoints == 0){
		std::cout << "a pile of crap can't attack" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackPoints << " points of Damage! at the cost of 1 energy point" << std::endl;
}

void FragTrap::highFivesGuys(){
	if(_healthPoints == 0){
		std::cout << "FragTrap " << _name << " wants to give a high five but has no coporial form anymore, cause hes dead!" << std::endl;
		return;
	}
	if (_energyPoints == 0){
		std::cout << "FragTrap " << _name << " wants to give you a high five but can't move cause he has no energy!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << _name << " wants to give you a High Five but ground pounds Bebop instead ;D" << std::endl;
}