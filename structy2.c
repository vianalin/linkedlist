#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct order * bill(char * food, double price, struct order * next);
	struct order *o;
	o = malloc(sizeof(struct order));
	
	strcpy(o->order, food);
	o->price = price;
	o->next = next;
	
	return o;
}

void bill(struct order *o) {
	int i;
	printf("order: %s \n cost: $%d \n", o-> food, o->price);
}

void print_list(struct order *o) {
	while(o) {
		bill(o);
		o = (o->next);
	}
}

struct order * insert_front(struct order * current, char * food, double price) {
	struct order *addon = malloc(sizeof(struct order));
	strcpy(addon->food, food);
	addon->price = price;
	addon->next = next;
	return addon;
}
	
struct order * free_list(struct order * current) {
	struct order *next;
	while(current) {
		next = current-> next;
		free(current);
		current = next;
	}
	return current;
}
	
struct order * remove_node(struct order * current, double price) {
	struct order * start = current;
	struct order * temp;
	
	if(current->price == price) {
		temp = current->next;
		free(current);
		return temp;
	}
}
	
	
	
	

