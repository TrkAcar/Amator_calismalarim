#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int	deger;
	int	deger2;

	printf(": Lamba calismiyor :\n\n");
	printf("Lamba fişe takilimi\n 1.Evet    2.Hayır \n");
	scanf("%d", &deger);

	if(deger == 1)
	{
		printf("Ampul patlakmı\n 1.Evet   2.Hayır\n");
		
		scanf("%d", &deger2);
		if(deger2 == 1)
		{
			printf("Ampulu değiştir");
		}
		else if(deger2 == 2)
		{
			printf("Yeni bir lamba al");
		}
		else
		{
			printf("Komik degil");
		}
	}
	else if(deger == 2)
	{
		printf("Fişi tak\n");
	}
	else
	{
		printf("Sagdece 1 ve 2 degerini girmelisin saka yapma :D");
	}
	return 0;
}
