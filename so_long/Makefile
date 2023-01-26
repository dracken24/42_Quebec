# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/11 12:00:19 by nadesjar          #+#    #+#              #
#    Updated: 2022/08/15 12:36:48 by nadesjar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIGHT_GREEN		=$(shell tput -Txterm setaf 2)
LILAS			=$(shell tput -Txterm setaf 5)
RESET			="\033[0m"

PATH_OBJS 		= ./objs/
PATH_SRC		= ./src/
PATH_INIT		= ./src/init/
PATH_KILL		= ./src/kill/
PATH_MOVE		= ./src/move/
PATH_UTILS		= ./src/utils/
PATH_GNL		= ./src/get_next_line/

PATH_OBJS_B 	= ./objs_bonus/
PATH_SRC_B		= ./src_bonus/
PATH_INIT_B		= ./src_bonus/init/
PATH_KILL_B		= ./src_bonus/kill/
PATH_MOVE_B		= ./src_bonus/move/
PATH_UTILS_B	= ./src_bonus/utils/
PATH_GNL_B		= ./src_bonus/get_next_line/

FILES			= $(PATH_SRC)so_long.c \
				$(PATH_GNL)get_next_line_bonus.c $(PATH_GNL)get_next_line_utils_bonus.c \
				$(PATH_UTILS)start.c $(PATH_UTILS)utils.c $(PATH_UTILS)utils_02.c \
				$(PATH_INIT)print_textures.c $(PATH_INIT)init_textures_p1.c \
				$(PATH_MOVE)key_pressed.c $(PATH_MOVE)move_p1.c \
				$(PATH_KILL)kill.c \

FILES_BONUS	 	= $(PATH_SRC_B)so_long.c \
				$(PATH_GNL_B)get_next_line_bonus.c $(PATH_GNL_B)get_next_line_utils_bonus.c \
				$(PATH_UTILS_B)start.c $(PATH_UTILS_B)utils.c $(PATH_UTILS_B)utils_02.c \
				$(PATH_INIT_B)print_textures.c $(PATH_INIT_B)init_textures_p1.c  $(PATH_INIT_B)init_enemy.c \
				$(PATH_INIT_B)init_textures_enemy.c $(PATH_INIT_B)init_p1_anim.c $(PATH_INIT_B)init_enemy_anim.c \
				$(PATH_MOVE_B)key_pressed.c $(PATH_MOVE_B)move_p1.c \
				$(PATH_MOVE_B)move_p1_anim.c $(PATH_MOVE_B)move_enemy_anim.c \
				$(PATH_KILL_B)kill.c $(PATH_KILL_B)destroy_imgs.c \

OBJS 			= $(patsubst $(PATH_SRC)%.c, $(PATH_OBJS)%.o, $(FILES)) \

OBJS_B			= $(patsubst $(PATH_SRC_B)%.c, $(PATH_OBJS_B)%.o, $(FILES_BONUS)) \

CC 				= gcc
FLAGS 			= -Wall -Wextra -Werror
MLXFLAG_MAC 	= -framework OpenGl -framework Cocoa
MLXFLAG_LINUX	= -lbsd -lXext -lX11

LIBX_A_MAC 		= libs/minilibx_opengl/libmlx.a
LIBX_A_LINUX 	= libs/minilibx-linux/libmlx.a

NAME 			= so_long
NAME_B			= so_long_b

PRINTF			= make_lib
PRINTF_A		= ft_printf/libftprintf.a
LIBFT_A			= ft_printf/libft/libft.a

all: $(PRINTF) $(NAME)

$(NAME): start $(OBJS) end
	@cp $(LIBX_A_MAC) $(NAME)
	@gcc $(NAME) $(OBJS) $(LIBX_A_MAC) $(PRINTF_A) $(LIBFT_A) $(FLAGS) $(MLXFLAG_MAC) -o so_long

$(PATH_OBJS)%.o:	$(PATH_SRC)%.c
	@mkdir -p $(PATH_OBJS)
	@mkdir -p $(PATH_OBJS)init
	@mkdir -p $(PATH_OBJS)kill
	@mkdir -p $(PATH_OBJS)move
	@mkdir -p $(PATH_OBJS)utils
	@mkdir -p $(PATH_OBJS)get_next_line
	@$(CC) $(FLAGS) -I. -c $< -o $@
	@printf "$(LIGHT_GREEN)■"

b:$(NAME_B)

$(NAME_B): start_b $(OBJS_B) end
	@cp $(LIBX_A_MAC) $(NAME_B)
	@gcc $(NAME_B) $(OBJS_B) $(LIBX_A_MAC) $(PRINTF_A) $(LIBFT_A) $(FLAGS) $(MLXFLAG_MAC) -o so_long_b

$(PATH_OBJS_B)%.o:	$(PATH_SRC_B)%.c
	@mkdir -p $(PATH_OBJS_B)
	@mkdir -p $(PATH_OBJS_B)init
	@mkdir -p $(PATH_OBJS_B)kill
	@mkdir -p $(PATH_OBJS_B)move
	@mkdir -p $(PATH_OBJS_B)utils
	@mkdir -p $(PATH_OBJS_B)get_next_line
	@$(CC) $(FLAGS) -I. -c $< -o $@
	@printf "$(LIGHT_GREEN)■"

start:
	@echo $(LILAS)"COMPILE MOI CE SO_LONG LA..."$(RESET)

start_b:
	@echo $(LILAS)"COMPILATION DE SO_LONG BONUS"$(RESET)

end:
	@echo $(LIGHT_GREEN)"\nPROGRAMME PRET !!"$(RESET)

make_lib:
	@$(MAKE) -C ./ft_printf
# $(MAKE) -C ./libs/minilibx_opengl

clean:
	@$(MAKE) fclean -C ./ft_printf
	@rm -f $(OBJS)
	@rm -fr ./objs ./objs_bonus
	@echo $(LIGHT_GREEN)"BYE BYE"$(RESET)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(NAME_B)

re:	fclean all

.Phony: all make_lib start start_b end b clean fclean re
