# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/21 16:36:28 by hthomas           #+#    #+#              #
#    Updated: 2021/04/23 17:43:55 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		megaphone

CXX =		clang++
CFLAGS =	-Wall -Werror -Wextra -std=c++98

SRCS =		$(NAME).cpp

OBJS =		$(SRCS:.cpp=.o)

all: $(NAME)

clean:
			$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re

$(NAME):	$(SRCS)
	$(CXX) $(CFLAGS) $(SRCS) -o $(NAME)
