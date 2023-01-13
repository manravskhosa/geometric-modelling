OBJS	= Sphere.o spheretestdriver1.o spheretestdriver2.o
SOURCE	= Sphere.cpp spheretestdriver1.cpp spheretestdriver2.cpp
HEADER	= Sphere.h
OUT	= sphere
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

Sphere.o: Sphere.cpp
	$(CC) $(FLAGS) Sphere.cpp 

spheretestdriver1.o: spheretestdriver1.cpp
	$(CC) $(FLAGS) spheretestdriver1.cpp 

spheretestdriver2.o: spheretestdriver2.cpp
	$(CC) $(FLAGS) spheretestdriver2.cpp 


clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
