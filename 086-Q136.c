#include <stdio.h>
#include <string.h>

enum menu { ADD, SUBTRACT, MULTIPLY };

int main()
{
    char op[15];
    int a, b;
    enum menu m;

    scanf("%s %d %d", op, &a, &b);

    if(strcmp(op, "ADD") == 0)
        m = ADD;
    else if(strcmp(op, "SUBTRACT") == 0)
        m = SUBTRACT;
    else if(strcmp(op, "MULTIPLY") == 0)
        m = MULTIPLY;
    else {
        printf("Invalid Operation");
        return 0;
    }

    switch(m)
    {
        case ADD:       printf("%d", a + b); break;
        case SUBTRACT:  printf("%d", a - b); break;
        case MULTIPLY:  printf("%d", a * b); break;
    }

    return 0;
}
