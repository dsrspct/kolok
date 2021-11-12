#include <stdio.h>

int main()
{
    const char *week[8] = {"", "понеділок", "вівторок", "середа", "четвер", "п'ятница", "субота", "неділя"};
    int day;
    scanf("%i", &day);
    if (day >= 1 && day <= 7)
    printf("%s\n", week[day]);
    else
    printf("error");
}