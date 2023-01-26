# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/16 10:57:13 by nadesjar          #+#    #+#              #
#    Updated: 2022/07/28 23:35:29 by nadesjar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIGHT_GREEN		= $(shell tput -Txterm setaf 2)
LILAS			= $(shell tput -Txterm setaf 5)
RESET			= "\033[0m"

PATH_OBJS 		= ./objs/
PATH_SRC		= ./src/

FILES			= $(PATH_SRC)Test.cpp $(PATH_SRC)Account.cpp \

OBJS			= $(patsubst $(PATH_SRC)%.c, $(PATH_OBJS)%.o, $(FILES))

CC				= c++

CFLAGS			= -Wall -Werror -Wextra -std=c++98

NAME			= BankAccount

all: $(NAME)

$(NAME): $(OBJS)
	@echo $(LILAS)"COMPILATION DE BankAccount EN COURS..."$(RESET)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)
	@echo $(LILAS)"BankAccount READY !!!"$(RESET)

$(PATH_OBJS)%.o:	$(PATH_SRC)%.c
	@mkdir -p $(PATH_OBJS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:	
	@rm -f $(OBJ)

fclean: clean
	@echo $(LIGHT_GREEN) BYE BYE !!! $(LIGHT_GREEN)
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
