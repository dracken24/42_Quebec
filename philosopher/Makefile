# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/11 12:00:19 by nadesjar          #+#    #+#              #
#    Updated: 2022/09/26 12:21:38 by nadesjar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PATH_OBJS 		= ./objs/
PATH_SRCS		= ./srcs/
PATH_UTILS		= $(PATH_SRCS)utils/
PATH_ROUT		= $(PATH_SRCS)routine/

FILES	 		= $(PATH_SRCS)philo.c \
				$(PATH_UTILS)utils.c $(PATH_ROUT)routine.c \
				$(PATH_ROUT)routine2.c $(PATH_UTILS)init.c \
				$(PATH_UTILS)ft_atol_pos.c \

OBJS 			= $(patsubst $(PATH_SRCS)%.c, $(PATH_OBJS)%.o, $(FILES)) \

CC 				= gcc
FLAGS 			= -Wall -Wextra -Werror

NAME 			= philo

all: signat $(NAME)

$(NAME): msg_in $(OBJS) msg_out
	@gcc $(OBJS) $(FLAGS) -pthread -o $(NAME)
	
$(PATH_OBJS)%.o:	$(PATH_SRCS)%.c
	@mkdir -p $(PATH_OBJS)
	@mkdir -p $(PATH_OBJS)run
	@mkdir -p $(PATH_OBJS)utils
	@mkdir -p $(PATH_OBJS)routine
	@$(CC) $(FLAGS) -I. -c $< -o $@
	@printf "$G■"

msg_in:
	@echo $L"COMPILING PHILOSOPHER..."$W

msg_out:
	@echo $L"\nPHILOSOPHER READY :)"$W

clean:
	@rm -f $(OBJS)
	@rm -fr ./objs
	@echo $G"\n                                 BYE BYE\n"$W

fclean: clean
	@rm -f $(NAME)

re:	fclean all

signat:
	@echo "$G\n\|/~---~---~---~---~---~---~---~---~---~---~---~---~---~---~---~---~---~\|/"
	@echo " |             ---------------------------------------------             |"
	@echo " |             *--* $LPROJET: PHILOSOPHER   PAR: NADESJAR$G *--*             |"
	@echo " |             ---------------------------------------------             |"
	@echo "/|\~---~---~---~---~---~---~---~---~---~---~---~---~---~---~---~---~---~/|\ \n$W"

L				= $(shell tput -Txterm setaf 5)
R				= $(shell tput -Txterm setaf 1)
G				= $(shell tput -Txterm setaf 2)
C				= $(shell tput -Txterm setaf 6)
W				= $(shell tput -Txterm setaf 7)

.Phony: all msg_in msg_out clean fclean re signat

