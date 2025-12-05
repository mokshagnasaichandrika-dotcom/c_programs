#include<stdio.h>
int main(){
	int a = 10;
	int *p = &a;
	printf("address of a:%p\n",&a);
	printf("address by using pointers: %p\n",p);
	p++;
	printf("after increment adress is :%p\n",p);
	p--;
	printf("after decrement adress is :%p\n",p);
}
