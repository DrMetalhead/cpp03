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

#include "ClapTrap.hpp"

int main(void){
	std::string target;
	unsigned int numA;
	unsigned int numB;

	ClapTrap default_bot;
	ClapTrap bot("Hero");

	std::cout << "what is the aponents name, the choice is yours!" << std::endl;
	std::cin >> target;
	std::cout << "how strong is the aponent? numbers only" << std::endl;
	std::cin >> numA;
	std::cout << "and last assigne a healing factor to our hero, numbers only" << std::endl;
	std::cin >> numB;
	
	while(bot.checkHealth() != 0 && bot.checkEnergy() != 0)
	{
		



		bot.takeDamage(numA);
	}
	
}