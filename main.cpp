#include <iostream>

int main() {
    int day_number;
    printf("Enter day number:");
    scanf("%i", &day_number);

    switch (day_number) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Error");
    }
    return 0;
}
