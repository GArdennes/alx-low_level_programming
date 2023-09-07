0x1A. C - Hash tables
Learning Objectives

1 What is a hash function
2 What makes a good hash function
3 What is a hash table, how do they work and how to use them
4 What is a collision and what are the main ways of dealing with collisions in the context of a hash table
5 What are the advantages and drawbacks of using hash tables
6 What are the most common use cases of hash tables

Tasks
0. >>> ht = {}
Write a function “hash_table_t *hash_table_create(unsigned long int size)” that creates a hash table where “size” is the size of the array.
Requirements
Returns a pointer to the newly created hash table
If something went wrong, return NULL

Algorithm
Define the struct for the hash table and a struct for the linked list used for chaining
Implement the hash table creation function
Check the inputs for validity
Allocate memory for the hash table object
Initialize the hash table size to the input argument
Initialize the hash table’s buckets/array according the given size
Set all of the elements in the hash table array to NULL
Return the hash table


1. djb2
Write a hash function “unsigned long int hash_djb2(const unsigned char *str)” implementing the djb2 algorithm.
Requirements
You are allowed to copy and past the function

Algorithm
Initialize the hash value as 5381
For each character in the string
Multiply the hash value by 33
XOR the hash value with the character’s ASCII value
Return the hash value


2. key -> index
Write a function “unsigned long int key_index(const unsigned char *key, unsigned long int size)” that gives you the index of a key, where key is the key and the size is the size of the array of the hash table
Requirements
This function should use the hash_djb2 function that you wrote earlier
Returns the index at which the key/value pair should be stored in the array of the hash table
You will have to use this hash function for all the next tasks

Algorithm
Calculate the hash value of the key using a hash function
Divide the hash value by the size of the array
Take the remainder of the division as the index of the key


3. >>> ht['betty'] = 'cool'
Write a function “int hash_table_set(hash_table_t *ht, const char *key, const char *value)” that adds an element to the hash table, where ht is the hash table you want to add or update the key/value to. “Key” is the key. Key cannot be an empty string. “Value” is the value associated with the key. Value must be duplicated. Value can be an empty string
Requirements
Returns 1 if successful 0 otherwise
In case of collision, add the new node at the beginning of the list

Algorithm
Check if the key is empty. If it is, return 0.
Get the index of the key using the key_index() function.
Iterate over the bucket at the index.
If the key is found, update the value associated with the key.
Otherwise, add a new node to the bucket with the key and value
Return 1


4. >>> ht['betty']
Write a function “char *hash_table_get(const hash_table_t *ht, const char *key)” that retrieves a value associated with a key, where ht is the hash table you want to look into and key is the key you are looking for.
Requirements
Returns the value associated with the element, or NULL if key couldn’t be found

Algorithm
Get the index of the key using the key_index function
Iterate over the array at the index
If the key is found, return the value associated with the key.
Otherwise, return NULL


5. >>> print(ht)
Write a function “void hash_table_print(const hash_table_t *ht)” that prints a hash table where ht is the hash table. You should print the key/value in the order that they appear in the array of the hash table i.e. order: array, list
Requirement
If ht is NULL, don’t print anything

Algorithm
1.Check if ht is NULL. If it is, do nothing.
2.Iterate over the buckets in the hash table.
3.For each bucket, iterate over the nodes in the bucket.
4.Print the key and value of each node.


6. >>> del ht
Write a function “void hash_table_delete(hash_table_t *ht)” that deletes a hash table, where ht is the hash table.

Algorithm
Iterate over the buckets in the hash table.
For each bucket, iterate over the nodes in the bucket and delete each node.
Free the memory allocated for the hash table.

