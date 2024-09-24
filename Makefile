CXX ?= clang++
CXXFLAGS := -Og -fsanitize=address -fsanitize=undefined -std=c++17

SRCS := $(wildcard *.cpp)
OBJS := $(SRCS:%.cpp=o/%.o)
OUT := silly

o/%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $(CWD)$@ -c

silly:
	mkdir -p o/
	$(MAKE) compile

compile: $(OBJS)
	$(CXX) $(OBJS) $(CXXFLAGS) -o $(OUT)

clean:
	rm -rf ./o ./$(OUT)

install: silly
	install -m 755 $(OUT) /usr/local/bin/$(OUT)

.PHONY: silly compile clean install
