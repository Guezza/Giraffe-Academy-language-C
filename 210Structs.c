
    struct student {
    char name[50];
    char major [50];
    int age;
    double gpa;
    };
int main()
{
    struct student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strucpy(student1.name, "Jim");
    struct student student2;
    student1.age = 20;
    student1.gpa = 2.5;
    strucpy(student1.name, "Pan");
    strucpy(student1.major, "A");
    printf("%f", student1.gpa);
    return 0;
}
