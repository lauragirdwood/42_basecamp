#include <stdio.h>

int main(void)
{
  printf(" --- TIPO ---|--- BYTES ---\n");
  printf(" char .......: %c-d bytes\n", sizeof(char));
  printf(" short.......: %d bytes\n", sizeof(short));
  printf(" int.........: %d bytes\n", sizeof(int));
  printf(" long........: %d bytes\n", sizeof(long));
  printf(" float ......: %d bytes\n", sizeof(float));
  printf(" double......: %d bytes\n", sizeof(double));
}