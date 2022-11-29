# Makefile for HW3

CC = g++ -std=c++14

CFLAGS = -g -I/opt/homebrew/Cellar/jsoncpp/1.9.5/include/ -I/opt/homebrew/Cellar/libjson-rpc-cpp/1.4.1_1/include -I/opt/homebrew/Cellar/libmicrohttpd/0.9.75/include

LDFLAGS =  -L/opt/homebrew/lib/ -ljsoncpp -lmicrohttpd -ljsonrpccpp-common -ljsonrpccpp-server -ljsonrpccpp-client -lcurl

# rules.
all: LittleRedRidingHood

Place.o:		Place.cpp Place.h
	$(CC) -c $(CFLAGS) Place.cpp

JvTime.o:	JvTime.cpp JvTime.h
	$(CC) -c $(CFLAGS) JvTime.cpp

r_record.o: r_record.cpp r_record.h
	$(CC) -c $(CFLAGS) r_record.cpp

Person.o:	Person.cpp Person.h
	$(CC) -c $(CFLAGS) Person.cpp

Thing.o:	Thing.cpp Thing.h
	$(CC) -c $(CFLAGS) Thing.cpp

ecs36b_JSON.o:	ecs36b_JSON.cpp ecs36b_Common.h
	$(CC) -c $(CFLAGS) ecs36b_JSON.cpp

tet.o:	tet.cpp Place.h Thing.h Person.h JvTime.h Record.h ecs36b_Common.h
	$(CC) -c $(CFLAGS) tet.cpp

LittleRedRidingHood:		Place.o tet.o Thing.o Person.o JvTime.o ecs36b_JSON.o r_record.o
	g++ -std=c++14 tet.o Place.o Thing.o Person.o JvTime.o ecs36b_JSON.o r_record.o -o LittleRedRidingHood $(LDFLAGS)

clean:
	rm -f *.o *~ core LittleRedRidingHood

