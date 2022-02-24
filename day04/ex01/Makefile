#.PHONY: all bonus clean fclean re
NAME = Animal

SRC = main.cpp Animal.cpp

OBJECT = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME):
	@c++ -Wall -Wextra -Werror $(SRC) -o $(NAME) -std=c++98
	@echo "✅✅✅"

clean:
	@rm -f $(OBJECT)
	@echo "🗑️ 🗑️ 🗑️"
fclean: clean
	@rm -f $(NAME)
	@echo "🚮🚮🚮"
re: fclean all