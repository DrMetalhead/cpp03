/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricschmi <ricschmi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:57:00 by ricschmi          #+#    #+#             */
/*   Updated: 2025/05/27 16:45:47 by ricschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap{
	private:
		std::string _name;
		int			_healthPoints;
		int			_energyPoints;
		int			_attackPoints;
	public:
		//constructors
		ClapTrap();
		ClapTrap(std::string name);
		//Copy constructor
		ClapTrap(const ClapTrap &other);
		//Copy assignment operator
		ClapTrap &operator=(const ClapTrap &other);
		//Destructor
		~ClapTrap();
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int	checkHealth();
		int checkEnergy();
};


#endif