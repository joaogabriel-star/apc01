/*Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).*/

#include <stdio.h>

int main() {
  const float gigabytes = 1.0f;
  float bytes = 1024 * 1024 * 1024;

  printf("O valor em bytes é = %f/n" , bytes);
  
  return 0;
}