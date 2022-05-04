#include <iostream>

#include <stdio.h>
int main(){
	//* PRIMEIRO SEMESTRE CIENCIAS DA COMPUTAÇÃO
	//* NOME: Gabriel Nascimento Gomes
	//* NOME: Lucas Sena Alves
	
	//* declaração de variaveis
   char operador;
   float idade;
   float numero1, numero2, resultado = 0;
   //* imput e leitura de valores
   printf("\n Digite h para homem e m para mulher : ");
   scanf("%c", &operador);
   printf("\n Digite a idade : ");
   scanf("%f", &idade);
   printf("Digite o valor da cincunferencia da cintura e depois a largura do quadril \n : ");
   scanf("%f%f", &numero1, &numero2);
   //* calculo de variaveis de acordo com o valor char escolhido a cima
   switch(operador){
      case 'm': resultado = numero1 / numero2;
            if (resultado < 0.71 && idade == 29 )
   {
       printf("O valor do RCQ Feminino é Baixo");
   }
	   else if (resultado >= 0.71 && resultado <= 0.77 && idade == 29)
	   {
	       printf("O valor do RCQ Feminino é Moderado");
	   }
		   else if (resultado >= 0.78 && resultado <= 0.82 && idade == 29)
		   {
		       printf("O valor do RCQ Feminino é Alto");
		   }
			   else if ( resultado > 0.83 && idade == 29)
			   {
			       printf("O valor do RCQ Feminino é Muito Alto");
			   }
    			    else if (resultado < 0.72 && idade >= 30 && idade <= 39)
    	            {
    	                printf("O valor do RCQ Feminino é Baixo");
    	            }
    		            else if (resultado >= 0.72 && resultado <= 0.78 && idade >= 30 && idade <= 39)
    		            {
    		                printf("O valor do RCQ Feminino é Moderado");
    		            }
    			                else if ( resultado >= 0.79 && resultado <= 0.84 && idade >= 30 && idade <= 39)
    			                {
    			                    printf("O valor do RCQ Feminino é Alto");
    			                }
    			                        else if ( resultado > 0.84 && idade >= 30 && idade <= 39)
    			                        {
    			                            printf("O valor do RCQ Feminino é Muito Alto");
    			                        }
    			                                else if ( resultado < 0.73 && idade >= 40 && idade <= 49)
    			                                {
    			                                    printf("O valor do RCQ Feminino é Baixo");
    			                                }
    			                                        else if ( resultado >= 0.73 && resultado <= 0.79 && idade >= 40 && idade <= 49)
    			                                        {
    			                                            printf("O valor do RCQ Feminino é Moderado");
    			                                        }
    			                                                else if ( resultado >= 0.80 && resultado <= 0.87 && idade >= 40 && idade <= 49)
    			                                                {
    			                                                    printf("O valor do RCQ Feminino é Alto");
    			                                                }
    			                                                        else if ( resultado > 0.88 && idade >= 40 && idade <= 49)
    			                                                        {
    			                                                            printf("O valor do RCQ Feminino é Muito Alto");
    			                                                        }
    			                                                                else if ( resultado < 0.74 && idade >= 50 && idade <= 59)
    			                                                                {
    			                                                                    printf("O valor do RCQ Feminino é Baixo");
    			                                                                }
    			                                                                        else if ( resultado >= 0.74 && resultado <= 0.81 && idade >= 50 && idade <= 59)
    			                                                                        {
    			                                                                            printf("O valor do RCQ Feminino é Moderado");
    			                                                                        }
    			                                                                                else if ( resultado >= 0.82 && resultado <= 0.88 && idade >= 50 && idade <= 59)
    			                                                                                {
    			                                                                                    printf("O valor do RCQ Feminino é Alto");
    			                                                                                }
    			                                                                                        else if ( resultado > 0.89 && idade >= 50 && idade <= 59)
    			                                                                                        {
    			                                                                                            printf("O valor do RCQ Feminino é Muito Alto");
    			                                                                                        }
    			                                                                                                else if ( resultado < 0.76 && idade > 59)
    			                                                                                                {
    			                                                                                                    printf("O valor do RCQ Feminino é Baixo");
    			                                                                                                }
    			                                                                                                        else if ( resultado >= 0.76 && resultado <= 0.83 && idade > 59)
    			                                                                                                        {
    			                                                                                                            printf("O valor do RCQ Feminino é Moderado");
    			                                                                                                        }
    			                                                                                                                else if ( resultado >= 0.84 && resultado <= 0.90 && idade > 59)
    			                                                                                                                {
    			                                                                                                                    printf("O valor do RCQ Feminino é Alto");
    			                                                                                                                }
    			                                                                                                                        else if ( resultado > 0.91 && idade > 59)
    			                                                                                                                        {
    			                                                                                                                            printf("O valor do RCQ Feminino é Muito Alto");
    			                                                                                                                        }
				   
         break;
         
      case 'h': resultado = numero1 / numero2;
            if (resultado < 0.83 && idade == 29 )
   {
       printf("O valor do RCQ Masculino é Baixo");
   }
	   else if (resultado >= 0.83 && resultado <= 0.88 && idade == 29)
	   {
	       printf("O valor do RCQ Masculino é Moderado");
	   }
		   else if (resultado >= 0.89 && resultado <= 0.94 && idade == 29)
		   {
		       printf("O valor do RCQ Masculino é Alto");
		   }
			   else if ( resultado > 0.94 && idade == 29)
			   {
			       printf("O valor do RCQ Masculino é Muito Alto");
			   }
    			    else if (resultado < 0.84 && idade >= 30 && idade <= 39)
    	            {
    	                printf("O valor do RCQ Masculino é Baixo");
    	            }
    		            else if (resultado >= 0.84 && resultado <= 0.91 && idade >= 30 && idade <= 39)
    		            {
    		                printf("O valor do RCQ Masculino é Moderado");
    		            }
    			                else if ( resultado >= 0.92 && resultado <= 0.96 && idade >= 30 && idade <= 39)
    			                {
    			                    printf("O valor do RCQ Masculino é Alto");
    			                }
    			                        else if ( resultado > 0.97 && idade >= 30 && idade <= 39)
    			                        {
    			                            printf("O valor do RCQ Masculino é Muito Alto");
    			                        }
    			                                else if ( resultado < 0.88 && idade >= 40 && idade <= 49)
    			                                {
    			                                    printf("O valor do RCQ Masculino é Baixo");
    			                                }
    			                                        else if ( resultado >= 0.88 && resultado <= 0.95 && idade >= 40 && idade <= 49)
    			                                        {
    			                                            printf("O valor do RCQ Masculino é Moderado");
    			                                        }
    			                                                else if ( resultado >= 0.96 && resultado <= 1.00 && idade >= 40 && idade <= 49)
    			                                                {
    			                                                    printf("O valor do RCQ Masculino é Alto");
    			                                                }
    			                                                        else if ( resultado > 1.02 && idade >= 40 && idade <= 49)
    			                                                        {
    			                                                            printf("O valor do RCQ Masculino é Muito Alto");
    			                                                        }
    			                                                                else if ( resultado < 0.90 && idade >= 50 && idade <= 59)
    			                                                                {
    			                                                                    printf("O valor do RCQ Masculino é Baixo");
    			                                                                }
    			                                                                        else if ( resultado >= 0.90 && resultado <= 0.96 && idade >= 50 && idade <= 59)
    			                                                                        {
    			                                                                            printf("O valor do RCQ Masculino é Moderado");
    			                                                                        }
    			                                                                                else if ( resultado >= 0.97 && resultado <= 1.02 && idade >= 50 && idade <= 59)
    			                                                                                {
    			                                                                                    printf("O valor do RCQ Masculino é Alto");
    			                                                                                }
    			                                                                                        else if ( resultado > 1.04 && idade >= 50 && idade <= 59)
    			                                                                                        {
    			                                                                                            printf("O valor do RCQ Masculino é Muito Alto");
    			                                                                                        }
    			                                                                                                else if ( resultado < 0.91 && idade > 59)
    			                                                                                                {
    			                                                                                                    printf("O valor do RCQ Masculino é Baixo");
    			                                                                                                }
    			                                                                                                        else if ( resultado >= 0.91 && resultado <= 0.98 && idade > 59)
    			                                                                                                        {
    			                                                                                                            printf("O valor do RCQ Masculino é Moderado");
    			                                                                                                        }
    			                                                                                                                else if ( resultado >= 0.99 && resultado <= 1.03 && idade > 59)
    			                                                                                                                {
    			                                                                                                                    printf("O valor do RCQ Masculino é Alto");
    			                                                                                                                }
    			                                                                                                                        else if ( resultado > 1.04 && idade > 59)
    			                                                                                                                        {
    			                                                                                                                            printf("O valor do RCQ Masculino é Muito Alto");
    			                                                                                                                        }
         break;
      
      
   }
   
   
   
   
   
   return 0;
}
