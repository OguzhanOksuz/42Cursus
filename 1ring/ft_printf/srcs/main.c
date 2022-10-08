#include "../includes/ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...);

int	main()
{
	char a = 'c';
	char b = '0';
	char c = 126;
	ft_printf("---------Test 1--------\n");
	ft_printf("-------ft_putchar------\n");
	ft_printf("%c\n%c\n%c\n",a,b,c);
	ft_printf("---------check---------\n");
	printf("%c\n%c\n%c\n",a,b,c);
	char *s1 = "Testing";
	char *s2 = "Test\\\ting";
	char *s3 = "Test\fing";
	ft_printf("---------Test 2--------\n");
	ft_printf("-------ft_putstr-------\n");
	ft_printf("%s\n%s\n%s\n",s1,s2,s3);
	ft_printf("---------check---------\n");
	printf("%s\n%s\n%s\n",s1,s2,s3);
	int nbr1 = -2147483648;
	int nbr2 = 2147483647;
	int nbr3 = 0;
	int nbr4 = 42;
	ft_printf("---------Test 3--------\n");
	ft_printf("-------ft_putnbr-------\n");
	ft_printf("%d\n%d\n%d\n%d\n",nbr1,nbr2,nbr3,nbr4);
	ft_printf("---------check---------\n");
	printf("%d\n%d\n%d\n%d\n",nbr1,nbr2,nbr3,nbr4);
	unsigned int nb1 = 4294967295;
	unsigned int nb2 = 0;
	unsigned int nb3 = 42;
	ft_printf("---------Test 4--------\n");
	ft_printf("-------ft_putnbru------\n");
	ft_printf("%u\n%u\n%u\n",nb1,nb2,nb3);
	ft_printf("---------check---------\n");
	printf("%u\n%u\n%u\n",nb1,nb2,nb3);
	ft_printf("---------Test 5--------\n");
	ft_printf("-----ft_putnbruhex-----\n");
	ft_printf("%x\n%x\n%x\n",nb1,nb2,nb3);
	ft_printf("---------check---------\n");
	printf("%x\n%x\n%x\n",nb1,nb2,nb3);
	ft_printf("---------Test 6--------\n");
	ft_printf("-----ft_putnbruheX-----\n");
	ft_printf("%X\n%X\n%X\n",nb1,nb2,nb3);
	ft_printf("---------check---------\n");
	printf("%X\n%X\n%X\n",nb1,nb2,nb3);
	ft_printf("---------Test 7--------\n");
	ft_printf("-------ft_putptr-------\n");
	ft_printf("%p\n%p\n%p\n",&nb1,&nb2,&nb3);
	ft_printf("---------check---------\n");
	printf("%p\n%p\n%p\n",&nb1,&nb2,&nb3);
	
}
