# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/25 16:00:55 by hthomas           #+#    #+#              #
#    Updated: 2021/04/12 09:31:21 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		FragTrap

CXX =		clang++
CFLAGS =	-Wall -Werror -Wextra -std=c++98

SRCS =		main.cpp		\
			FragTrap.cpp	\
			ScavTrap.cpp

all: $(NAME)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

test: $(NAME)
	./$^

.PHONY: $(NAME)
