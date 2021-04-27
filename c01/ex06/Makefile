# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/25 16:00:55 by hthomas           #+#    #+#              #
#    Updated: 2021/04/27 17:15:44 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		ex06

CXX =		clang++
CFLAGS =	-Wall -Werror -Wextra -std=c++98

SRCS =		HumanA.cpp	\
			HumanB.cpp	\
			Weapon.cpp	\
			main.cpp

OBJS =		$(SRCS:%.cpp=%.o)

all: $(NAME)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $? -o $(NAME)

test: $(NAME)
	./$^

.PHONY: $(NAME)
