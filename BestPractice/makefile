CPP=c++
CXXFLAGS= -g -DICE_CPP11_MAPPING -m64 -O0 -fPIC -std=c++11
INC= -I.
LINK_LIB= -lIce++11 -lpthread

all: helloserver client

queryPersonServiceI.o:queryPersonServiceI.cpp queryPersonServiceI.h
	$(CPP) $(CXXFLAGS) $(INC) -c queryPersonServiceI.cpp
Client.o:Client.cpp queryPerson.h
	$(CPP) $(CXXFLAGS) $(INC) -c Client.cpp
queryPerson.o:queryPerson.cpp queryPerson.h
	$(CPP) $(CXXFLAGS) $(INC) -c queryPerson.cpp
queryPersonI.o:queryPersonI.cpp queryPersonI.h
	$(CPP) $(CXXFLAGS) $(INC) -c queryPersonI.cpp

helloserver:queryPersonServiceI.o queryPerson.o queryPersonI.o
	$(CPP) -shared -o libqueryPersonI++11.so queryPersonServiceI.o queryPerson.o queryPersonI.o $(LINK_LIB)
client:Client.o queryPerson.o
	$(CPP) -o client Client.o queryPerson.o $(LINK_LIB)

clean:
	rm *.o libqueryPersonI++11.so client -rf
