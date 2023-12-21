#include "hash_tables.h"
shash_table_t *shash_table_create(unsigned long int size);

/**
 * shash_table_create - THe function that creates a sorted hash table.
 * @size: The size of the array
 * Return: A pointer to the created sorted hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - The function inserts a key-value
 * pair into a sorted hash table
 * @ht: The sorted hash table
 * @key: The key
 * @value: The value
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_value, *tmp;
	char *copy = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->snext;
	}

	new_value = malloc(sizeof(shash_node_t));
	if (new_value == NULL)
		return (0);

	copy = strdup(value);
	if (copy == NULL)
	{
		free(new_value);
		return (0);
	}

	new_value->key = strdup(key);
	if (new_value->key == NULL)
	{
		free(copy);
		free(new_value);
		return (0);
	}

	new_value->value = copy;
	new_value->next = ht->array[index];
	ht->array[index] = new_value;

	if (ht->shead == NULL)
	{
		new_value->sprev = NULL;
		new_value->snext = NULL;
		ht->shead = new_value;
		ht->stail = new_value;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_value->sprev = NULL;
		new_value->snext = ht->shead;
		ht->shead->sprev = new_value;
		ht->shead = new_value;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
		tmp = tmp->snext;

		new_value->sprev = tmp;
		new_value->snext = tmp->snext;

		if (tmp->snext == NULL)
			ht->stail = new_value;
		else
			tmp->snext->sprev = new_value;

		tmp->snext = new_value;
	}
	return (1);
}

/**
 * shash_table_get - The function retrieves the value
 * associated with a key in a sorted hash table
 * @ht: The sorted hash table.
 * @key: The key.
 * Return: The value associated with the key,
 * or NULL if the key couldn't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *table_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	table_node = ht->shead;
	while (table_node != NULL && strcmp(table_node->key, key) != 0)
		table_node = table_node->snext;

	return ((table_node == NULL) ? NULL : table_node->value);
}

/**
 * shash_table_print - This is to print a sorted hash table
 * @ht: The sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *table_node;

	if (ht == NULL)
		return;

	table_node = ht->shead;
	printf("{");
	while (table_node != NULL)
	{
		printf("'%s': '%s'", table_node->key, table_node->value);
		table_node = table_node->snext;
		if (table_node != NULL)
		printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - This prints a sorted hash table in reverse order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *table_node;

	if (ht == NULL)
		return;

	table_node = ht->stail;
	printf("{");
	while (table_node != NULL)
	{
		printf("'%s': '%s'", table_node->key, table_node->value);
		table_node = table_node->sprev;
		if (table_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - This deletes a sorted hash table
 * @ht: The sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *table_node, *tmp;

	if (ht == NULL)
		return;

	table_node = ht->shead;

	while (table_node)
	{
		tmp = table_node->snext;
		free(table_node->key);
		free(table_node->value);
		free(table_node);
		table_node = tmp;
	}

	free(ht->array);
	free(ht);
}
