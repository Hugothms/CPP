NAME				=	executable

DIRECTORY_SOURCES	=	.
DIRECTORY_OBJECTS	=	objects

SOURCES				=	main.cpp

OBJECTS				=	$(SOURCES:%.cpp=$(DIRECTORY_OBJECTS)/%.o)

COMPILE				=	clang++
REMOVE				=	rm -rf

COMPILATION_FLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic-errors

OBJS =		$(SRCS:.cpp=.o)

all: $(NAME)

$(DIRECTORY_OBJECTS):
	mkdir -p $(dir $(OBJECTS))

$(DIRECTORY_OBJECTS)/%.o: $(DIRECTORY_SOURCES)/%.cpp | $(DIRECTORY_OBJECTS)
	@printf "\e[33m"
	@printf "Compile\t$< -> $@\n"
	$(COMPILE) $(COMPILATION_FLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	@printf "\e[32m"
	@printf "Build\t$(NAME)\n"
	$(COMPILE) -o $(NAME) $(OBJECTS)
	@printf "\e[39m"

run: all
	./$(NAME)

clean:
	@printf "\e[31m"
	@printf "Remove\t$(DIRECTORY_OBJECTS)\n"
	$(REMOVE) $(DIRECTORY_OBJECTS)

fclean: clean
	@printf "Remove\t$(NAME)\n"
	$(REMOVE) $(NAME)

re: fclean all

.PHONY: all run clean fclean re

.SILENT:
