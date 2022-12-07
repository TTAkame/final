CC = g++ -std=c++14
CFLAGS = -g -I/Users/tt/vcpkg/installed/arm64-osx/include
LDFLAGS = -L/opt/homebrew/lib -ljsoncpp

INC	=	ecs36b_Common.h
INC_CL	=	GPS.h JvTime.h Speed.h
OBJ	=	GPS.o JvTime.o Speed.o

all: test

ecs36b_JSON.o:		ecs36b_JSON.cpp $(INC)
	$(CC) -c $(CFLAGS) ecs36b_JSON.cpp

GPS.o:		GPS.cpp GPS.h $(INC)
	$(CC) -c GPS.cpp $(CFLAGS)

JvTime.o:	JvTime.cpp JvTime.h $(INC)
	$(CC) -c JvTime.cpp $(CFLAGS)

Speed.o:	Speed.cpp Speed.h $(INC)
	$(CC) -c Speed.cpp $(CFLAGS)
	
main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp
	
test:	ecs36b_JSON.o main.o $(OBJ)
	$(CC) -o test main.o ecs36b_JSON.o $(OBJ) $(LDFLAGS)
clean:
	rm -f *.o *~



