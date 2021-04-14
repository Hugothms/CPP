# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/21 16:36:28 by hthomas           #+#    #+#              #
#    Updated: 2021/04/14 15:47:50 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		replace

CXX =		clang++
CFLAGS =	-Wall -Werror -Wextra -std=c++98

SRCS =		$(NAME).cpp

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
