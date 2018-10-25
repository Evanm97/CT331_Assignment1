#include <stdio.h>
#include "genericLinkedList.h"

void runTests(){
	int integer = 10;
	int integer2 = 20;
	double double1 = 30.0;
	
	  listElement* l = createEl(&integer, 30, &printInt);
	  listElement* l2 = insertAfter(l, &double1, 30, &printDouble);
	  insertAfter(l2, "String", 30, &printStr);

	  printf("\n---QUESTION 3---\n");
	  printf("---------------------------------------------------------------------\n");
	  printf("--Initial List--\n\n");
	  traverse(l);
	  printf("---------------------------------------------------------------------\n");

	  printf("--Testing Push--\n");
	  printf("Pushing \"Char C\" to head of list\n\n");
	  push(&l, "C", 30, &printChar);
	  traverse(l);
	  printf("---------------------------------------------------------------------\n");

	  printf("--Testing Length--\n\n");
	  traverse(l);
	  printf("\nThe length of the list is :%d", length(l));
	  printf("\n");
	  printf("---------------------------------------------------------------------\n");

	  printf("--Testing Pop--\n");
	  printf("Popping \"Char C\" from head of list\n\n");
	  pop(&l);
	  traverse(l);
	  printf("---------------------------------------------------------------------\n");

	  printf("--Testing Dequeue--\n");
	  printf("Dequeuing \"String\" from list\n\n");
	  dequeue(l);
	  traverse(l);
	  printf("---------------------------------------------------------------------\n");

	  printf("--Testing Enqueue--\n");
	  printf("Enqueueing \"Int 20\" to head of list\n\n");
	  enqueue(&l, &integer2, 30, &printInt);
	  traverse(l);
	  printf("\n");
}
