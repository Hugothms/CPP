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

NAME =		ex04

CC =		clang++
CFLAGS =	-Wall -Werror -Wextra

SRCS =		ex04.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) -o $(NAME)

test: $(NAME)
	./$^

.PHONY: $(NAME)
