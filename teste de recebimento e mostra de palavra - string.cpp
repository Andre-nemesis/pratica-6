#include <stdio.h>
#include <stdlib.h>

int main () {
	char c[19];
	
		printf("Digite frase tudo vale a pena: ");
		/*fgets(c,19,stdin);  se for receber uma palavra tem que ter um espaço a+ para receber \0, para dizer que a palavra encerrou. 
		fgets(fixed get string(pegar uma string fixa)) é um comando do stdlib, a primeira parte (c) significa a variavel, (19) a quantidade de caracteres que ele vai receber, (std - padrão(in - input)), que significa entrada padrão que é o teclado.
		o gets(get string(pegar string)) pode ser usado para leitura, ele é melhor que o fgets pq se vc não ocupar todo o espaço da memória ele não preenche com dados "vazios" como o fgets.
		
		*/
		gets(c);
		/*o puts(put string(colocar string)) em casos de colcoar uma frase e a string é melhor usar o printf, se for só a string é melhor o puts
		ele já faz a quebra de linha automática sintaxe -> puts(variável); */
		printf("A frase lida foi: %s\n",c);
		puts(c);
	return 0;
}
