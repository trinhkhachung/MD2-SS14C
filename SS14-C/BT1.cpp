#include<stdio.h>
#include<string.h>
int main(){
	int a = 10;
	int *ptrA = &a;
	printf("gia tri la: %d\n",a);
	printf("gia tri la: %d\n",&a);
	printf("gia tri la: %d\n",ptrA);
	printf("gia tri la: %d\n",*ptrA);
}
