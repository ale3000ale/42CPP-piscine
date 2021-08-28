# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/13 15:26:08 by amarcell          #+#    #+#              #
#    Updated: 2021/08/17 20:45:19 by alexmarcell      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Reset
COLOR_OFF	="\033[0m"       # Text Reset

# Regular Colors
BLACK		=		"\033[0;30m"        # Black
RED			=		"\033[0;31m"          # Red
GREEN		=		"\033[0;32m"        # Green
YELLOW		=		"\033[0;33m"       # Yellow
BLUE		=		"\033[0;34m"         # Blue
PURPLE		=		"\033[0;35m"       # Purple
CYAN		=		"\033[0;36m"         # Cyan
WHITE		=		"\033[0;37m"        # White

# Bold
BBLACK		=		"\033[1;30m       # Black
BRED		=		"\033[1;31m         # Red
BGREEN		=		"\033[1;32m"       # Green
BYELLOW		=		"\033[1;33m"      # Yellow
BBLUE		=		"\033[1;34m"        # Blue
BPURPLE		=		"\033[1;35m"      # Purple
BCYAN		=		"\033[1;36m"        # Cyan
BWHITE		=		"\033[1;37m"       # White

# Underline
UBLACK		=		"\033[4;30m"       # Black
URED		=		"\033[4;31m"         # Red
UGREEN		=		"\033[4;32m"       # Green
UYELLOW		=		"\033[4;33m"      # Yellow
UBLUE		=		"\033[4;34m"        # Blue
UPURPLE		=		"\033[4;35m"      # Purple
UCYAN		=		"\033[4;36m"        # Cyan
UWHITE		=		"\033[4;37m"       # White

#---------------------SRCS---------------------#

OBJS_DIR	=		objs

HPPS		=		

SRCS		= 		main.cpp Weapon.cpp HumanA.cpp  HumanB.cpp
					
				
#---------------------COMPILER---------------------#

NAME		=		UV

CPP 		= 		@ clang++

CFLAGS		=		-Wall -Wextra -Werror 

OBJS		=		$(patsubst %.cpp, ${OBJS_DIR}/%.o, ${SRCS})

$(OBJS_DIR)/%.o :	./%.cpp
			@ mkdir -p $(OBJS_DIR)
			$(CPP) $(CFLAGS) -c $< -o $@

#---------------------COMMANDS---------------------#

all:		$(NAME)

$(NAME):	$(OBJS)
			@ $(CPP) $(OBJS) -o $@
			@ echo $(BGREEN) "$(NAME) compiled successfully ✅" $(COLOR_OFF)

clean:
			@ rm -f $(OBJS)
			@ echo $(BWHITE) "$(NAME) .o files are successfull deleted 📃➡ 🗑" $(COLOR_OFF)

fclean:		clean
			@ rm -rf $(OBJS_DIR)
			@ rm -f $(NAME)
			@ echo $(BWHITE) "$(NAME) file is successfull deleted 🗂 ➡🗑" $(COLOR_OFF)

re:			fclean all
			@ echo $(BGREEN) "$(NAME) recompiled successfully ♻️ ✅" $(COLOR_OFF)

.PHONY: 	all clean fclean re norme 