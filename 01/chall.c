#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[8];
    int is_admin = 0;

    // uncomment if you want to see actual addresses
    // printf("%p %p\n", &is_admin, &name);

    puts("what's your name?");
    gets(&name);

    if (is_admin) {
        system("sh");
    } else {
        printf("you're not an admin, %s!", name);
    }
}
