#include <stdio.h>
#include <time.h>

int main() {
    time_t timer;
    struct tm* t;

    timer = time(NULL);
    t = localtime(&timer);

    printf("%d-%02d-%02d\n", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);

    return 0;
}