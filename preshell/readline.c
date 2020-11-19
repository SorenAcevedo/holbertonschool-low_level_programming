#include <stdio.h>
#include <stdlib.h>
#define TAM_MAXIMO 10

int main(void)
{
  ssize_t bytes_leidos;
  size_t numero_bytes;
  char *cadena;

  printf("$ ");
  numero_bytes = 0;
  cadena = NULL;
  bytes_leidos = getline(&cadena, &numero_bytes, stdin);

  if (bytes_leidos == -1)
  {
    puts("Error.");
  }
  else
  {
    printf("La línea s: ");
    printf("%s", cadena);
  }
  free(cadena);

  return 0;
}
