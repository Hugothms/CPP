# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/25 16:00:55 by hthomas           #+#    #+#              #
#    Updated: 2021/04/23 17:43:55 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		exec

CXX =		clang++
CFLAGS =	-Wall -Werror -Wextra -std=c++98

SRCS =		main.cpp			\
			AWeapon.cpp			\
			Character.cpp		\
			Enemy.cpp			\
			PlasmaRifle.cpp		\
			PowerFist.cpp		\
			RadScorpion.cpp		\
			SuperMutant.cpp		\
			SupplementEnemy.cpp	\
			SupplementWeapon.cpp

OBJS =		$(SRCS:.cpp=.o)

all: $(NAME)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $? -o $(NAME)

test: $(NAME)
	./$^

.PHONY: $(NAME)
