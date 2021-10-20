struct order {
	char food[100];
	double price;
	struct order *next;
};

struct order * bill(char * food, double price, struct order * next);
void print_bill(struct order *o);
void print_list(struct order *o);
struct order * insert_front(struct order * current, char * food, double price);
struct order * free_list(struct order * current);
struct order * remove_node(struct order * front, char * food, double price);
