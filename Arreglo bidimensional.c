#include<stdio.h>

int main(){
	
	int i, num, arrayI[10];
	char count[9];
	
	printf("El arreglo es: \n");
	for (i=0; i<10; i++)
	{
		arrayI[i] = 2*(i+1);
		printf("|%i|", arrayI[i]);
	}
	
	printf("\n\n");
	printf("Arreglo invertido:\n");

	for (i=9; i>=0; i--)
	{
		printf("|%i|", arrayI[i]);
	}
	
	printf("\n\nIngrese su numero de cuenta: ");
	gets(count);
	num = count[8] -'0';
	
	printf("\nArreglo sustituyendo el ultimo numero por -1: \n", num);
	arrayI[num]=-1;
	
	for (i=9; i>=2; i--)
	{
		printf("|%i| ", arrayI[i]);
	}
	
	return 0;
}
