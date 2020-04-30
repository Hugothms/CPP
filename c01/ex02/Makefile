# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugothms <hugothms@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/25 16:00:55 by hthomas           #+#    #+#              #
#    Updated: 2020/04/30 14:23:31 by hugothms         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		zombie

CC =		clang++
CFLAGS =	-Wall -Werror -Wextra

SRCS =		Zombie.cpp	\
			ZombieEvent.cpp	\
			main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) -o $(NAME)