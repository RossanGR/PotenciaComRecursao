#include <stdio.h>

int CalcularPotencia(int b, int e){

  if(e == 0){
    return 1;
  }
  
  else{
 
    return  CalcularPotencia(b,e-1)*b;
  }
  
}

int main(void) {
  int b,e,result;
  printf("Digite a base:\n ");
  scanf("%d",&b);

  printf("Digite o expoente:\n ");
  scanf("%d",&e);

  if( e < 0){
    printf("Valor inválido!");
  }

  else{

  
  result = CalcularPotencia(b,e);

  printf("\nResultado = %d",result);
  }

  // FORMA INTERATIVA
//   int b,e,s=1,i;
//   printf("Potência\n");
//   printf("Digite o numero da base: ");
//   scanf("%d",&b);
//   printf("Digite o numero do expoente: ");
//   scanf("%d",&e);
// if (b==2){
//   s=0;
//  for(i=1; i<=e;i++){
//     s = s + b;
//   }
//     printf("Resultado 1: %d\n",s);
// }

// else{
//    for(i=1; i<=e;i++){
//     s = s * b;
//   }
//     printf("Resultado 2: %d\n",s);
// }
 

  // printf("Resultado: %d",s);
  return 0;
}