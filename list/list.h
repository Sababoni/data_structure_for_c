#ifndef HEADER_FILE
#define HEADER_FILE

/*Struct of a Node in a list*/
typedef struct node{
	void* data; //data can be converted to any type
	struct *p_next; //Points to the next node
}t_node;

#endif
