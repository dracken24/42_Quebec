# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 11:43:06 by nadesjar          #+#    #+#              #
#    Updated: 2022/04/29 11:02:18 by nadesjar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIGHT_GREEN	= $(shell tput -Txterm setaf 2)
LILAS		= $(shell tput -Txterm setaf 5)
RESET		= "\033[0m"

P_OBJS		= ./objs/
MATH 		= ./math/
MEM_A		= ./mem_alloc/
LST			= ./lst/
STR			= ./str/
MEM_M		= ./mem_move/
IS			= ./is/
ATOI		= ./atoitoa/
GNL			= ./gnl/
FD			= ./fd/

FILES 		= $(MATH)ft_ultimate_range.c $(MATH)ft_putnbr.c $(MATH)ft_range.c $(MATH)ft_swap.c \
			$(MATH)ft_rev_int_tab.c $(MATH)ft_nbrlen.c $(MATH)ft_putnbr_fd.c $(MATH)ft_swap.c \
			$(MATH)ft_p_or_imp.c \
			$(MEM_A)ft_bzero.c $(MEM_A)ft_calloc.c $(MEM_A)ft_free_ptr.c $(MEM_A)ft_nbr_ptr.c \
			$(LST)ft_lstmap.c $(LST)ft_lstiter.c $(LST)ft_lstclear.c $(LST)ft_lstdelone.c \
			$(LST)ft_lstadd_back.c $(LST)ft_lstlast.c $(LST)ft_lstsize.c $(LST)ft_lstadd_front.c \
			$(LST)ft_lstnew.c \
			$(STR)ft_strlen.c $(STR)ft_strlcpy.c $(STR)ft_strlcat.c $(STR)ft_strrchr.c \
			$(STR)ft_strncmp.c  $(STR)ft_strnstr.c $(STR)ft_strtrim.c $(STR)ft_strmapi.c \
			$(STR)ft_striteri.c $(STR)ft_strdup.c $(STR)ft_substr.c $(STR)ft_strjoin.c \
			$(STR)ft_tolower.c $(STR)ft_strmapi.c $(STR)ft_striteri.c \
			$(STR)ft_strchr.c $(STR)ft_split.c $(STR)ft_strchr_bool.c \
			$(STR)ft_strcat.c $(STR)ft_toupper.c \
			$(MEM_M)ft_memset.c $(MEM_M)ft_memmove.c $(MEM_M)ft_memcmp.c \
			$(MEM_M)ft_memcpy.c \
			$(IS)ft_isalpha.c $(IS)ft_isdigit.c $(IS)ft_isalnum.c $(IS)ft_isascii.c \
			$(IS)ft_isprint.c \
			$(ATOI)ft_atoi.c $(ATOI)ft_itoa.c $(ATOI)ft_atoi_base.c \
			$(GNL)gnl.c $(GNL)gnl_utils.c \
			$(FD)ft_open_fd_rdwr_crtr.c $(FD)ft_putchar_fd.c $(FD)ft_putstr_fd.c \
			$(FD)ft_putendl_fd.c $(FD)ft_fd_len.c \

OBJS		= $(patsubst %.c, $(P_OBJS)%.o, $(FILES))
			
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra

NAME		= libft.a

all: $(NAME)

$(NAME): msg_in $(OBJS) msg_out
	@ar -rcs $(NAME) $(OBJS)

$(P_OBJS)%.o:	%.c
	@mkdir -p $(P_OBJS)
	@mkdir -p $(P_OBJS)math
	@mkdir -p $(P_OBJS)mem_alloc
	@mkdir -p $(P_OBJS)lst
	@mkdir -p $(P_OBJS)str
	@mkdir -p $(P_OBJS)mem_move
	@mkdir -p $(P_OBJS)is
	@mkdir -p $(P_OBJS)atoitoa
	@mkdir -p $(P_OBJS)gnl
	@mkdir -p $(P_OBJS)fd
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(LIGHT_GREEN)■"

msg_in:
	@echo $(LILAS)"LA LIBFT SE COMPILE COMME UNE GRANDE..."$(RESET)

msg_out:
	@echo '\n'$(LIGHT_GREEN)"LIBFT READY FOR NEXT !!!"$(RESET)

gitp:
	@(git add .)
	@(git commit -m "nadesjar42")
	@(git push)

clean:
	@rm -f $(OBJ)
	@rm -fr ./objs

fclean: clean
	@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
