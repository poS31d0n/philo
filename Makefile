
NAME	= philo

SRC 	= src
INC		= inc
OBJ 	= obj
	
SOURCE	=		$(wildcard $(SRC)/*.c)
OBJECT	=		$(patsubst %,$(OBJ)/%, $(notdir $(SOURCE:.c=.o)))

$(NAME)		:	$(OBJECT)
	cc -o $@ $^

$(OBJ)/%.o	:	$(SRC)/%.c
	cc -Wall -Werror -Wextra -I$(INC) -c $< -o $@

###################################################################### 
#																	 #
######################################################################

.PHONY: all clean fclean re

all: $(OBJECT) $(NAME)

clean:
	rm -rf $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re:			fclean all