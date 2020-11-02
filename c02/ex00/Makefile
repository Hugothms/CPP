# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/25 16:00:55 by hthomas           #+#    #+#              #
#    Updated: 2020/11/02 18:02:46 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		fixed

CC =		clang++
CFLAGS =	-Wall -Werror -Wextra

SRCS =		Fixed.cpp	\
			main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) -o $(NAME)

test: $(NAME)
	./$^
