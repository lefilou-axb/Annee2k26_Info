#include <stdio.h>
#include "Element.h"

int main(){
	Element elm1;
	Element elm2;
	
	saisirElement(&elm1);
	afficherElement(elm1);
	affecterElement(&elm2, elm1);
	afficherElement(elm2);
	
	return 0;
}
