INCLUDE_DIR = ../include
SRC_DIR = ../src
app:
	mkdir -p build; cd build; make -f ../Makefile exe
exe:	main.o	singleton.o
	g++ -std=c++11 -o app main.o singleton.o
main.o:	$(SRC_DIR)/main.cpp
	g++ -std=c++11 -c $(SRC_DIR)/main.cpp -I$(INCLUDE_DIR)
singleton.o:	$(SRC_DIR)/singleton.cpp
	g++ -std=c++11 -c $(SRC_DIR)/singleton.cpp -I$(INCLUDE_DIR)
clean:
	rm -rf build
