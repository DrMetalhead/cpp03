/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricschmi <ricschmi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:56:57 by ricschmi          #+#    #+#             */
/*   Updated: 2025/05/27 16:51:49 by ricschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default"), _healthPoints(10), _energyPoints(10), _attackPoints(0){
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):_name(name), _healthPoints(10), _energyPoints(10), _attackPoints(0){
	std::cout << _name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Deconstructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other):_name(other._name + ".copy"), _healthPoints(other._healthPoints), _energyPoints(other._energyPoints), _attackPoints(other._attackPoints){
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->_healthPoints = other._healthPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackPoints = other._attackPoints;
	return(*this);
}

void ClapTrap::attack(const std::string &target){
	if (_energyPoints == 0){
		std::cout << "No.. ennnnerrrrgyyy le..f.t Hav a ni..c..e dayyyyy" << std::endl;
		return;
	}
	if (_healthPoints == 0){
		std::cout << "A nugget has noway to attack" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackPoints << " points of Damage! at the cost of 1 energy point" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (_healthPoints == 0){
		std::cout << "corpse beater detected" << std::endl;
		return;
	}
	else if (_healthPoints <= amount)
		_healthPoints = 0;
	else
		_healthPoints = _healthPoints - amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of Damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_energyPoints == 0){
		std::cout << "can't do sh*t without energy" << std::endl;
		return;
	}
	if (_healthPoints == 0){
		std::cout << "can't repair a pile of dust" << std::endl;
		return;
	}
	_healthPoints = _healthPoints + amount;
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " repairs him self for " << amount << " at the cost of 1 point of energy" << std::endl;
}

unsigned int ClapTrap::getHitPoints(){
	return (_healthPoints);
}

unsigned int ClapTrap::getEnergyPoints(){
	return (_energyPoints);
}