# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/23 13:22:35 by nadesjar          #+#    #+#              #
#    Updated: 2023/01/24 11:24:39 by nadesjar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

P_OBJS 		= ./objs/
P_SRCS		= ./srcs/
P_CLASS		= ./srcs/template/

FILES			= $(P_SRCS)main.cpp \

OBJS			= $(patsubst $(P_SRCS)%.cpp, $(P_OBJS)%.o, $(FILES))

CC				= c++

CFLAGS			= -Wall -Werror -Wextra -std=c++98

NAME			= EasyFind

all: signat msg_in $(NAME) msg_out

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

$(P_OBJS)%.o:	$(P_SRCS)%.cpp
	@mkdir -p $(P_OBJS)
	@mkdir -p $(P_OBJS)template
	@$(CC) $(CFLAGS) -I. -c $< -o $@
	@printf "$G■"

msg_in:
	@echo $L"COMPILATION DE EasyFind EN COURS..."$W

msg_out:
	@echo $L"\nEasyFind READY !!!"$W
	
clean:	
	@rm -fr $(P_OBJS)

fclean: clean
	@echo $G"                                    BYE BYE !!!"$W
	@rm -f $(NAME)

signat:
	@echo "$G\n\|/~---~---~---~---~---~---~---~---~---~---~---~---~---~---~---~---~---~\|/"
	@echo " |             ---------------------------------------------             |"
	@echo " |             *--* $LPROJET: CPP08 EX00    PAR: NADESJAR$G *--*             |"
	@echo " |             ---------------------------------------------             |"
	@echo "/|\~---~---~---~---~---~---~---~---~---~---~---~---~---~---~---~---~---~/|\ \n$W"

re: fclean all

L	= $(shell tput -Txterm setaf 5)
R	= $(shell tput -Txterm setaf 1)
G	= $(shell tput -Txterm setaf 2)
C	= $(shell tput -Txterm setaf 6)
W	= $(shell tput -Txterm setaf 7)

.PHONY: all msg_in msg_out clean fclean re signat
