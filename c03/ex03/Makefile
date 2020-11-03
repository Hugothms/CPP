# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/25 16:00:55 by hthomas           #+#    #+#              #
#    Updated: 2020/11/03 14:15:00 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		FragTrap

CC =		clang++
CFLAGS =	-Wall -Werror -Wextra

SRCS =		main.cpp		\
			ClapTrap.cpp	\
			FragTrap.cpp	\
			NinjaTrap.cpp	\
			ScavTrap.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) -o $(NAME)

test: $(NAME)
	./$^
