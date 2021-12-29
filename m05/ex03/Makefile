NAME		=	Intern
HEADER		=	Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

CPP			=	g++ -Wall -Wextra -Werror -std=c++98
SRCS		=	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
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
