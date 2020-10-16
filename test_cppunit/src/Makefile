CXX = g++
CXXFLAGS = -g 
LINKFLAGS= -lcppunit

INCS = -I./ -I../../src 

OBJS = ../../src/CBasicMath.o ../../src/CBasicMathFloat.o main_test_all.o BasicMath_Test.o BasicMathFloat_Test.o 

testAll: $(OBJS)
	$(CXX)  -o $@   $(OBJS) $(INCS) $(LINKFLAGS) 

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCS)

clean:
	rm testAll *.o *.xml
	

