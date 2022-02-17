#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int god;
    char strefa,car;
    time_t teraz;
    time(&teraz);

    printf("Pick parking zone [A; B; C; D]\n");
    scanf("%c", &strefa);

    switch(strefa){
    case 'a':
    case 'A':
        printf("Parking cost 2 zl/h \n");
    break;
    case 'b':
    case 'B':
        printf("Parking cost 3 zl/h \n");
    break;
    case 'c':
    case 'C':
        printf("Parking cost 4 zl/h \n");
    break;
    case 'd':
    case 'D':
        printf("Parking cost 5 zl/h \n");
    break;
    default:
        printf("Error \n");
    break;
    }

printf("Enter license plate number:\n");
scanf("%s", &car);

printf("How many hours:\n");
scanf("%lf", &god);

printf("Parking paid for at : %s \n", ctime(&teraz));;

puts("Thank You");
    return 0;
}

