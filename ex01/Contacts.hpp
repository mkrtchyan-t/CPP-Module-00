/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomma <tomma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:37:34 by tomma             #+#    #+#             */
/*   Updated: 2021/11/22 14:18:10 by tomma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include "Pbook.hpp"

class Contacts {
private:
	int			index;
	static std::string	fields[5];
	std::string	info[5];

public:
	Contacts();

	bool	addInfo(int index);
	void	showContactList(void);
	void	showContact(int index);
};

#endif