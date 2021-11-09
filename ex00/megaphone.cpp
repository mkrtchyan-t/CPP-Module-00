/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomma <tomma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:14:42 by tomma             #+#    #+#             */
/*   Updated: 2021/11/09 17:25:01 by tomma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

void	make_loud(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
			std::cout<<char(toupper(argv[i][j]));
		if (argv[i + 1])
			std::cout<<" ";
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		make_loud(argc, argv);
	std::cout<<std::endl;
	return 0;
}