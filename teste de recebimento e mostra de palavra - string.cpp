#include <stdio.h>
#include <stdlib.h>

int main () {
	char c[19];
	
		printf("Digite frase tudo vale a pena: ");
		/*fgets(c,19,stdin);  se for receber uma palavra tem que ter um espa�o a+ para receber \0, para dizer que a palavra encerrou. 
		fgets(fixed get string(pegar uma string fixa)) � um comando do stdlib, a primeira parte (c) significa a variavel, (19) a quantidade de caracteres que ele vai receber, (std - padr�o(in - input)), que significa entrada padr�o que � o teclado.
		o gets(get string(pegar string)) pode ser usado para leitura, ele � melhor que o fgets pq se vc n�o ocupar todo o espa�o da mem�ria ele n�o preenche com dados "vazios" como o fgets.
		
		*/
		gets(c);
		/*o puts(put string(colocar string)) em casos de colcoar uma frase e a string � melhor usar o printf, se for s� a string � melhor o puts
		ele j� faz a quebra de linha autom�tica sintaxe -> puts(vari�vel); */
		printf("A frase lida foi: %s\n",c);
		puts(c);
	return 0;
}
