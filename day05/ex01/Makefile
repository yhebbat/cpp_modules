#.PHONY: all bonus clean fclean re
NAME = Bureaucrat

SRC = main.cpp Bureaucrat.cpp Form.cpp

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