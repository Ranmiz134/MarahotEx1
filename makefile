CC=gcc
AR=ar 
OBJECTS_MAIN=main.o
OBJECTS_LOOP=basicClassification.o advancedClassificationLoop.o
OBJECTS_REC=basicClassification.o advancedClassificationRecursion.o 

FLAGS= -Wall -g

all: libclassloops.a libclassrec.a libclassrec.so libclassloops.so mains maindloop maindrec
loops: libclassloops.a 
recursives: libclassrec.a 
loopd: libclassloops.so
recursived: libclassrec.so
libclassloops.a: $(OBJECTS_LOOP)
	$(AR) -rcs libclassloops.a $(OBJECTS_LOOP)
libclassrec.a: $(OBJECTS_REC)
	$(AR) -rcs libclassrec.a $(OBJECTS_REC)
libclassrec.so:$(OBJECTS_REC)
	$(CC) -shared -o libclassrec.so $(OBJECTS_REC)
libclassloops.so: $(OBJECTS_LOOP)
	$(CC) -shared -o libclassloops.so $(OBJECTS_LOOP)
mains: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a
maindloop: $(OBJECTS_MAIN) 
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so
maindrec: $(OBJECTS_MAIN) 
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so
basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c -fPIC -o basicClassification.o basicClassification.c 
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c -fPIC -o advancedClassificationLoop.o advancedClassificationLoop.c
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c -fPIC -o advancedClassificationRecursion.o advancedClassificationRecursion.c 
main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c -fPIC -o main.o main.c 

.PHONY: clean all

make clean:
	rm -f *.o *.a *.so mains maindloop maindrec
