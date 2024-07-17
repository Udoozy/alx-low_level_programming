#ifndef SEARCH_ALGOS_H_
#define SEARCH_ALGOS_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - singly linked list struct
 *
 * @n: Integer
 * @index: The node index
 * @next: Pointer to the next node
 *
 * Description: singly linked list for search algorithm
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;
/**
 * struct skiplist_s - expess lane singly link list
 *
 * @n: Integer
 * @index: The node index
 * @next: Pointer of the next node
 * @express: express node ponter to the next node
 *
 * Description: express lane singly link list pointer
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
