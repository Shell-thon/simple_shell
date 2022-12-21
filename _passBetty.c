#include "greet.h"

char greeting[BUFFER_SIZE];

char *greet(char *name)
{
    sprintf(greeting, "Hello, %s! I hopes this passes betty check?", name);
    return greeting;
}
