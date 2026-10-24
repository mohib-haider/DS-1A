#include <stdio.h>
void printSensorData(void *data, char type){
    if (type == 'f') {
        float *t = (float *)data;
        printf("Temperature: %.1f C\n", *t);
    } else if (type == 'i') {
        int *m = (int *)data;
        if (*m == 1) printf("Motion Detected\n");
        else printf("No Motion\n");
    } else if (type == 'c') {
        char *d = (char *)data;
        if (*d == 'O') printf("Door Open\n");
        else printf("Door Closed\n");
    }
}
int main(){
    float temperature = 27.5;
    int motion = 1;
    char door = 'C';
    printSensorData(&temperature, 'f');
    printSensorData(&motion, 'i');
    printSensorData(&door, 'c');
    return 0;
}
