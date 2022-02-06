#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int	deger;
	printf("Lutfen bir pil degeri giriniz : \n");
	scanf("%d", &deger);

	if(deger == 100)
	{
		printf("Piliniz full");
	}

	else if(deger == 50 || deger > 50)
	{
		printf("Pil seviyeniz yeterli dolulukda");
	}

	else if(deger < 25)
	{
		printf("Tehlikeli pil seviyesi");
	}

	else
	{
		printf("Pil seviyeniz dusuk");
	}
}
