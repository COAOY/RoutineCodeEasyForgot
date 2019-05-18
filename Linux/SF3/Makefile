# Define required macros here
CFLAGS = -std=c++0x -O2
# Write down the file you need in compile
CLASSF = main class1
OBJS = $(addsuffix .o, $(CLASSF))
CC = g++
.F = hw


ALL: $(OBJS)
	@ $(CC) -o $(.F) $^
$(OBJS):%.o:%.cpp
	@ $(CC) -c $(CFLAGS) $< 

ex: ALL
	sh sim.sh ex

.PHONY: clean ALL ex
clean:
	@ -rm -f *.o $(.F)