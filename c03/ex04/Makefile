# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/25 16:00:55 by hthomas           #+#    #+#              #
#    Updated: 2021/07/01 15:16:32 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		FragTrap

CXX =		clang++
CFLAGS =	-Wall -Werror -Wextra -std=c++98

SRCS =		main.cpp		\
			ClapTrap.cpp	\
			FragTrap.cpp	\
			NinjaTrap.cpp	\
			SuperTrap.cpp	\
			ScavTrap.cpp

OBJS =		$(SRCS:%.cpp=%.o)

all: $(NAME)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re

%.o: %.cpp %.hpp
	$(CXX) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	echo hello
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

test: $(NAME)
	./$^

