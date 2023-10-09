#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE

/**
 * struct dog - a new type struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: The name will be used to store and display dog's name
 * The age will be used to store and display dog's age
 * The owner will be used to store and display dog's owner
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
