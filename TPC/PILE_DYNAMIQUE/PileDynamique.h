#include "Element.h"

typedef struct cellule { 
	Element elmt;
	struct cellule * cel_suivante;
}

typedef pile * cellule;


PILE init_PILE();

void affiche_PILE(pile ma_Pile);

int PILE_estVide(pile ma_Pile);

PILE emPILE(pile ma_Pile, Element element);

PILE dePILE(pile ma_Pile, Element * element);
