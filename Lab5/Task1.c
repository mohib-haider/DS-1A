#include <stdio.h>
int main(){
	int Prog_marks, Maths_marks, AI_marks;
	float Attendance, Average;
	printf("Enter Marks of each Subject\n");
	scanf("%d %d %d", &Prog_marks, &Maths_marks, &AI_marks);
	scanf("%f", &Attendance);
	if (((Prog_marks >= 50) && (Maths_marks >= 50)) && ((AI_marks >= 50) && (Attendance >= 75))){
		Average = (Prog_marks + AI_marks + Maths_marks) / 3;
		if (Average >= 80){
		printf("Excellent");
	}	else if (Average >= 70){
		printf("Very Good");}
		else if (Average >= 60){
		printf("Good");}
		else if (Average >= 50){
		printf("Satisfactory");}
		else{printf("Poor");
		}
	}
	else{
		printf("Student is Not Eligible");
	}
	return 0;
}
