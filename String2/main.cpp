#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>


void subst(char** c1, char** c2)
{
	char* tempStr = *c1;
	printf("%p \n", (void*) &tempStr);
	*c1 = *c2;
	*c2 = tempStr;
}


int getIndexUt(char* str, int taille)
{	
	int index = 0;
	for (int i = 0; i < taille; i++)
	{
		if (str[i] == '\0') 
		{
			index = i;
		}
	}
	return index;
}	

char* mirroirS(char* s, int taille) //bonjour\0
{
	int nbLettreDansChaine = strlen(s);

	char* chaine2 = (char*)malloc((nbLettreDansChaine + 1) * sizeof(char));

	for (int i = 0; i < nbLettreDansChaine; i++)
	{
		chaine2[i] = s[nbLettreDansChaine - i - 1];
	}
	chaine2[nbLettreDansChaine] = '\0';

	return chaine2;//ruojnob\0
}


char* mirroir(char* s, int taille)
{
	int index = getIndexUt(s, taille);
	char* str3 = (char*)malloc(index+1 * sizeof(char));


	int x = 0;
	for(int i = index-1; i >= 0; i--)
	{
		str3[x] = s[i];
		x++;
	}
	str3[index] = '\0';
	printf("%s", str3);
	return str3;
}

int main()
{	


	char* str1 = (char*)malloc(255 * sizeof(char));
	char* str2 = (char*)malloc(255 * sizeof(char));

	//char** str11 = &str1;
	//char** str22 = &str2;

	//strcpy(str1, "Michel");
	//strcpy(str2, "Jean");
	//printf("%s\n", str1);
	//printf("%s\n", str2);
	//subst(str11, str22);

	//printf("%s\n", str1);
	//printf("%s\n", str2);
	;

	printf("Veuillez rentrer la première chaine de char:");
	scanf("%s", str1);
	//str2 = mirroir(str1, 255);
	char* sMirroir = mirroirS(str1, strlen(str1));

	//printf("%s", str2);


	free(str1);
	free(str2);
	//free(str3);
	return 0;
}