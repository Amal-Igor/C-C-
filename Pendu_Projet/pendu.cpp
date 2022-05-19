#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h> //pour aléatoire
#include <time.h>  //pour alétoire


char getCharFromUser()
{
    char inputUser;
    printf("\n Veuillez rentrez un char pour voir s'il est dans le mot mystère :");
    scanf("%c", &inputUser);

    return inputUser;
}

char* generateHiddenWord(int taille)
{
    char* hiddenStr = (char*)malloc(sizeof(char) * (taille));
    strcpy(hiddenStr, "");
    for (int i = 0; i < taille; i++)
    {
        strcat(hiddenStr, "*");
    }
    printf("%s \n", hiddenStr);
    return hiddenStr;
}


int afficheMot(char* mot, int tailleMot, char testLetter, char* hiddenStr)
{
    if(strchr(mot, testLetter) != NULL) {
        for (int i = 0; i < tailleMot; i++)
       {
            if (mot[i] == testLetter)
            {
                hiddenStr[i] = testLetter;
           }
        }
    }
    printf("%s \n", hiddenStr);
    return 0;
}

int countTry(char* input, char* toFind, int taille)
{   
    int count = 0, attempt =0;
    for (int i = 0; i < taille; i++)
    {
        if (toFind[i] == toFind[i])
        {
            count++;
        }
    }
    attempt++;
    if ((count == taille) && count < 10)
    {
        printf("Vous avez gagnez !!");
        return 0;
    }
    else if (count == 10)
    {
        printf("Vous avez perdu !!");
        return -1;

    }
    return 0;

}


void verifyChar(char* randomWord, char* hiddenWord, char inputUser)
{
    int wordL = strlen(randomWord), count =0;
    hiddenWord = (char*)malloc(sizeof(char) * (wordL + 1));
    strcpy(hiddenWord, randomWord);
    while (randomWord = strchr(hiddenWord, inputUser))
    {
        *hiddenWord = inputUser;
    }
     printf("%s \n", hiddenWord);
}





int randomNumb(int min, int max)
{
    int random = 0;
	 random = (rand() % (max - min + 1)) + min;

	return random;
}

int getNbmotInFile(FILE* input)
{	  
	char space = '\n';
	int count = 0;
	while (!feof(input))
	{
		space = getc(input);
		if (space == '\n')
		{
			count++;
		}
	}
	return count;
}

char* extractWordFromTextFile(FILE* input, int random)
{
   
    int count = 0;
    char* randomWord = (char*)malloc((255) * sizeof(char));
    char line[256]; 

    int z = fseek(input, 0L, SEEK_SET);
    while ( z == 0) 
    {
        fgets(line, 256, input);
        if (count == random)
        {
            strcpy(randomWord, line);
            fclose(input);
            return randomWord;
        }
        else
        {
            count++;
        }
    }
    fclose(input);
    return randomWord;
}




/**        char c = getCharFromUser();
        int verify = verifyChar(randomWord, c);
        if(verify > 0)
        { 
            for (int i = 0; i <= wordL; i++)
            {
                randomWordL[i] = c;
            }
        }/

    
    //char c = getCharFromUser();
    //randomWordL = verifyChar(randomWordL, randomWord, c);
    

//char* extractWordFromTextFile(FILE* input)
//{
//    int count = 0;
//    int lineNumber = 5;
//    char* randomWord = (char*)malloc((255) * sizeof(char));
//        char line[256]; /* or other suitable maximum line size */
//        while (fgets(line, sizeof line, input) != NULL) /* read a line */
//        {
//            if (count == lineNumber)
//            {   
//                strcpy(randomWord, line);
//                //printf("%s", line);
//                fclose(input);
//                return randomWord;
//                //use line or in a function return it
//                //in case of a return first close the file with "fclose(file);"
//            }
//            else
//            {
//                count++;
//            }
//        }
//        fclose(input);
//    return randomWord;
//}


/*
int afficheMot(char* mot,int tailleMot, char* tabLettres)*/