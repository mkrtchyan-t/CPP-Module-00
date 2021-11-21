/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomma <tomma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:50:22 by tomma             #+#    #+#             */
/*   Updated: 2021/11/21 14:50:33 by tomma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PBOOK_HPP
# define PBOOK_HPP

# include <iostream>
# include <ctype.h>
# include <unistd.h>
# include <iomanip>
# include <string>
# include "Contacts.hpp"


class Pbook {
private:
	int			amount;
	Contacts	contacts[9];

public:
	Pbook();

	void	addContact(void);
	void	searchContact();
	void	exitPbook();
};

#endif