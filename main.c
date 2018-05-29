/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Haupt Datei der Program
 *
 * =====================================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "menu.h"
#include "lib.h"
#include "ships.h"
#include "datastructure.h"
#define SLEEPTIME 3

int main(){
	int input;
	char *menuTitel = "Verwaltung der Schiffe";
	char *menuItems[] = {
		"Neues Shiff hinzufuegen",
		"Vorhandenes Shiff loeschen",
		"Alle Shiffe auflisten",
		"Sortieren",
		"Shiff suchen",
		"Geschwindigkeit",
		"Luftlinie",
		"Beenden"};



	Ship* shipone = NULL; //Kopf der Liste herstellen

	gotoXY(1,21);
 	while ((input = getMenu(menuTitel, menuItems, 8)) != 0){ ;
		switch(input){
			case 1: shipone = appendShip(shipone); break; //dummyFunc(); sleep(2); //shiptwo = createShip();  break;
			case 2: dummyFunc(SLEEPTIME); break;//shipone = deleteShip(shipone); break;
			case 3: dummyFunc(SLEEPTIME); break;//showAll(shipone); sleep(SLEEPTIME); break;
			case 4: dummyFunc(SLEEPTIME); break;//shipone = sortShips(shipone); break; //shipone = appendShip(shipone);  break;
			case 5: dummyFunc(SLEEPTIME); break;//findShip(shipone); sleep(SLEEPTIME); break; //showAll(shipone); sleep(3); break;
			case 6: dummyFunc(SLEEPTIME); break;//compareSpeed(shipone); sleep(SLEEPTIME); break;
			case 7: dummyFunc(SLEEPTIME); break;//showDistance(shipone); sleep(SLEEPTIME); break;
			}
	}

	return EXIT_SUCCESS;
}
