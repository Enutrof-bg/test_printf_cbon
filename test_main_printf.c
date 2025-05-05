#include "ft_printf.h"

int main()
{
	// int printbyte = ft_printf("%s\n", (char *)0);
	// printf("%d\n", ft_printf("%d %d %d %d\n", 11, 33 , 55 , 77));
	// int test = printf("%s\n", (char *)0);

	// int printbyte = ft_printf("%x\n", 9223372036854775);
	// int test = printf("%x\n", 9223372036854775);
// 
	int printbyte = ft_printf("%p\n", LONG_MIN);
	// int test = printf("%p\n", LONG_MIN);

	// long long toto = LONG_MIN;
	// int *ptr = &toto;
	// int printbyte = ft_printf("%p\n", ptr);
	// int test = printf("%p\n", ptr);

	// int printbyte = ft_printf("%x\n", INT_MAX);
	// printf("printbyte test : %d\n\n", printbyte);

	// printbyte = ft_printf("%x\n", INT_MIN);
	// printf("printbyte test : %d\n\n", printbyte);

	// int printbyte = ft_printf("%x %x %x %x %x %x\n", LONG_MAX, INT_MAX, INT_MIN, LONG_MIN, ULONG_MAX, INT_MAX);
	// printf("printbyte test : %d\n\n", printbyte);

	// printbyte = ft_printf("%x\n", LONG_MIN);
	// printf("printbyte test : %d\n\n", printbyte);


	// printbyte = ft_printf("%x\n", LONG_MAX);
	// printf("printbyte test : %d\n\n", printbyte);

	// printbyte = ft_printf("%x\n", 0);
	// printf("printbyte test : %d\n\n", printbyte);

	// printbyte = ft_printf("%x\n", -42);
	// printf("printbyte test : %d\n\n", printbyte);

	// int test = printf("%lx\n", LONG_MIN);

	// int printbyte = ft_printf("%x %x %x %x %x \n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX);
	// int printbyte = ft_printf("%x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// int test = printf("%x %x %lx %lx %lx %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	// int printbyte = ft_printf("%u\n", LONG_MAX);
	// int test = printf("%lu\n", LONG_MAX);

	printf("printbyte test : %d\n", printbyte);
	// printf("byte test : %d\n", test);



	ft_printf(" %c \n", '0' - 256);
	printf(" %c \n", '0' - 256);
	ft_printf(" %c %c %c \n", '1', '2', '3');

	ft_printf(" %c\n", '1'); 
	printf(" %c\n", '1');

	printf("test %%u : %u\n", -1);
	ft_printf("test %%u : %u\n", -1);


	ft_printf("%% bonjour test hexa : %X test hexa : %x test ui: %u\n", 1234, 1234, -1234);
	printf("%% bonjour test hexa : %X test hexa : %x test ui: %u\n", 1234, 1234, -1234);

	char *str = "bonjour";
	printf("   printf : %p\n", str);
	ft_printf("ft_printf : %p\n", str);

	char *str2 = "grostas";
	printf("   printf : %p\n", str2);
	ft_printf("ft_printf : %p\n", str2);

	char *str3 = "123456789";
	printf("   printf : %p\n", str3);
	ft_printf("ft_printf : %p\n", str3);


	char *s1 = "abc";
	char *s2 = "def";
	char *s3 = "ghi";
	char *s4 = "jkl";
	char *s5 = "mno";
	ft_printf("test str : %s %s %s %s %s\n", s1, s2, s3, s4, s5);

}
