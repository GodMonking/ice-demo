CPP=c++
CXXFLAGS= -g -DICE_CPP11_MAPPING -m64 -O0 -fPIC -std=c++11
INC= -I.
LINK_LIB= -lIce++11 -lpthread
ICE_PATH=../slice

all: complice-slice  client

complice-slice:
	slice2cpp $(ICE_PATH)/Hello.ice

Client.o:Client.cpp Hello.h
	$(CPP) $(CXXFLAGS) $(INC) -c Client.cpp
Hello.o:Hello.cpp Hello.h
	$(CPP) $(CXXFLAGS) $(INC) -c Hello.cpp

client:Client.o Hello.o
	$(CPP) -o client Client.o Hello.o $(LINK_LIB)

clean:
	rm *.o libHelloI++11.so client -rf Hello.*
