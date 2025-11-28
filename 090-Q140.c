#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender gender;
};

int main()
{
    char input[20];
    struct Person p;

    scanf("%s", input);   

    if(strcmp(input, "Gender=MALE") == 0)
        p.gender = MALE;
    else if(strcmp(input, "Gender=FEMALE") == 0)
        p.gender = FEMALE;
    else if(strcmp(input, "Gender=OTHER") == 0)
        p.gender = OTHER;
    else {
        printf("Invalid Input");
        return 0;
    }

    switch(p.gender)
    {
        case MALE:   printf("Male"); break;
        case FEMALE: printf("Female"); break;
        case OTHER:  printf("Other"); break;
    }

    return 0;
}
