CPP=c++
CXXFLAGS=-DICE_CPP11_MAPPING -std=c++11 -g
INC= -I.
LINK_LIB= -lIce++11 -lpthread -lIceGrid++11 -lGlacier2++11

all: server client

Server.o: Server.cpp 
	$(CPP) $(CXXFLAGS) $(INC) -c Server.cpp
Client.o: Client.cpp
	$(CPP) $(CXXFLAGS) $(INC) -c Client.cpp
Printer.o:Printer.cpp
	$(CPP) $(CXXFLAGS) $(INC) -c Printer.cpp

server:Server.o Printer.o
	$(CPP) -o server Server.o Printer.o $(LINK_LIB)
client:Client.o Printer.o
	$(CPP) -o client Client.o Printer.o $(LINK_LIB)

clean:
	rm *.o server client -rf
