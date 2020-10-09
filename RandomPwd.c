#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	char tab[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char tab2[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char tab3[11] = {'0','1','2','3','4','5','6','7','8','9'};

	int a = 0;
	int j = 0;

	printf("Generateur de Mot de Passe Aléatoire :\n");
	printf("Nombre de caracère ? :\n");
	printf("\n");
	printf("6 ?\n");
	printf("8 ?\n");
	printf("10 ?\n");
	printf("12 ?\n");
	printf("14 ?\n");
	printf("16 ?\n");
	scanf("%d", &a);
	char tab4[a];
	int z = 0;
	srand(time(0));
	while (z<a)
	{
		j = 0;
		j=rand()%3+1;
		if( j == 1)
		{
			tab4[z] = tab[rand()%26+0];
			z++;
		}
		else if( j == 2)
		{
			tab4[z] = tab2[rand()%26+0];
			z++;
		}

		else if( j == 3)
		{
			tab4[z] = tab3[rand()%11+0];
			z++;
		}
	}

	int t = 0;
	for( t = 0; t<a; t++)
	{
		printf("%c",tab4[t]);
	}
	printf("\n");


	
	return 0;
}