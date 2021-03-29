# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/21 16:36:28 by hthomas           #+#    #+#              #
#    Updated: 2021/03/30 00:15:24 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		Phonebook

CC =		clang++
CFLAGS =	-Wall -Werror -Wextra -std=c++98

SRCS =		$(NAME).cpp


all: $(NAME)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)