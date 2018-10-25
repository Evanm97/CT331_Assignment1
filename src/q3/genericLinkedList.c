#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "genericLinkedList.h"
#define _CRT_SECURE_NO_WARNINGS

typedef struct listElementStruct {
	void* data;
	size_t size;
	void(*printFunction)();
	struct listElementStruct* next;
} listElement;

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(void* data, size_t size, void* dataType) {
	listElement* e = malloc(sizeof(listElement));
	if (e == NULL) {
		//malloc has had an error
		return NULL; //return NULL to indicate an error.
	}
	e->printFunction = dataType;
	char* dataPointer = malloc(sizeof(char)*size);
	if (dataPointer == NULL) {
		//malloc has had an error
		free(e); //release the previously allocated memory
		return NULL; //return NULL to indicate an error.
	}
	memcpy(dataPointer, data, size);
	e->data = dataPointer;
	e->size = size;
	e->next = NULL;
	return e;
}

//Prints out each element in the list
void traverse(listElement* start) {
	listElement* current = start;
	while (current != NULL) {
		current->printFunction(current->data);
		current = current->next;
	}
}

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* el, void* data, size_t size, void* dataType) {
	listElement* newEl = createEl(data, size, dataType);
	listElement* next = el->next;
	newEl->next = next;
	el->next = newEl;
	return newEl;
}


//Delete the element after the given el
void deleteAfter(listElement* after) {
	listElement* delete = after->next;
	listElement* newNext = delete->next;
	after->next = newNext;
	//need to free the memory because we used malloc
	free(delete->data);
	free(delete);
}

int length(listElement* list) {
	int length = 0;  // Initialize count 
	listElement* current = list;  // Initialize current 
	while (current != NULL)
	{
		length++;
		current = current->next;
	}
	return length;
}

void push(listElement** list, void* data, size_t size, void* dataType) {
	listElement* newEl = createEl(data, size, dataType);
	newEl->next = *list;
	*list = newEl;
}

listElement* pop(listElement** list) {
	listElement* el = *list;
	*list = el->next;
	free(el);
	return el;
}

void enqueue(listElement** list, void* data, size_t size, void* dataType) {
	listElement* newEl = createEl(data, size, dataType);
	newEl->next = *list;
	*list = newEl;
}

listElement* dequeue(listElement* list) {	listElement* current = list;
	while (current->next->next != NULL) {
		current = current->next;	}	list = current->next;
	current->next = NULL;
	return current;}void printChar(void* data) {
	printf("%c\n", *(char*)data);
}

void printDouble(void * data)
{
	printf("%f\n", *(double*)data);
}

void printInt(void* data) {
	printf("%d\n", *(int*)data);
}

void printStr(void* data) {
	printf("%s\n", (char*)data);
}