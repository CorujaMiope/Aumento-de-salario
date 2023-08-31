projeto salário

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float sal = 0; 
int pct = 0;
float d = 0;
float soma = 0; 
int Sim = 0;
int Sim2 = 0;
int Sim3 = 0;

int main()
{
 do{
     
 do{
     
printf ("Digite o salário do funcionário:\n");
scanf ("%f", &sal);
     
printf ("O funcionário recebe %0.2f reais ?: \n  Digite 1 para sim, e 2 para Não: \n", sal);


//Condição de Confirmação de informação


    
    scanf ("%i", &Sim);
    if (Sim <= 1)
        printf ("\n Certo!\n");
    else
        printf ("Ok, vamos tentar de novo \n");
  
   } while (Sim >= 2);
   
   do{
       float divi = sal / 100;
       
       printf ("Quantos porcento o mesmo recebera de aumento? :\n");
       scanf ("%i", &pct);
       
       float multip = pct * divi;
       float sl = multip + sal;
           
       printf ("O funcionário recebera %i porcento de aumento ?: \n  Digite 1 para sim, e 2 para Não: \n", pct);
       
       scanf ("%i", &Sim2);
        if (Sim2 <= 1)
        
        printf ("Então, o salário de %0.2f R$ passara a ser de %0.2f R$ após ter recebido %i porcentos de aumento \n", sal, sl, pct);
        else
            printf ("Ok, vamos tentar de novo\n");
   } while (Sim2 >=2);
  
  {
      printf ("Deseja fazer outro calculo?\n Digite 1 para SIM e 2 para NÃO \n");
      scanf ("%i", &Sim3);
      
      if (Sim3 <= 1)
        printf ("Ok! Vamos lá!\n");
    
    else
    printf ("Ok, até mais!");
  
  } 
   
} while (Sim3 <=1);

return (0);
}

