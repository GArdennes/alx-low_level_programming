#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - structure for dog
 * @name: String to check
 * @age: Number to check
 * @owner: String to check
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
