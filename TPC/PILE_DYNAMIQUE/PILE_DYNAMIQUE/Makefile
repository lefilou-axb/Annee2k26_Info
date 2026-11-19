Element.o: Element.c Element.h
	gcc -c Element.c -o Element.o  -Wall 

tstElement.o: tstElement.c Element.h
	gcc -o tstElement.o -c tstElement.c -Wall 
	
mon_Element.out: Element.o tstElement.o
	gcc -o mon_Element.out Element.o tstElement.o
	

