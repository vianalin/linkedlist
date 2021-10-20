#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct order {
	char food[100];
	double price;
	struct order *next;
};

void bill(struct order *o);
void print_list(struct order *o);
struct order * insert_front(struct order *next, char *food, double price);
struct order * free_list(struct order *o);

int main() {
	srand(time(NULL));
	
	char *food = "french fries";
	double price = rand() / 1000000000.0;
	//bill(a);
	
	//struct order *b = insert_front(a, food, price);
	//print_list(a);
	//free_list(a);
	//bill(a);
	
	return 0;
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

struct order * insert_front(struct order *next, char *food, double price) {
	struct order *addon = malloc(sizeof(struct order));
	strcpy(addon->food, food);
	addon->price = price;
	addon->next = next;
	return addon;
}
	
struct order * free_list(struct order *o) {
	struct order *next = (o->next);
	while(next) {
		o = next;
		next = o->next;
		free(o);
	}
	return next;
}
	

