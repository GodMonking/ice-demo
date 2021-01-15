CPP=c++
CXXFLAGS= -g -DICE_CPP11_MAPPING -m64 -O0 -fPIC -std=c++11
ICE_PATH= ../slice
INC= -I. 
LINK_LIB= -lIce++11 -lpthread

all: complice-slice helloserver client

complice-slice:
	slice2cpp $(ICE_PATH)/Hello.ice

HelloServiceI.o:
	$(CPP) $(CXXFLAGS) $(INC) -c HelloServiceI.cpp
Client.o:
	$(CPP) $(CXXFLAGS) $(INC) -c Client.cpp
Hello.o:
	$(CPP) $(CXXFLAGS) $(INC) -c Hello.cpp
HelloI.o:
	$(CPP) $(CXXFLAGS) $(INC) -c HelloI.cpp

helloserver:HelloServiceI.o Hello.o HelloI.o
	$(CPP) -shared -o libHelloI++11.so HelloServiceI.o Hello.o HelloI.o $(LINK_LIB)
client:Client.o Hello.o
	$(CPP) -o client Client.o Hello.o $(LINK_LIB)

install-lib:
	rm ../lib -rf && mkdir ../lib
	cp libHelloI++11.so ../lib

clean:
	rm *.o libHelloI++11.so client -rf
