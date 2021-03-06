#ifndef SIMULATEUR_H
#define SIMULATEUR_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

//struct
typedef struct station
{
	int id;					//position initiale sur l'anneau
	int file;				//paquets en attente
	int temps_attente;		//temps perdu
	int delta;				//délaire avant de renvoyer un packet
	int next_packet;
	int nombre_paquets;		//Nombre de paquets envoyé
	int haut;
	int bas;
	int manchon_iteration;
}station;


#define taille_anneau 149

//variables globales

int nombre_paquets; 				//paquets envoyés
int paquet_actif; 					//paquets présents
double tableau_proba[109];			//f° repartition
int anneau[taille_anneau];			//l'anneau

int longueur_manchon;				//longueur manchon pour cond arrêt
double haut_manchon;					
double bas_manchon;					

//fonctions

void insertion_paquet(station *s);
void arrivee_paquet(station *s);
void suppression_paquet(station s);

#endif
