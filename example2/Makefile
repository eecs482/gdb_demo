CXXFLAGS := -ggdb -O0

main.exe: $(patsubst %.cpp,%.o,$(wildcard *.cpp))
	$(CXX) $(CXXFLAGS) $^ -o $@
bear: clean
	bear -- $(MAKE)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<
clean:
	-rm *.exe *.o
.PHONY: bear clean
