# Variables de compilación
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = ./custom-libft
LIBFT = $(LIBFT_DIR)/libft.a
SRCS = srcs/main.c srcs/algoritmo/index.c srcs/algoritmo/order_in_b.c srcs/algoritmo/sort_stacks.c \
       srcs/input/free_array.c srcs/input/get_len.c srcs/input/is_dup.c srcs/input/is_in_range.c \
       srcs/input/is_numeric.c srcs/input/validate_input.c srcs/moves/pa.c srcs/moves/pb.c srcs/moves/ra.c \
       srcs/moves/rb.c srcs/moves/rr.c srcs/moves/rra.c srcs/moves/rrb.c srcs/moves/rrr.c srcs/moves/sa.c \
       srcs/moves/sb.c srcs/moves/ss.c srcs/atol.c srcs/ft_split.c srcs/init_stack_a.c srcs/stack_utils.c
OBJS = $(SRCS:.c=.o)

# El nombre del ejecutable
NAME = push_swap

# Regla principal
all: $(LIBFT) $(NAME)

# Compilar la librería libft
$(LIBFT):
	make -C $(LIBFT_DIR)

# Compilar el ejecutable
$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT)

# Compilación de los archivos .c a .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar los archivos objeto
clean:
	rm -f $(OBJS)
	make -C $(LIBFT_DIR) clean

# Limpiar todo: archivos objeto y la librería
fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

# Volver a compilar desde cero
re: fclean all

.PHONY: all clean fclean re
