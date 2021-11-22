/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomma <tomma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:44:25 by tomma             #+#    #+#             */
/*   Updated: 2021/11/22 13:19:57 by tomma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pbook.hpp"

Pbook::Pbook()
{
	this->amount = 0;
	this->position = 0;
}

void	Pbook::addContact(void)
{
	if (this->amount == 8)
	{
		if (this->position == 8)
			this->position = 0;
		else if (this->contacts[this->position].addInfo(this->position + 1))
			this->position++;
	}
	else if (this->contacts[this->position].addInfo(this->position + 1))
	{
		this->amount++;
		this->position++;
	}
}

void	Pbook::searchContact(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|   index  |first name| last name| nickname |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->amount; i++)
		this->contacts[i].showContactList();
}

void	Pbook::exitPbook(void)
{
	std::string	input;

	std::cout << "# All the contacts will be lost. Are you sure you want to exit? (Y/n) ";
	std::getline(std::cin, input);
	if (input == "Y" | input == "y")
	{
		std::cout << "# Deleting all the data" << std::endl;
		sleep(3);
		std::cout << "# This might take several seconds..." << std::endl;
		sleep(3);
		std::cout << "# Ok, i'm done. Bye, friend." << std::endl;
		exit (0);
	}
	else
	{
		std::cout << "# Abort" << std::endl;
		return ;
	}
}

int	main()
{
	Pbook		pbook;
	std::string	command;

	while (true)
	{
		std::cout << "> ";
		// std::cin >> command;
		std::getline(std::cin, command);
		if (command == "ADD")
			pbook.addContact();
		else if (command == "SEARCH")
			pbook.searchContact();
		else if (command == "EXIT")
			pbook.exitPbook();
	}
}
