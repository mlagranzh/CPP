NAME		=	megaphone

CPP			=	c++ -Wall -Wextra -Werror 
SRCS		=	Megaphone.cpp
OBJ			=	$(SRCS:.c=.o)

all: $(NAME)

%.o: %.cpp 
	$(CPP) -c $< -o $@

$(NAME): $(OBJ) MAKEFILE
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
