# THE C HASH TABLE

# C Hash Table Implementation

Hash tables, also known as hash maps or associative arrays, are fundamental data structures that allow you to store and retrieve values based on keys.

## How it Works


1. **Hash Function:** A hash function is used to convert a key into an index in the hash table's underlying array.
The goal is to evenly distribute keys across the array to minimize collisions (when two keys hash to the same index).


2. **Array:** The hash table consists of an array, where each element can hold a key-value pair. The size of this array is determined during hash table creation and can vary depending on the specific implementation.


3. **Collision Handling:** Since hash functions may produce the same index for different keys (collisions), hash tables need a mechanism to handle collisions. This implementation uses chaining, where each array element is a linked list of key-value pairs.


4. **Insertion and Lookup:** To insert a key-value pair into the hash table, you apply the hash function to the key to determine the index and then store the value at that index. For lookups, you use the same hash function to find the index and retrieve the value.


Example:

```
#include <stdio.h>
#include "hashtable.h"

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	HashTable* ht = createHashTable(100);

	insert(ht, "apple", 42);
	insert(ht, "banana", 17);

	printf("Value for key 'apple': %d\n", lookup(ht, "apple"));
	printf("Value for key 'banana': %d\n", lookup(ht, "banana"));
	printf("Value for key 'cherry': %d\n", lookup(ht, "cherry"));

	/* Clean up */
	destroyHashTable(ht);

	return 0;
} /* End function */
