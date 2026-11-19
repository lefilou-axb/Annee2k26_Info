#include <stdio.h>
#include "Element.h"

void saisirElement(Element * element){
	scanf("%d", element);
}

void afficherElement(Element element){
	printf("Element de valeur : %d\n", element);
}

void affecterElement(Element * dest, Element source){
	*dest = source;
	/*printf("Nouvel élement de valeur : %d\n", element1);*/
}
