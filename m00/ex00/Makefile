NAME		=	megaphone
HEADER		=	Account.hpp

GCC			=	g++ -Wall -Wextra -Werror 
SRCS		=	Megaphone.cpp
OBJ			=	$(SRCS:.c=.o)

all: $(NAME)

%.o: %.c $(HEADER)
	$(GCC) -I $(HEADER) -c $< -o $@

$(NAME): $(OBJ) $(HEADER) MAKEFILE
	@echo "\033[0;35mСоздаю исполняемый файл...\033[0;32m"
	@$(GCC) -o $(NAME) $(OBJ)
#	@echo "DONE! Запускаю..."
#	@./minishell

clean:
	@echo "\033[0;35mУдаляю объектные файлы...\033[0;31m"
	@rm -f $(OBJ)

fclean: clean
	@echo "\033[0;35mУдаляю исполняемый файл...\033[0;31m"
	@rm -f $(NAME)

re: fclean all

.PHONY: all libft clean fclean re
