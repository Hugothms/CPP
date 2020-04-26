# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/25 16:00:55 by hthomas           #+#    #+#              #
#    Updated: 2020/04/25 16:05:05 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		zombie

CC =		clang++
CFLAGS =	-Wall -Werror -Wextra

SRCS =		Zombie.cpp	\
			Zombie.hpp	\
			ZombieEvent.cpp	\
			ZombieEvent.hpp	\
			main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) -o $(NAME)