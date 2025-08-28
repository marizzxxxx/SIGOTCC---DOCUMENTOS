#include <stdio.h>

int inteiro(int p1, int p2) {
  return p1 + p2;
}

//marizzxxx

int main(){
	
	int p1, p2, soma;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &p1);
	
	printf("Informe o segundo numero: ");
	scanf("%d", &p2);
	
	soma = inteiro(p1, p2);
	
	printf("A soma dos dois numeros eh igual a: %d", soma);
	
	
	
}
