/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomma <tomma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:44:25 by tomma             #+#    #+#             */
/*   Updated: 2021/11/21 14:33:50 by tomma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pbook.hpp"

Pbook::Pbook()
{
	this->amount = 0;
}

void	Pbook::addContact(void)
{
	if (this->amount == 8)
		this->amount = 0;
	else if (this->contacts[this->amount].addInfo(this->amount + 1))
		this->amount++;
}

void	Pbook::searchContact(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|   index  |first name| last name| nickname |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->amount; i++)
		this->contacts[i].showContactList();
}

int	main()
{
	Pbook		pbook;
	std::string	command;
	bool		run;

	// pbook.searchContact();
	run = true;
	while (run)
	{
		std::cout << "> ";
		// std::cin >> command;
		std::getline(std::cin, command);
		if (command == "ADD")
			pbook.addContact();
		else if (command == "SEARCH")
			pbook.searchContact();
		else if (command == "EXIT")
			run = false;
	}
}
