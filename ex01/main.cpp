/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricschmi <ricschmi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:57:03 by ricschmi          #+#    #+#             */
/*   Updated: 2025/05/27 16:39:02 by ricschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void){
	int takeDamage = 7;
	int Heal = 4;
	std::string target = "mirror image";
	{
		ClapTrap default_bot;
		ClapTrap bot("Hero");
		ClapTrap copy_bot(bot);

		std::cout << std::endl << "Tests for ClapTrap functions" << std::endl << std::endl;
		std::cout << "Hero has " << bot.getHitPoints() << " hit points and " << bot.getEnergyPoints() << " energy points left" << std::endl;
		bot.attack(target);
		bot.takeDamage(takeDamage);
		bot.beRepaired(Heal);
		std::cout << "Hero has " << bot.getHitPoints() << " hit points and " << bot.getEnergyPoints() << " energy points left" << std::endl;
		std::cout << std::endl << "Tests for Death" << std::endl << std::endl;
		bot.takeDamage(takeDamage);
		bot.attack(target);
		bot.beRepaired(Heal);
		bot.takeDamage(takeDamage);
		std::cout << "Hero has " << bot.getHitPoints() << " hit points and " << bot.getEnergyPoints() << " energy points left" << std::endl;
		std::cout << std::endl << "Tests for Copy and Assignment" << std::endl << std::endl;
		std::cout << "Hero.copy has " << copy_bot.getHitPoints() << " hit points and " << copy_bot.getEnergyPoints() << " energy points left" << std::endl;
		copy_bot = bot;
		std::cout << "Hero.copy has " << copy_bot.getHitPoints() << " hit points and " << copy_bot.getEnergyPoints() << " energy points left" << std::endl << std::endl;
	}
	std::cout << std::endl;
	{
		ScavTrap default_scav;
		ScavTrap scav("junk");

		std::cout << std::endl << "Tests for ScavTrap functions" << std::endl << std::endl;
		std::cout << "junk has " << scav.getHitPoints() << " hit points and " << scav.getEnergyPoints() << " energy points left" << std::endl;
		scav.takeDamage(takeDamage);
		scav.attack(target);
		scav.beRepaired(Heal);
		scav.guardGate();
		scav.guardGate();
		std::cout << "junk has " << scav.getHitPoints() << " hit points and " << scav.getEnergyPoints() << " energy points left" << std::endl;
	}
	
	

	return (0);
}