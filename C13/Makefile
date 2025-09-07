
# **************************************************************************** #
#                                    Colors                                    #
# **************************************************************************** #


C_STD = \033[0;39m
C_GRAY = \033[0;90m
C_RED = \033[0;91m
C_GREEN = \033[0;92m
C_YELLOW = \033[0;93m
C_BLUE = \033[0;94m
C_MAGENTA = \033[0;95m
C_CYAN = \033[0;96m
C_WHITE = \033[0;97m

# **************************************************************************** #
#                                    Files                                     #
# **************************************************************************** #

NAME			= binary

# **************************************************************************** #
#                                   Path's                                     #
# **************************************************************************** #

BUILD_PATH		= .build/

VPATH			+= ./

# **************************************************************************** #
#                                   Files                                      #
# **************************************************************************** #

FILES			+= main
FILES			+= btree_apply_prefix
FILES			+= btree_apply_infix
FILES			+= btree_apply_suffix
FILES			+= btree_insert_data
FILES			+= btree_create_node
FILES			+= btree_search_item

SRCS			= $(addprefix ./, $(addsuffix .c, $(FILES)))
OBJS			= $(addprefix $(BUILD_PATH), $(addsuffix .o, $(FILES)))

# **************************************************************************** #
#                                  Compiler                                    #
# **************************************************************************** #

CC				= cc
CFLAGS			= -Werror -Wextra -Wall
MAKE			= make --no-print-directory
RM				= rm -rf

# **************************************************************************** #
#                                  Commands                                    #
# **************************************************************************** #

all: start $(NAME)
	@printf "$(C_MAGENTA)===========End [$(NAME)]===========$(C_STD)\n"

start:
	@printf "$(C_MAGENTA)===========Program [$(NAME)]===========$(C_STD)\n"

$(NAME): $(BUILD_PATH) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(BUILD_PATH)%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(C_YELLOW)Compiling $< -> $@$(C_STD)\n";

$(BUILD_PATH):
	@mkdir -p $(BUILD_PATH)

clean:
	@$(RM) $(BUILD_PATH)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
