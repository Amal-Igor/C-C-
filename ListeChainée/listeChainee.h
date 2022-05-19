#pragma once
#include <stdlib.h>
#include <stdio.h>

struct element
{
	struct element* pAvant; //8o
	int valeur; //4o
	struct element* pApres; //8o
};
typedef struct element* pElement;

struct listeInt
{
	pElement premierElement;
	int tailleListe;
};
typedef struct listeInt* pListeInt;

/**
 * @brief Permet d'initialiser une liste chainée
 * @return un pointeur vers une liste
*/
pListeInt initListe();

/**
 * @brief Permet d'ajouter une valeur à la fin de la liste
 * @param liste La liste correspond à celle dans laquelle on veut insérer un élément
 * @param valeur La valeur que l'on souhaite ajouter
*/
void ajouterInt(pListeInt liste, int valeur);

/**
 * @brief Permet de retrouver la valeur à l'index donnée
 * @param liste Liste sur laquelle on souhaite chercher un élément
 * @param pos L'index à laquelle on souhaite récupérer la valeur
 * @return Retourne la valeur à l'index pos dans la liste
*/
int valeur(pListeInt liste, int pos);

/**
 * @brief Permet d'afficher les éléments de la liste
 * @param liste La liste dont on veut afficher les valeurs
*/
void afficher(pListeInt liste);

/**
 * @brief Permet d'ajouter une valeur au début de la liste
 * @param liste La liste sur laquelle on veut faire l'opération
 * @param valeur La valeur que l'on veut assigner
*/
void ajouterDebutInt(pListeInt liste, int valeur);



/**
 * @brief Permet de supprimer un élément à l'index pos
 * @param liste la liste dans laquelle on veut supprimer une valeur
 * @param pos L'index auquel on veut supprimer la valeur
*/
void supprInt(pListeInt liste, int pos);

/**
 * @brief Permet de supprimer la liste en libérant l'espace allouer à chacun des éléments
 * @param liste La liste que l'on souhaite supprimer
*/
void supprliste(pListeInt liste);


/**
 * @brief Permet de retrouver une valeur dans une liste
 * @param valeur La valeur que l'on souhaite chercher
 * @param liste La liste dans laquelle on recherche la valeur
 * @return Renvoit l'index auquel la valeur à été trouvé. Ne renvoit rien si on aucun élément ne correspond à la valeur recherché
*/
int findByValue(int valeur, pListeInt liste);

/**
 * @brief Cette fonction permet d'insérer une valeur à un index précis. Si l'index demandé est supérieur à la taille de la liste alors l'élément sera placé à la fin
 * @param liste La liste dans laquelle on veut insérer la donnée
 * @param val La valeur que l'on veut insérer
 * @param pos L'index à laquelle on choisit d'insérer la valeur
*/
void insertValueAtPos(pListeInt liste, int val, int pos);

/**
 * @brief Permet d'exporter une liste et son contenu dans un fichier externe
 * @param liste La liste que l'on souhaite exporter
 * @param output Le fichier que l'on souhaite générer
*/
void exportListe(pListeInt liste);


/**
 * @brief  Permet d'importer et d'insérer des éléments dans une liste depuis un fichier extern
 * @param input Fichier à partir duquel on veut générer la liste
 * @return Renvoit un pointeur vers une liste
*/
pListeInt importElement(FILE* input);

