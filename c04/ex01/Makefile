# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/25 16:00:55 by hthomas           #+#    #+#              #
#    Updated: 2020/12/03 14:49:13 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		Weapons

CC =		clang++
CFLAGS =	-Wall -Werror -Wextra

SRCS =		main.cpp		\
			AWeapon.cpp		\
			PowerFist.cpp	\
			PlasmaRifle.cpp	\
			Enemy.cpp		\
			RadScorpion.cpp	\
			SuperMutant.cpp	\
			Character.cpp


all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) -o $(NAME)

test: $(NAME)
	./$^
