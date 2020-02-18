#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char pluralNoun[20];
    char celebrity[20];
    printf("Enter a color:");
    scanf("%s", &color);
    scanf("%s", &pluralNoun);
    scanf("%s", &celebrity);

    printf("Roses are {color}\n");
    printf("{plural-noun}are blue\n");
    printf("I love {celebrity}\n");
}
