#include<stdio.h>

void reverse(int arr[], int start, int end) {
	int *p = arr ;
	int *e = arr + end;
	
	while( p<e ) {
		int t= *p;
		*p = *e;
		*e = t;
		++p; --e;
	}
}
void print(int arr[], int size) {
	for(int i=0; i< size; i++) 
		printf(" %d", arr[i]);
	printf("\n");
}
void arotate(int arr[], int size, int i) {
	reverse(arr, 0, i-1);
//	print(arr,10);
	reverse(arr, i, size-1);
//	print(arr,10);
	reverse(arr, 0, size-1);
}
int main(void) {
	for(int i=0; i<10; i++) {
		int arr[] = {1,2,3,4,5,6,7,8,9,10};
		print(arr,10);
		arotate(arr, 10, i);
		print(arr, 10);
	}
	return 0;
}

