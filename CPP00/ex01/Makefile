CC := c++
CPPFLAGS := -Wall -Wextra -Werror -g -std=c++98
TARGET := ./phonebook

INCLUDES :=
RM := rm -f
SRC_DIR :=
SOURCE := Contact.cpp PhoneBook.cpp main.cpp
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
