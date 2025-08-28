#include <stdio.h>

int fatorial(int n1){
	
	int fat = 1;
	
	for (int i=n1; i > 1; i--){
		fat = fat * i;
	}
	return fat;
}

//marizzxxx

int main(){
	
	int n1, fat;
		
	printf("Digite um numero: ");
	scanf("%d", &n1);
	
	fat = fatorial(n1);
	printf("o fatorial eh: %d ", fat);
	
	return 0;
}
