/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomma <tomma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:44:25 by tomma             #+#    #+#             */
/*   Updated: 2021/11/20 13:24:40 by tomma            ###   ########.fr       */
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

int	main()
{
	Pbook		pbook;
	std::string	command;
	bool		run;

	run = true;
	while (run)
	{
		std::cout << "> ";
		// std::cin >> command;
		std::getline(std::cin, command);
		if (command == "ADD")
			pbook.addContact();
		else if (command == "EXIT")
			run = false;
	}
}
