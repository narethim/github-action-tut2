CXX = g++
INCLUDES= -I./
CXXFLAGS = -g $(INCLUDES)
LINKFLAGS= 

OBJM = basic_math.o CBasicMath.o CBasicMathFloat.o

basic_math: $(OBJM)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJM) $(LINKFLAGS) $(LINKFLAGSLOG4) $(LIBLOG)

# Default compile

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm *.o basic_math 
	
