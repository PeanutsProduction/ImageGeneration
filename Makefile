CXX      = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -I include

SRC      = src/main.cpp \
           src/canvas.cpp \
           src/Shapes/circle.cpp

OUT      = build/renderer

all:
	mkdir -p build
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

clean:
	rm -rf build
