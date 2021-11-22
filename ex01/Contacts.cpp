/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomma <tomma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:44:43 by tomma             #+#    #+#             */
/*   Updated: 2021/11/22 14:25:23 by tomma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pbook.hpp"

std::string	Contacts::fields[5] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darekest Secret"
};

Contacts::Contacts()
{
	for (int i = 0; i < 5; i++)
		this->info[i] = std::string();
}

bool	Contacts::addInfo(int index)
{
	this->index = index;
	for (int i = 0; i < 5; i++)
	{
		std::cout << Contacts::fields[i] << ": ";
		// std::cin >> this->info[i];
		std::getline(std::cin, this->info[i]);
	}
	size_t	contactLength = 0;
	for (int i = 0; i < 5; i++)
		contactLength += this->info[i].length();
	if (contactLength == 0)
	{
		std::cout << "/// Contact is empty ///" << std::endl;
		return false;
	}
	std::cout << "Contact is added !" << std::endl;
	return true;
}

void	Contacts::showContactList(void)
{
	std::cout << "|" << std::setw(9) << this->index << " |";
	for (int i = 0; i < 3; i++)
	{
		if (this->info[i].length() > 10)
			std::cout << this->info[i].substr(0, 9) << ".|";
		else
			std::cout << this->info[i] << std::setw(11 - this->info[i].length()) << "|";
	}
	std::cout << std::endl << "|-------------------------------------------|" << std::endl;
}

void	Contacts::showContact(int index)
{
	std::cout << std::endl << "\t\tContact No. " << index << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "|" << this->fields[i] << ": " << this->info[i]
			<< std::setw(42 - (this->fields[i].length() + this->info[i].length())) << "|" << std::endl;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
}