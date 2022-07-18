TARGET = svc.exe

SRC_DIR = .\src
OBJ_DIR = .\obj

SRC_NAME =	src\main.c src\options.c
OBJ_NAME =	obj\main.obj obj\options.obj

CC = CL
# CFLAGS = /Wall /WX

INC = /Iinc

$(TARGET) :
	mkdir $(OBJ_DIR)
	@echo "Waahwah 0"
	$(CC) $(CFLAGS) $(INC) /c $(SRC_DIR)\options.c /Fo:$(OBJ_DIR)\options.obj
	@echo "Waahwah 1"
	$(CC) $(CFLAGS) $(INC) /c $(SRC_DIR)\main.c /Fo:$(OBJ_DIR)\main.obj
	@echo "Waahwah 2"
	$(CC) $(CFLAGS) $(INC) $(OBJ_NAME) /Fo:$(TARGET)

all : $(TARGET)

clean :
	del $(OBJ_DIR) -Force -Recurse 2>$null

fclean : clean
	del $(TARGET) -Force -Recurse 2>$null

re : fclean all