# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tomma <tomma@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 17:11:04 by tomma             #+#    #+#              #
#    Updated: 2021/11/20 14:29:38 by tomma            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= pbook

SRCS			= Pbook.cpp Contacts.cpp
OBJS			= $(SRCS:.cpp=.o)

CC				= c++
RM				= rm -rf
FLAGS			= -Wall -Wextra -Werror


$(NAME):		$(OBJS)
				@$(CC) ${FLAGS} -o ${NAME} ${OBJS}

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re