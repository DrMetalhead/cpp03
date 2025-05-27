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
}

ClapTrap::ClapTrap(std::string name):_name(name), _healthPoints(10), _energyPoints(10), _attackPoints(0){
}

ClapTrap::~ClapTrap(){
}

ClapTrap::ClapTrap(const ClapTrap &other):_name(other._name), _healthPoints(other._healthPoints), _energyPoints(other._energyPoints), _attackPoints(other._attackPoints){
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
	
	this->_name = other._name;
	this->_healthPoints = other._healthPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackPoints = other._attackPoints;
	return(*this);
}

void ClapTrap::attack(const std::string &target){
	
	std::cout << "ClapTrap " << _name << "attacks " << target << ", causing " << _attackPoints << " points of Damage! at the cost of 1 energy point" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (_energyPoints == 0){
		std::cout << "hes allready dead cause of no energy" << std::endl;
		return;
	}
	if ((_healthPoints - amount) <= 0)
		_healthPoints = 0;
	else
		_healthPoints = _healthPoints - amount;
	std::cout << "ClapTrap " << _name << "takes " << amount << "points of Damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	



	std::cout << "ClapTrap " << _name << "repairs him self for " << amount << std::endl;
}

int ClapTrap::checkHealth(){
	return(_healthPoints);
}

int ClapTrap::checkEnergy(){
	return (_energyPoints);
}
