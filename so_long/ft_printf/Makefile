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

LIGHT_GREEN	= $(shell tput -Txterm setaf 2)
LILAS		= $(shell tput -Txterm setaf 5)
RESET		= "\033[0m"

PATH_OBJS 	= ./objs/
PATH_SRCS	= ./

FILES 		= $(PATH_SRCS)ft_hexa.c $(PATH_SRCS)ft_printf.c \
			$(PATH_SRCS)ft_put.c $(PATH_SRCS)ft_itoa.c \

OBJS 		= $(patsubst $(PATH_SRCS)%.c, $(PATH_OBJS)%.o, $(FILES))

CC 			= gcc
CFLAGS 		= -Wall -Werror -Wextra

AR 			= ar -rcs
NAME 		= libftprintf.a

LIBFT		= make_lib
LIBFT_A		= ./libft/libft.a

all: $(LIBFT) $(NAME)

$(NAME): a $(OBJS) b
	@$(AR) $(NAME) $(OBJS) $(LIBFT_A) $(FLAGS)

$(PATH_OBJS)%.o:	$(PATH_SRCS)%.c
	@mkdir -p $(PATH_OBJS)
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(LIGHT_GREEN)■"

a:
	@echo $(LILAS)"COMPILE MOI CE PRINTF LA..."$(RESET)

b:
	@echo $(LIGHT_GREEN)"\nMALADE CA A COMPILER !!!"$(RESET)

make_lib:
	@$(MAKE) -C ./libft

clean:
	@$(MAKE) fclean -C ./libft
	@rm -f $(OBJS) 
	@rm -fr ./objs

fclean: clean
	@rm -f $(NAME) $(LIBFT_A) a.out gcc
	
re:	fclean all

.PHONY: all make_lib a b clean fclean re
