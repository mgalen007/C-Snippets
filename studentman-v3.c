#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{
    char name[20];
    int age;
    char class[3];
} Student;

typedef struct StudentNode
{
    bool head;
    bool tail;
    Student stud;
    struct StudentNode *next;
} StudentNode;

void initStudent(StudentNode *std, bool head, bool tail, const char *name, int age, const char *class, StudentNode *next)
{
    std->head = head;
    std->tail = tail;
    strcpy(std->stud.name, name);
    std->stud.age = age;
    strcpy(std->stud.class, class);
    std->next = next;
}

int main()
{
    StudentNode std1, std2, std3, std4, std5;
    initStudent(&std1, true, false, "Student A", 15, "Y1A", &std2);
    initStudent(&std2, false, false, "Student B", 16, "Y1B", &std3);
    initStudent(&std3, false, false, "Student C", 17, "Y1C", &std4);
    initStudent(&std4, false, false, "Student D", 17, "Y1A", &std5);
    initStudent(&std5, false, true, "Student E", 16, "Y1C", NULL);

    StudentNode *current = &std1;

    while (current != NULL) 
    {
        printf("Name: %s, Age: %d, Class: %s\n", current->stud.name, current->stud.age, current->stud.class);
        current = current->next;
    }

    return 0;
}
