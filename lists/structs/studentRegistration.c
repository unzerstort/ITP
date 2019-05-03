#include<stdio.h>

typedef struct
{
	long int id;
	char name[30];
} Professor;

typedef struct
{
	char code[10];
	char name[40];
	Professor professor;
} Course;

typedef struct
{
	long int enrollment;
	char name[30];
	Course course;
} Student;

Student newStudent(void);
Course newCourse(void);
Professor newProfessor(void);
void printStudent(Student);
void printCourse(Course);
void printProfessor(Professor);

int main()
{
	Student student;
	Course course;
	Professor professor;

	student = newStudent();
	course = newCourse();
	professor = newProfessor();

	printStudent(student);
	printCourse(course);
	printProfessor(professor);

	return 0;
}

Student newStudent()
{
	Student s;

	printf("Enter the student's registration below:\n");
	printf("Name: ");
	scanf(" %[^\n]s", s.name);
	printf("Enrollment: ");
	scanf(" %d", &s.enrollment);
	
	return s;
}

Course newCourse()
{
	Course c;

	printf("Course name: ");
	scanf(" %[^\n]s", c.name);
	printf("Course code: ");
	scanf(" %[^\n]s", c.code);

	return c;
}

Professor newProfessor()
{
	Professor p;

	printf("Course professor: ");
	scanf(" %[^\n]s", p.name);
	printf("Professor's ID: ");
	scanf(" %d", &p.id);
	printf("\n");

	return p;
}

void printStudent(Student student)
{
	printf("Student Information\n");
	printf("\tName: %s\n", student.name);
	printf("\tEnrollment: %d\n", student.enrollment);

	return;
}

void printCourse(Course course)
{
	printf("\nCourse Information\n");
	printf("\tName: %s\n", course.name);
	printf("\tCode: %s\n", course.code);
	
	return;
}

void printProfessor(Professor professor)
{
	printf("\tProfessor: %s\n", professor.name);
	printf("\tProfessor's ID number: %d\n", professor.id);

	return;
}
