# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/23 13:22:35 by nadesjar          #+#    #+#              #
#    Updated: 2023/01/03 11:28:52 by nadesjar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

P_OBJS 		= ./objs/
P_SRCS		= ./srcs/
P_CLASS		= ./srcs/class/
P_ELSE		= ./srcs/else/

FILES			= $(P_SRCS)main.cpp \
				$(P_CLASS)Zombie.cpp \
				$(P_ELSE)newZombie.cpp $(P_ELSE)randomChump.cpp \

OBJS			= $(patsubst $(P_SRCS)%.cpp, $(P_OBJS)%.o, $(FILES))

CC				= c++

CFLAGS			= -Wall -Werror -Wextra -std=c++98

NAME			= BrainZz00

all: signat $(NAME)

$(NAME): msg_in $(OBJS) msg_out
	@$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

$(P_OBJS)%.o:	$(P_SRCS)%.cpp
	@mkdir -p $(P_OBJS)
	@mkdir -p $(P_OBJS)class
	@mkdir -p $(P_OBJS)else
	@$(CC) $(CFLAGS) -I. -c $< -o $@
	@printf "$G■"

msg_in:
	@echo $L"COMPILATION DE BrainZz EN COURS..."$W

msg_out:
	@echo $L"\nBrainZz READY !!!"$W
	
clean:	
	@rm -fr $(P_OBJS)

fclean: clean
	@echo $G"                                    BYE BYE !!!"$W
	@rm -f $(NAME)

signat:
	@echo "$G\n\|/~---~---~---~---~---~---~---~---~---~---~---~---~---~---~---~---~---~\|/"
	@echo " |             ---------------------------------------------             |"
	@echo " |             *--* $LPROJET: CPP01 EX00    PAR: NADESJAR$G *--*             |"
	@echo " |             ---------------------------------------------             |"
	@echo "/|\~---~---~---~---~---~---~---~---~---~---~---~---~---~---~---~---~---~/|\ \n$W"

re: fclean all

L	= $(shell tput -Txterm setaf 5)
R	= $(shell tput -Txterm setaf 1)
G	= $(shell tput -Txterm setaf 2)
C	= $(shell tput -Txterm setaf 6)
W	= $(shell tput -Txterm setaf 7)

.PHONY: all msg_in msg_out clean fclean re signat
