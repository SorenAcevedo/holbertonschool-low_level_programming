#ifndef LIST_HEADER
#define LIST_HEADER

/**
* struct linklist - linked list
* @str:value of the node
* @len: len of str
* @next: next node
*/

typedef struct linklist
{
	char *str;
	int len;
	struct linklist *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
