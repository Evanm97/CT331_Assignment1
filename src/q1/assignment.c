#include <stdio.h>

void main(){
  
  int i;
  int* p;
  long l;
  double* d;
  char** c;
	
	
  printf("\n---QUESTION 1---\n");
  printf("---------------------------------------------------------------------\n");

  printf("The size of integer is %zd\n", sizeof(i));
  printf("The size of integer* is %zd\n", sizeof(p));
  printf("The size of long is %zd\n", sizeof(l));
  printf("The size of double pointer is %zd\n", sizeof(d));
  printf("The size of char** is %zd\n", sizeof(c));
  printf("\n\n");
  
  system("pause");
  return 0;
}

