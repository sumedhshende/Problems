#include<stdio.h>

#define SIZE_OF(var) ((char*)(&var + 1) - (char *) &var)

int main(void) {
	int num = 67 ;
	char ch = 't';
	int arr[4];
	printf("%d\n", SIZE_OF(arr));
	printf("%d\n", SIZE_OF(num));
	printf("%d\n", SIZE_OF(ch));
	printf("%d\n", __builtin_popcount(num));
	return 0;
}








































