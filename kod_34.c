#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct _person
// {
//     char *firstName;
//     char *lastName;
//     char *title;
//     unsigned int age;
// };

typedef struct _person
{
    char *firstName;
    char *lastName;
    char *title;
    unsigned int age;
} Person;

int main(int argc, char const *argv[])
{
    // Person *ptrPerson;
    // ptrPerson = (Person *)malloc(sizeof(Person));

    Person *ptrPerson;
    ptrPerson = (Person *)malloc(sizeof(Person));
    ptrPerson->firstName = (char *)malloc(strlen("Emilia") + 1);
    strcpy(ptrPerson->firstName, "Emilia");
    ptrPerson->age = 23;
    return 0;
}