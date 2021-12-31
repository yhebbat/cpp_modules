#.PHONY: all bonus clean fclean re
NAME = Bureaucrat

SRC = Bureaucrat.cpp  Form.cpp  main.cpp  PresidentialPardonForm.cpp  RobotomyRequestForm.cpp  ShrubberyCreationForm.cpp Intern.cpp

OBJECT = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME):
	@clang++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o $(NAME)
	@echo "✅✅✅"

clean:
	@rm -f $(OBJECT)
	@echo "🗑️ 🗑️ 🗑️"
fclean: clean
	@rm -f $(NAME)
	@echo "🚮🚮🚮"
re: fclean all