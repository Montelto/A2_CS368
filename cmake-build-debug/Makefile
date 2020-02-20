# A2_368
# Joseph McFarland
# 9072511679
# mcfarland3@wisc.edu

CXX = g++
CXXFLAGS = -Wall -g

MathLib.o: BookDB.cpp BookDB.h
	$(CXX) $(CXXFLAGS) -c BookDB.cpp

demo.o: demo.cpp BookDB.h
	$(CXX) $(CXXFLAGS) -c demo.cpp

clean:
	-rm BookDB.o
	-rm demo.o
	-rm BookDB

BookDB: demo.o BookDB.o
	$(CXX) $(CXXFLAGS) -o BookDB demo.o BookDB.o