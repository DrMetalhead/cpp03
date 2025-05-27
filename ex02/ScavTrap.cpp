#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
	_healthPoints = 100;
	_energyPoints = 50;
	_attackPoints = 20;
	_guardingGate = false;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	_healthPoints = 100;
	_energyPoints = 50;
	_attackPoints = 20;
	_guardingGate = false;
	std::cout << "ScavTrap Name Constructor Called, name is : " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other){
	_guardingGate = other._guardingGate;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other){
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->_healthPoints = other._healthPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackPoints = other._attackPoints;
	return(*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Deconstructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target){
	if (_energyPoints == 0){
		std::cout << "No.. ennnnerrrrgyyy le..f.t Hav a ni..c..e dayyyyy" << std::endl;
		return;
	}
	if (_healthPoints == 0){
		std::cout << "a pile of crap can't attack" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackPoints << " points of Damage! at the cost of 1 energy point" << std::endl;
}

void ScavTrap::guardGate(){
	if (_guardingGate == false){
		_guardingGate = true;
		std::cout << "ScavTrap " << _name << " Shields himself up" << std::endl;
	}
	else{
		std::cout << "ScavTrap " << _name << "can't use Shield up again when he is Shielded" << std::endl;
		_guardingGate = false;
	}
}