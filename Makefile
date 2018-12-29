
CXX = C:/MinGW/bin/g++.exe
CXXFLAGS = -ID:/C++VsCode/win32/libxml2-2.7.8.win32/libxml2-2.7.8.win32/include/ -g -Wall 

OBJS = zXMLParser.o
LIB_ZEBRA = libzebra.a
SRCS = $(OBJS:%.o=%.cpp)
DEPS = $(OBJS:%.o=.%.d)

all: $(LIB_ZEBRA)

$(OBJS): %.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

$(LIB_ZEBRA): $(OBJS) 
	@rm -rf $(LIB_ZEBRA)
	@ar cru $(LIB_ZEBRA) $(OBJS)
	@ranlib $(LIB_ZEBRA)

clean:
	@rm -rf $(OBJS) $(LIB_ZEBRA) core *~

