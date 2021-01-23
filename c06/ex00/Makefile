# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/25 16:00:55 by hthomas           #+#    #+#              #
#    Updated: 2021/01/23 13:26:19 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		convert

CC =		clang++
CFLAGS =	-Wall -Werror -Wextra

SRCS =		main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) -o $(NAME)

test: $(NAME)
	./$^ 0
	./$^ nan
	./$^ 42.0f

.PHONY: $(NAME)
