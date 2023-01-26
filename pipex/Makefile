# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/19 16:09:57 by nadesjar          #+#    #+#              #
#    Updated: 2022/08/16 12:05:01 by nadesjar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIGHT_GREEN		= $(shell tput -Txterm setaf 2)
LILAS			= $(shell tput -Txterm setaf 5)
RESET			= "\033[0m"

PATH_OBJS 		= ./objs/
PATH_SRC		= ./src/
PATH_LIB		= ./src/lib/
PATH_CHECK		= ./src/check/
PATH_UTILS		= ./src/utils/

PATH_OBJS_B 	= ./objs_bonus/
PATH_SRC_B		= ./src_bonus/
PATH_CHECK_B	= ./src_bonus/check/
PATH_UTILS_B	= ./src_bonus/utils/

FILES 		= $(PATH_SRC)pipex.c \
			$(PATH_LIB)ft_split.c $(PATH_LIB)ft_strjoin.c $(PATH_LIB)ft_strnstr.c \
			$(PATH_LIB)ft_substr.c $(PATH_LIB)ft_strlen.c $(PATH_LIB)ft_strdup.c \
			$(PATH_LIB)free_ptr.c $(PATH_LIB)ft_strchr.c \
			$(PATH_CHECK)check.c \
			$(PATH_UTILS)utils.c \

FILES_B 	= $(PATH_SRC_B)pipex_bonus.c \
			$(PATH_CHECK_B)check_bonus.c \
			$(PATH_UTILS_B)utils_bonus.c $(PATH_UTILS_B)heredoc.c \
			$(PATH_LIB)ft_split.c $(PATH_LIB)ft_strjoin.c $(PATH_LIB)ft_strnstr.c \
			$(PATH_LIB)ft_substr.c $(PATH_LIB)ft_strlen.c $(PATH_LIB)ft_strdup.c \
			$(PATH_LIB)free_ptr.c $(PATH_LIB)ft_strchr.c $(PATH_LIB)ft_open_fd.c \
			$(PATH_LIB)ft_putstr_fd.c \

OBJS 		= $(patsubst $(PATH_SRC)%.c, $(PATH_OBJS)%.o, $(FILES))

OBJS_B 		= $(patsubst $(PATH_SRC_B)%.c, $(PATH_OBJS_B)%.o, $(FILES_B))

CC 			= gcc
CFLAGS 		= -Wall -Werror -Wextra
RL_FLAGS 	= -g -I -lncurses -lreadline

PRINTF		= make_lib
PRINTF_A	= ft_printf/libftprintf.a

NAME 		= pipex
NAME_B		= pipex_bonus

REMOVE		= rm -fr ./objs_bonus ./objs \

all: $(PRINTF) $(NAME)

$(NAME): start $(OBJS) end
	@cp $(PRINTF_A) $(NAME)
	@gcc $(OBJS) $(CFLAGS) $(PRINTF_A) -o pipex

$(PATH_OBJS)%.o:	$(PATH_SRC)%.c
	@mkdir -p $(PATH_OBJS)
	@mkdir -p $(PATH_OBJS)lib
	@mkdir -p $(PATH_OBJS)check
	@mkdir -p $(PATH_OBJS)utils
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(LIGHT_GREEN)■"

b: $(NAME_B)

$(NAME_B): start $(OBJS_B) end
	@cp $(PRINTF_A) $(NAME_B)
	@gcc $(OBJS_B) $(CFLAGS) $(PRINTF_A) $(RL_FLAGS) -o pipex_bonus

$(PATH_OBJS_B)%.o:	$(PATH_SRC_B)%.c
	@mkdir -p $(PATH_OBJS_B)
	@mkdir -p $(PATH_OBJS_B)check
	@mkdir -p $(PATH_OBJS_B)utils
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(LIGHT_GREEN)■"

make_lib:
	@$(MAKE) -C ./ft_printf

start:
	@echo $(LILAS)"COMPILATION DE PIPEX EN COURS..."$(RESET)

end:
	@echo $(LIGHT_GREEN)"\nPIPEX READY !!!"$(RESET)

clean:
	@$(REMOVE)
	@$(MAKE) fclean -C ./ft_printf
	@echo $(LIGHT_GREEN)"BYE BYE"$(RESET)

fclean: clean
	@rm -f $(NAME) $(NAME_B) $(LIBFT_A)
	
re:	fclean all

.PHONY: all make_lib start end clean fclean re