/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pbook.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomma <tomma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:50:22 by tomma             #+#    #+#             */
/*   Updated: 2021/11/20 13:13:35 by tomma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PBOOK_HPP
# define PBOOK_HPP

# include <iostream>
# include <ctype.h>
# include <iomanip>
# include <string>
# include "Contacts.hpp"


class Pbook {
private:
	int			amount;
	Contacts	contacts[9];

public:
	Pbook();

	void	addContact();
};

#endif