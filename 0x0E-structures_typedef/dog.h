#IFNDEF DOG_H
#DEFINE DOG_H

/**
 * struct dog - building a struct for the header file 
 * @name: *char
 * @age:  float 
 * @owner:*char 
 *
 */

struct dog 
{
	char *name;
	char *owner;
	float age;
};	




void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#ENDIF
