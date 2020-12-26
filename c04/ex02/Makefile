# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/25 16:00:55 by hthomas           #+#    #+#              #
#    Updated: 2020/12/26 14:26:44 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		executable

CC =		clang++
CFLAGS =	-Wall -Werror -Wextra

SRCS =		main.cpp				\
			AssaultTerminator.cpp	\
			Squad.cpp				\
			TacticalMarine.cpp


all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) -o $(NAME)

test: $(NAME)
	./$^

.PHONY: $(NAME)
