#include <stdio.h>

#include <string.h>

enum traffic_light { RED, YELLOW, GREEN };

int main()
{
    char input[10];
    enum traffic_light signal;

    scanf("%s", input);

    if(strcmp(input, "RED") == 0)
        signal = RED;
    else if(strcmp(input, "YELLOW") == 0)
        signal = YELLOW;
    else if(strcmp(input, "GREEN") == 0)
        signal = GREEN;
    else {
        printf("Invalid input");
        return 0;
    }

    switch(signal)
    {
        case RED: printf("Stop"); break;
        case YELLOW: printf("Wait"); break;
        case GREEN: printf("Go"); break;
    }

    return 0;
}
