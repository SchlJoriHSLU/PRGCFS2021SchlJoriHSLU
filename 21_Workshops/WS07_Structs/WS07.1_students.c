#include <stdio.h>


#define MAX_NAME_LENGTH 30
#define NUM_GRADES 6
#define NUM_STUDENTS 5

struct Student {
	char firstname[MAX_NAME_LENGTH];
	char lastname[MAX_NAME_LENGTH];
	float grades[NUM_GRADES];
	float average;
};
	
struct Student students[NUM_STUDENTS] = {	
[0].firstname = "Tony",	[0].lastname = "Stark",	[0].grades = {6.0, 5.8, 5.9, 6.0, 5.9, 6.0},
[1].firstname = "Peter",	[1].lastname = "Parker",	[1].grades = {4.5, 4.8, 5.8, 3.2, 5.9, 5.2},
[2].firstname = "Bruce",	[2].lastname = "Banner",	[2].grades = {5.5, 2.8, 5.3, 4.8, 5.4, 4.5},
[3].firstname = "Steve",	[3].lastname = "Rodgers",	[3].grades = {4.9, 3.9, 5.8, 2.3, 4.3, 5.4},
[4].firstname = "Natasha",	[4].lastname = "Romanoff",	[4].grades = {5.3, 5.2, 5.1, 5.7, 4.9, 5.9} };


void StudentGradeAverage( struct Student *Stud)
{
	float SumGrades = 0;
	for(int k = 0; k < NUM_GRADES; k++)
	{
		SumGrades = SumGrades + Stud->grades[k];
	}
	Stud->average = SumGrades/NUM_GRADES;
	printf(" Average: %.2f\n", Stud->average);
}

void NameOfStudents( struct Student *name)
{
	printf(" %s, \t %s   \t", name->lastname, name->firstname);
}
	
void GradeStudent( struct Student *allGrades)
{
	for(int n = 0; n < NUM_GRADES; n++)
	{
		printf(" %.2f,", allGrades->grades[n]);
	}
}




int main(int argc, char *argv[] ) 
{
	float ClassAverage = 0;
	for( int i = 0; i < NUM_STUDENTS; i++) 
	{
		NameOfStudents(&students[i]);
		GradeStudent(&students[i]);
		StudentGradeAverage(&students[i]);
		ClassAverage += students[i].average;
	}
	ClassAverage = ClassAverage/NUM_STUDENTS;
	printf("\n Class Average: %.2f\n", ClassAverage);
	return 0;
}
	


















