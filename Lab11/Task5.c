#include <stdio.h>

struct HospitalRecord{
    int recordId;
    char ward[30];
    int daysAdmitted;
    struct PatientInfo{
        int patientId;
        char name[50];
        int age;
        char bloodGroup[5];
    } patient;
};

int main(){
    struct HospitalRecord record = {
        5001,
        "Emergency",
        3,
        {2001, "Ali Raza", 45, "B+"}
    };

    struct HospitalRecord *ptr = &record;

    printf("Record ID: %d\n", ptr->recordId);
    printf("Ward: %s\n", ptr->ward);
    printf("Days Admitted: %d\n", ptr->daysAdmitted);
    printf("Patient ID: %d\n", ptr->patient.patientId);
    printf("Patient Name: %s\n", ptr->patient.name);
    printf("Patient Age: %d\n", ptr->patient.age);
    printf("Blood Group: %s\n", ptr->patient.bloodGroup);

    return 0;
}
