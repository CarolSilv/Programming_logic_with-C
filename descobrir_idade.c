#include <stdio.h>

void aula_2(void) {
  int idade = 0;
  int anoNasc = 0;
  printf("Informe o seu ano de nascimento:\n");
  scanf("%d", &anoNasc);
  idade = 2023 - anoNasc;
  printf("A idade é: %i", idade);
}

