#.PHONY: all bonus clean fclean re
NAME = phonebook

SRC = contact.cpp get.cpp set.cpp add_search.cpp
#SRC_BONUS =	checker.c get_next_line.c get_next_line_utils.c pile.c \
			operations.c to_check.c utils.c free.c
OBJECT = $(SRC:.cpp=.o)
#OBJECT_BONUS = $(SRC_BONUS:.cpp=.o)

all : $(NAME)

$(NAME):
	@clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)
	@echo "✅✅✅"

#bonus:
#	@gcc -Wall -Wextra -Werror $(SRC_BONUS) -o $(NAME_BONUS)
#	@echo "🎁🎁🎁"

clean:
	@rm -f $(OBJECT)
	@echo "🗑️ 🗑️ 🗑️"
fclean: clean
	@rm -f $(NAME)
	@echo "🚮🚮🚮"
re: fclean all
