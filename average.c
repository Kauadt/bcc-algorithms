// #include <stdio.h>

// int main(void) {
//   printf("Hello World\n");
//   return 0;
// }


// #include <stdio.h>

// int main(){
//   float n1, n2;
                                                                                            
//   printf("Digite um número: ");
//   scanf("%f", &n1);
//   printf("Digite outro número: ");
//   scanf("%f", &n2);
//   float media = (n1 + n2) / 2;
//   printf("A média é %f\n", media);
  
//   return 0;
// }

//

/* 

Para compilar basta dar gcc -o SAIDA ARQUIVO
ex: gcc -o average average.c

Para executar basta dar ./SAIDA
ex: ./average
 
*/

#include <stdio.h>

int main(){
  float soma, n;

  for(int i = 0;  i < 2; i++){
    printf("Digite a nota %d: ", i);
    scanf("%f", &n);
    soma += n;
  }
  printf("A média é %f", soma/2);

}