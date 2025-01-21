#include <stdio.h>
struct Car {
    int carID;
    char model[50];
    float rentalRatePerDay;
};

int main() {
    struct Car cars[3];
    int i, days;
    float totalCost = 0.0;

    
    printf("ENTER DETAILS \n");
    for (i = 0; i < 3; i++) {
        printf("Car %d\n", i + 1);
        printf("Enter Car ID: ");
        scanf("%d", &cars[i].carID);
        printf("Enter Model: ");
        scanf(" %[^\n]", cars[i].model);  
        printf("Enter Rental Rate per Day: ");
        scanf("%f", &cars[i].rentalRatePerDay);
        printf("\n");
    }

    
    printf("Enter the number of days for rental: ");
    scanf("%d", &days);

    
    for (i = 0; i < 3; i++) {
        totalCost += cars[i].rentalRatePerDay * days;
    }

    
    printf("\nCar Rental Details:\n");
    for (i = 0; i < 3; i++) {
        printf("Car ID: %d, Model: %s, Rate/Day: %.2f\n", 
               cars[i].carID, cars[i].model, cars[i].rentalRatePerDay);
    }
    printf("\nTotal Rental Cost for %d days: %.2f\n", days, totalCost);

    return 0;
}

