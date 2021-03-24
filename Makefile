DIROBJ := bin/
DIREXE := exec/
DIRHEA := include/
DIRSRC := src/

CFLAGS := -c -Wall -ansi
LDLIBS := -I$(DIRHEA) -pthread -std=c++11
CC := g++

all : dirs ssooiigle 

dirs:
	mkdir -p $(DIROBJ) $(DIREXE)

ssooiigle: $(DIROBJ)ssooiigle.o 
	$(CC) -o $(DIREXE)$@ $^ $(LDLIBS)

palabra: $(DIROBJ)palabra.o 
	$(CC) -o $(DIREXE)$@ $^ $(LDLIBS)

$(DIROBJ)%.o: $(DIRSRC)%.cpp
	$(CC) $(CFLAGS) $^ -o $@ $(LDLIBS)

run:
	./$(DIREXE)ssooiigle
test:
	./$(DIREXE)ssooiigle "21 LEYES DEL LIDERAZGO - JOHN C. MAXWELL.txt" LEY 2 


clean :
	rm -rf *~ core $(DIROBJ) $(DIREXE)
