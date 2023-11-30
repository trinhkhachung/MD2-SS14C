#include<stdio.h>
#include<string.h>
int swap(int *a,int *b){
	int temp = *a;
    *a = *b;
	*b = temp;
}
int main(){
	int a;
	int b;
	int c;
	printf("nhap so: ");
	scanf("%d%d",&a,&b);
	printf("hieu trc khi doi %d - %d = %d\n",a,b,a-b);
	swap(&a,&b);
	printf("hieu trc khi doi %d - %d = %d\n",a,b,a-b);
}
