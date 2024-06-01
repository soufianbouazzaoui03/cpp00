NAME = megaphone
C++ = c++
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : megaphone.cpp
	$(C++) $(CFLAGS) $< -o $@

clean :
	rm -rf megaphone.o

fclean : clean
	rm -rf megaphone

re : fclean all