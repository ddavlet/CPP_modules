CC := c++
CPPFLAGS := -Wall -Wextra -Werror -std=c++98 -g -Wno-shadow
TARGET := ./ex03
INCLUDES :=
RM := rm -f
SRC_DIR :=
SOURCE := main.cpp AMateria.cpp Ice.cpp Cure.cpp MateriaSource.cpp
SRC := $(addprefix $(SRC_DIR), $(SOURCE))
OBJ := $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(TARGET)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(TARGET)

re: fclean all

.PHONY: all clean fclean re
