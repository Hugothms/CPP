# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/25 16:00:55 by hthomas           #+#    #+#              #
#    Updated: 2020/11/03 15:29:30 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		Magic

CC =		clang++
CFLAGS =	-Wall -Werror -Wextra

SRCS =		main.cpp		\
			Peon.cpp		\
			Sorcerer.cpp	\
			Victim.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) -o $(NAME)

test: $(NAME)
	./$^
