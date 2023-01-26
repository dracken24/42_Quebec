# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/11 12:00:19 by nadesjar          #+#    #+#              #
#    Updated: 2022/04/28 15:04:26 by nadesjar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIGHT_RED	= $(shell tput -Txterm setaf 1)
LIGHT_GREEN	= $(shell tput -Txterm setaf 2)
LIGHT_BROWN	= $(shell tput -Txterm setaf 3)
CYAN		= $(shell tput -Txterm setaf 4)
LILAS		= $(shell tput -Txterm setaf 5)
LIGHT_CYAN	= $(shell tput -Txterm setaf 6)
WHITE		= $(shell tput -Txterm setaf 7)
RESET		= "\033[0m"

P_OBJS		= ./objs/

FILES 		= ft_hexa.c ft_printf.c ft_put.c \

OBJS		= $(patsubst %.c, $(P_OBJS)%.o, $(FILES))

CC 			= gcc
CFLAGS 		= -Wall -Werror -Wextra

LIBFT		= make_lib
LIBFT_A		= ./libft/libft.a

AR 			= ar -rcs
NAME 		= libftprintf.a

all: $(LIBFT) $(NAME)

$(NAME): msg_in $(OBJS) msg_out
	@cp $(LIBFT_A) $(NAME)
	@$(AR) $(NAME) $(OBJ)

$(P_OBJS)%.o:	%.c
	@mkdir -p $(P_OBJS)
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(LIGHT_GREEN)■"

msg_in:
	@echo $(LILAS)"COMPILATION DE PRINTF"$(RESET)

msg_out:
	@echo '\n'$(LIGHT_GREEN)"PRINTF READY !!!"$(RESET)

make_lib:
	@$(MAKE) -C ./libft

push:
	@(git add .)
	@(git commit -m "nadesjar42")
	@(git push)

clean:
	@rm -f $(OBJS)
	@rm -fr ./objs
	@$(MAKE) fclean -C ./libft
	@echo $(LIGHT_GREEN)"BYE BYE"$(RESET)
	
fclean: clean
	@rm -f $(NAME) $(LIBFT_A) a.out gcc
	
re:	fclean all

.PHONY: all make_lib push clean fclean re
