# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/25 16:00:55 by hthomas           #+#    #+#              #
#    Updated: 2021/03/31 20:01:19 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		zombie

CC =		clang++
CFLAGS =	-Wall -Werror -Wextra -std=c++98

SRCS =		Zombie.cpp	\
			ZombieEvent.cpp	\
			main.cpp

all: $(NAME)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

test: $(NAME)
	./$^

.PHONY: $(NAME)
