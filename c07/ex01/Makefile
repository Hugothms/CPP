# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/25 16:00:55 by hthomas           #+#    #+#              #
#    Updated: 2021/04/14 15:47:50 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		program

CXX =		clang++
CFLAGS =	-Wall -Werror -Wextra -std=c++98

SRCS =		iter.cpp

all: $(NAME)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re

$(NAME): $(SRCS)
	$(CXX) $(CFLAGS) $(SRCS) -o $(NAME)

test: $(NAME)
	./$^

.PHONY: $(NAME)
