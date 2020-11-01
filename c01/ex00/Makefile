# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/21 16:36:28 by hthomas           #+#    #+#              #
#    Updated: 2020/11/01 15:25:07 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		Pony

CC =		clang++
CFLAGS =	-Wall -Werror -Wextra

SRCS =		$(NAME).cpp	\
			main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) -o $(NAME)

test: $(NAME)
	./$^
