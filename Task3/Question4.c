/*QUESTION#4
A car travelled back and forth from point A to point B. With a distance being (single trip) 1207KM. During
the forward trip fuel price was 118/liter while returning it was 123/liter. Calculate the total fuel cost
(both ways) and the fuel consumed (total trip). Use the car’s fuel average as input from the user (Input
must be positive make some restrictions on only accepting positive input)*/

#include <stdio.h>

int main() {
    const float DISTANCE_ONE_WAY = 1207.0;
    const float FUEL_PRICE_FORWARD = 118.0;
    const float FUEL_PRICE_RETURN = 123.0;

    float fuelAverage, fuelConsumedForward, fuelConsumedReturn;
    float totalFuelConsumed, totalFuelCostForward, totalFuelCostReturn, totalFuelCost;

    printf("Enter the car's fuel average (positive number): ");
    scanf("%f", &fuelAverage);

    if (fuelAverage <= 0) {
        printf("Error: Fuel average must be a positive number.\n");
        return 1;  // Exit the program with an error code
    }

    fuelConsumedForward = DISTANCE_ONE_WAY / fuelAverage;
    fuelConsumedReturn = DISTANCE_ONE_WAY / fuelAverage;
    
    totalFuelConsumed = fuelConsumedForward + fuelConsumedReturn;
    totalFuelCostForward = fuelConsumedForward * FUEL_PRICE_FORWARD;
    totalFuelCostReturn = fuelConsumedReturn * FUEL_PRICE_RETURN;
    totalFuelCost = totalFuelCostForward + totalFuelCostReturn;

    printf("Total fuel consumed for the round trip: %.2f liters\n", totalFuelConsumed);
    printf("Total fuel cost for the forward trip: %.2f\n", totalFuelCostForward);
    printf("Total fuel cost for the return trip: %.2f\n", totalFuelCostReturn);
    printf("Total fuel cost for the round trip: %.2f\n", totalFuelCost);

    return 0;
}
