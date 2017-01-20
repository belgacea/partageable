
#include "Composant3.h"

// declaration des fonctions internes
int soustraction_interne(int a1, int a2);



int composant3(int p1, int p2)
{
	return soustraction_interne(p1, p2);
}

int soustraction_interne(int a1, int a2)
{
	return a1 - a2;
}