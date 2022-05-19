#pragma once
#include <stdio.h>




/**
 * @brief Cette fonction va permettre de vérifier à chaque input utilisateur si la lettre est bien présente dans le mot à trouver
 * @param word = le mot que l'utilisateur doit trouver
 * @param inputUser = la lettre entrée par l'utilisateur
 * @return  1 si la lettre est présente dans le mot et 0 si non
*/
void verifyChar(char* randomWord, char* hiddenWord, char inputUser);

/**
 * @brief Cette fonction va servir à récupérer la lettre taper par l'utilsateur 
 * @param input L'input entré par l'utilisateur
 * @return Renvoi un char qui sera utilisé par la fonction de vérification vs le mot à trouver
*/
char getCharFromUser();

/**
 * @brief Cette fonction un nombre aléatoire compris dans l'intervalle défini
 * @param min La valeur minimale
 * @param max la valeur maximale
 * @return un nombre aléatoire
*/
int randomNumb(int min, int max);

/**
 * @brief Cette fonction permet d'extraire un mot à la position passé en paramètre
 * @param input L'input correspond à un fichier texte dans lequel on va extraire un mot
 * @param random Permet de choisir une ligne aléatoire à lire
 * @return Une chaine de caractères 
*/
char* extractWordFromTextFile(FILE* input, int random);


/**
 * @brief Cette fonction servira à l'affichage du mot 
 * @param lettreUser Correspond 
 * @param randomWord 
 * @return 
*/
char* printWord(char lettreUser, char* randomWord);


/**
 * @brief Permet de récupérer le nombre de ligne dans un fichier 
 * @param file Fichier à controlé
 * @return Le nombre de ligne/mots présent dans le fichier
*/
int getNbmotInFile(FILE* file);


int afficheMot(char* mot, int tailleMot, char testLetter, char* hiddenStr);

char* generateHiddenWord(int taille);

int countTry(char* input, char* toFind, int taille);



//int getWordInfile(char* fichier, char* mot, int* taille);


