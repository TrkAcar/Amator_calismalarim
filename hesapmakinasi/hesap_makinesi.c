#include <stdio.h>
#include <stdlib.h>

void	toplama(float a,float b);
void	cikarma(float a,float b);
void	carpma(float a,float b);
void	bolme(float a, float b);
void	mod(float a, float b);

int	main()
{
	char op;
	float a,b;
	int c,d;

	printf("Lutfen bir adet operator girin %c\n", op);
	scanf("%c", &op);

	printf("Lutfen iki adet sayi giriniz\n", a,b);
	scanf("%f%f", &a,&b);

	switch(op)
	{
		case '+' : toplama(a,b);
		break;
		case '-' : cikarma(a,b);
		break;
		case '*' : carpma(a,b);
		break;
		case '/' : bolme(a,b);
		break;
		case '%' : mod(a,b);
		break;
		default :printf("Böyle Bir İşlem yok D:");
		break;
	}
	return (0);
}
