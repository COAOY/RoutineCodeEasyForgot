# Define required macros here
CFLAGS = -std=c++0x -c -O3
OBJS = main.o class1.o
CPPS = main.cpp class1.cpp
LIBS =
TARGET = main
CC = g++
NAME = hw
NAME2 = hw.exe
ALL = main exe clean 

ALL: $(ALL)

main: $(OBJS)
	@ $(CC) -o $(NAME)  $(OBJS)
main.o:  $(CPPS)
	@ $(CC) $(CFLAGS) $(CPPS)
exe:
	@ $(NAME2)
clean:
	@ del *.o
	@ del $(NAME2)