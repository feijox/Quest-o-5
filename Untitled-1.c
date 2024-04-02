#include <stdio.h>
#include <string.h>

int main(void) {
  char s[40], sAux[40];

  
  printf("Insira uma frase curta ou palavra: \n");
  scanf("%[^\n]s", &s);

  int i, j, n;
  n = strlen(s);

  j = n - 1;
  for(i=0; i<n; i++) {
    sAux[i] = s[j]; 
  j = j - 1;
  
  }

  sAux[i] = '\0';

  printf("\n");
  printf("inicial: %s\n", s);
  printf("invertida: %s\n", sAux);
  
  return 0;
}