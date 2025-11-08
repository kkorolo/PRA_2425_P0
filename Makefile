# .SUFFIXES: .cpp .h .o
# .cpp.o: ; g++ -c $*.cpp
all: BrazoRobotico
BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	g++ -c BrazoRobotico.cpp
BrazoRobotico: BrazoRobotico.o
	g++ -o BrazoRobotico BrazoRobotico.o
clean:
	rm -f *.o BrazoRobotico
test: all
	./BrazoRobotico