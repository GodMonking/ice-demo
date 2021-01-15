CPP=c++
CXXFLAGS= -g -DICE_CPP11_MAPPING -m64 -O0 -fPIC -std=c++11
INC= -I.
LINK_LIB= -lIce++11 -lpthread

all: helloserver client

HelloServiceI.o:HelloServiceI.cpp HelloServiceI.h
	$(CPP) $(CXXFLAGS) $(INC) -c HelloServiceI.cpp
Client.o:Client.cpp Hello.h
	$(CPP) $(CXXFLAGS) $(INC) -c Client.cpp
Hello.o:Hello.cpp Hello.h
	$(CPP) $(CXXFLAGS) $(INC) -c Hello.cpp
HelloI.o:Hello.cpp Hello.h
	$(CPP) $(CXXFLAGS) $(INC) -c HelloI.cpp

helloserver:HelloServiceI.o Hello.o HelloI.o
	$(CPP) -shared -o libHelloI++11.so HelloServiceI.o Hello.o HelloI.o $(LINK_LIB)
client:Client.o Hello.o
	$(CPP) -o client Client.o Hello.o $(LINK_LIB)

clean:
	rm *.o libHelloI++11.so client -rf
