#.PHONY: all bonus clean fclean re
NAME = Weapon

SRC = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

OBJECT = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME):
	@clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)
	@echo "✅✅✅"

clean:
	@rm -f $(OBJECT)
	@echo "🗑️ 🗑️ 🗑️"
fclean: clean
	@rm -f $(NAME)
	@echo "🚮🚮🚮"
re: fclean all