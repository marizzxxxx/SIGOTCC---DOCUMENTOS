#include <stdio.h>

char* negativo(int n1){
	
	if (n1 >= 0){
	return "falso";
	}
	return "verdadeiro";
}

//marizzxxx

int main(){
	
	int n1;
		
	printf("Digite um numero: ");
	scanf("%d", &n1);
	
	char* x = negativo(n1);
	printf("O numero eh negativo? %s ", x);
	
	return 0;
}
