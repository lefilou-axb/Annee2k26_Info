/* Fichier tstPileDynamique.c - test de manipulation pour les PILEs dynamiques    */
/* Affiche des OK si le test est correct et NOK sinon                             */
/**********************************************************************************/
#include <stdio.h>
#include "PileDynamique.h"

int main()
{PILE p ; int e ; int i ;

p = init_PILE() ;
printf("OK (1)\n") ;

if (PILE_estVide(p)) printf("OK (2)\n") ; else printf("\t NOK (2)\n") ;

p = emPILE(p,1)  ;
printf("OK (3)\n") ;
if (!PILE_estVide(p)) printf("OK (4)\n") ; else printf("\t NOK (4)\n") ;

p = emPILE(p,2)  ;
printf("OK (5)\n") ;
if (!PILE_estVide(p)) printf("OK (6)\n") ; else printf("\t NOK (6)\n") ;

p = emPILE(p,3)  ;
printf("OK (7)\n") ;
if (!PILE_estVide(p)) printf("OK (8)\n") ; else printf("\t NOK (8)\n") ;

p = dePILE(p,&e)  ;
printf("OK (9)\n") ;
if (e==3) printf("OK (10)\n") ; else printf("\t NOK (10)\n") ;
if (!PILE_estVide(p)) printf("OK (11)\n") ; else printf("\t NOK (11)\n") ;

p = dePILE(p,&e)  ;
printf("OK (12)\n") ;
if (e==2) printf("OK (13)\n") ; else printf("\t NOK (13)\n") ;
if (!PILE_estVide(p)) printf("OK (14)\n") ; else printf("\t NOK (14)\n") ;

p = dePILE(p,&e)  ;
printf("OK (15\n") ;
if (e==1) printf("OK (16)\n") ; else printf("\t NOK (16)\n") ;
if (PILE_estVide(p)) printf("OK (17)\n") ; else printf("\t NOK (17)\n") ;

p = dePILE(p,&e)  ;
printf("OK (18)\n") ;
if (PILE_estVide(p)) printf("OK (19)\n") ; else printf("\t NOK (19)\n") ;

for (i = 0 ; i < 1000; i++)
  p = emPILE(p,i) ;
printf("OK (20)\n") ;

p = emPILE(p,1000) ;
printf("OK (21)\n") ;

if (!PILE_estVide(p)) printf("OK (22)\n") ; else printf("\t NOK (22)\n") ;

p = dePILE(p,&e)  ;
printf("OK (23)\n") ;
if (!PILE_estVide(p)) printf("OK (24)\n") ; else printf("\t NOK (24)\n") ;
p = emPILE(p,1000) ;
printf("OK (25)\n") ;


}
