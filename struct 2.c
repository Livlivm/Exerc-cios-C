//biblioteca
#include<stdio.h>

   typedef struct {
       char modelo[30];
       int ano;
       float preco;
   } carro;
   
   int main(){
       carro carro1;
       
       printf ("Digite o modelo do carro: ");
       scanf ("%[^\n]", carro1.modelo);
       
       printf ("Digite o ano do carro: ");
       scanf ("%d", &carro1.ano);
       
       printf ("Digite o preço do carro: ");
       scanf ("%f", &carro1.preco);
       printf ("Modelo: %s\n", carro1.modelo);
       printf ("Ano: %d\n", carro1.ano);
       printf ("preço: %.2f\n", carro1.preco);
   

     return 0;
   }
     
    
     
