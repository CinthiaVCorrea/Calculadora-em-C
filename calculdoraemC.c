#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (void) 
{
	
//Adaptado através de fontes diversas. 	
//Nome do usuário do GitHub: CinthiaVCorrea
	
	printf ("Oi, me chamo Cinthia de Vargas Correa. \n Curso Analise e Desenvolvimento de Sistemas. \n Na Universidade La Salle. \n Numero 202211968. \n");

//Entrada dos valores das variáveis.
	
	float numero1, numero2, soma, sub, multi, divi, potencia, raiz1 , raiz2; 
	int op;
	
	printf ("Digite 1 para: raiz \n Digite 2 para:soma, sub, multi, divi, potencia\n ");
	scanf ("%d", &op);
	
	printf ("Digite o primeiro numero:\n");
	scanf ("%f", &numero1);
	
	printf ("Digite o segundo numero:\n");
	scanf ("%f", &numero2);

//Soma dos valores.

	soma  = numero1 + numero2;
	sub   = numero1 - numero2;
	multi = numero1 * numero2;
	divi  = numero1 / numero2;
	potencia = pow (numero1, numero2);
	raiz1  = sqrt (numero1);
	raiz2 = sqrt (numero2);

	
//Saída dos valores. 

	if (op == 1){
		
		printf ("a raiz de %.2f e %.2f:\n E a raiz de %.2f e %.2f\n",numero1, raiz1 ,numero2 , raiz2);
	} 
	
	if(op == 2)
	{	
	printf ("a soma e: %.2f\n", soma);
	printf ("a subtracao e: %.2f\n", sub);
	printf ("a multiplicacao e: %.2f\n", multi);
	printf ("a divi e: %.2f\n", divi);
	printf ("a potencia e: %.2f\n", potencia);
	}
	return 0 ;
}
