# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/21 16:36:28 by hthomas           #+#    #+#              #
#    Updated: 2021/04/27 17:15:44 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		Phonebook

CXX =		clang++
CFLAGS =	-Wall -Werror -Wextra -std=c++98

SRCS =		$(NAME).cpp


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
