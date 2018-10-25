#include <stdio.h>
#include "tests.h"
#include "linkedList.h"

void runTests() {
	listElement* l = createEl("String (1).", 30);
	listElement* l2 = insertAfter(l, "String (2)", 30);
	insertAfter(l2, "String (3)", 30);

	printf("\n---QUESTION 2---\n");
	printf("---------------------------------------------------------------------\n");
	printf("--Initial List--\n\n");
	traverse(l);
	printf("---------------------------------------------------------------------\n");

	printf("--Testing Push--\n");
	printf("Pushing \"String (4)\" to head of list\n\n");
	push(&l, "String (4)", 30);
	traverse(l);
	printf("---------------------------------------------------------------------\n");

	printf("--Testing Length--\n\n");
	traverse(l);
	printf("\nThe length of the list is :%d", length(l));
	printf("\n");
	printf("---------------------------------------------------------------------\n");

	printf("--Testing Pop--\n");
	printf("Popping \"String (4)\" from head of list\n\n");
	pop(&l);
	traverse(l);
	printf("---------------------------------------------------------------------\n");

	printf("--Testing Dequeue--\n");
	printf("Dequeuing \"String (3)\" from list\n\n");
	dequeue(l);
	traverse(l);
	printf("---------------------------------------------------------------------\n");

	printf("--Testing Enqueue--\n");
	printf("Enqueueing \"String (5)\" to head of list\n\n");
	push(&l, "String (5)", 30);
	traverse(l);
	printf("\n");

}
