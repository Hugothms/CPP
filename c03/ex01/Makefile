# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/25 16:00:55 by hthomas           #+#    #+#              #
#    Updated: 2020/11/03 10:09:41 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		FragTrap

CC =		clang++
CFLAGS =	-Wall -Werror -Wextra

SRCS =		main.cpp		\
			FragTrap.cpp	\
			ScavTrap.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) -o $(NAME)

test: $(NAME)
	./$^
