#.PHONY: all bonus clean fclean re
NAME = Zombie

SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp

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