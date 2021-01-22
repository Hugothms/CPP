# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/25 16:00:55 by hthomas           #+#    #+#              #
#    Updated: 2021/01/22 10:14:30 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		program

CC =		clang++
CFLAGS =	-Wall -Werror -Wextra

SRCS =		main.cpp			\
			Bureaucrat.cpp		\
			Form.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) -o $(NAME)

test: $(NAME)
	./$^

.PHONY: $(NAME)
