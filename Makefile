CXX = g++
CXXFLAGS = -std=c++17 -Wall
TARGET = main
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	-rm -f $(TARGET)
	-rm -f $(OBJ)
	-rm -f **/*.o **/*.exe

.PHONY: all c
