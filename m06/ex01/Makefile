NAME		=	Form
HEADER		=	Bureaucrat.hpp Form.hpp

CPP			=	c++ -Wall -Wextra -Werror -std=c++98
SRCS		=	main.cpp Bureaucrat.cpp Form.cpp
OBJ			=	$(SRCS:.cpp=.o)

all: $(NAME)

.cpp.o :
	${CPP} -c $< -o ${<:.cpp=.o}

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

.PHONY: all libft clean fclean re leaks
