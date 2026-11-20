#include <stdio.h>
#include <string.h>

#define TOLL_RATE 50

void processVehicle(char vehicleType[]){
    static int totalVehicles = 0;
    static int totalCollection = 0;

    if (strcmp(vehicleType, "REPORT") == 0){
        printf("\nToll Plaza Collection Report\n");
        printf("Toll Rate: %d PKR per vehicle\n", TOLL_RATE);
        printf("Total Vehicles Processed: %d\n", totalVehicles);
        printf("Total Revenue: %d PKR\n", totalCollection);
        return;
    }

    totalVehicles++;
    totalCollection += TOLL_RATE;

    printf("Vehicle: %s | Toll: %d PKR | Vehicles So Far: %d | Collection So Far: %d PKR\n",
           vehicleType, TOLL_RATE, totalVehicles, totalCollection);
}

int main(){
    processVehicle("Car");
    processVehicle("Truck");
    processVehicle("Bus");
    processVehicle("Motorcycle");
    processVehicle("Van");
    processVehicle("REPORT");

    return 0;
}
