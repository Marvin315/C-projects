#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float alt, pes, imc;
	char tec;
	
	printf("Veja aqui o seu Indice de Massa Corporal (IMC) \n");
	
	printf("\n");
	
	printf("Digite aqui a sua altura. Por exemplo: 1.70 \n");
	scanf("%f", &alt);
	
	printf("\n");
	
	printf("Sua altura e %.2f ! Agora digite o seu peso \n", alt);
	scanf("%f", &pes);
	printf("\n");
	
	imc = pes / ( alt * alt);
	
	printf("Seu IMC eh : %.2f \n", imc);
	
	printf("\n");
	
	
	if (imc < 18.5 ){
		printf("Cuidado!!! Voce este abaixo do peso\n");
	}else if (imc >= 18.5 && imc <= 24.9){
		printf("Voce esta no peso ideal! \n");
	}else if( imc >=25.0 && imc <29.9 ){
		printf("Atencao! Voce esta com sobrepeso");
	}else{
		printf("Voce esta com obesidade!!! \n");
	}
	printf("\a");
	
	system("pause");
	printf("\a");
	
	return 0;	
	

}
