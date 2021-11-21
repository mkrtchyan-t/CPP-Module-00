/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomma <tomma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:50:22 by tomma             #+#    #+#             */
/*   Updated: 2021/11/21 14:20:44 by tomma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PBOOK_HPP
# define PBOOK_HPP

# include <iostream>
# include <ctype.h>
# include <iomanip>
# include <string>
# include <cstdlib>
# include "Contacts.hpp"


class Pbook {
private:
	int			amount;
	Contacts	contacts[9];

public:
	Pbook();

	void	addContact(void);
	void	searchContact();
};

#endif