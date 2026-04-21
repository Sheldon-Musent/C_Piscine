t_btree *btree_create_node(void *item)           //[return type] [funtion name] (parameters) 1.t_btree * - return a pointer to a node. 2.void *item - takes one argument, any type, called item
{                                                                                              
	t_btree *node;								 //declare address of empty box
	

	node = malloc(sizeof(t_btree));				 //malloc start reserving a place for memories
	if (node == NULL)
		return (NULL);							 //if no place dont crash, return with nothing.
	node->item = item;							 //data 1 filling the box
	node->left = NULL;							 //data 2 filling the box
	node->right = NULL;							 //data 3 filling the box
	return (node);                               //malloc closed the box, hand it back to caller.
}
