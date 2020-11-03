# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/25 16:00:55 by hthomas           #+#    #+#              #
#    Updated: 2020/11/02 19:03:04 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		fixed

CC =		clang++
CFLAGS =	-Wall -Werror -Wextra

SRCS =		FragTrap.cpp	\
			main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) -o $(NAME)

test: $(NAME)
	./$^
