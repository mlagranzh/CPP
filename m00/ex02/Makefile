NAME		=	Account
HEADER		=	Account.hpp

CPP			=	c++ -Wall -Wextra -Werror -std=c++98
SRCS		=	Account.cpp tests.cpp
OBJ			=	$(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(HEADER)
	$(CPP) -I $(HEADER) -c $< -o $@

$(NAME): $(OBJ) $(HEADER) MAKEFILE
	@echo "\033[0;35mСоздаю исполняемый файл...\033[0;32m"
	@$(CPP) -o $(NAME) $(OBJ)

clean:
	@echo "\033[0;35mУдаляю объектные файлы...\033[0;31m"
	@rm -f $(OBJ)

fclean: clean
	@echo "\033[0;35mУдаляю исполняемый файл...\033[0;31m"
	@rm -f $(NAME)

re: fclean all

.PHONY: all libft clean fclean re
