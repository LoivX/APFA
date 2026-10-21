/*In this program i tried to create a structure defined with an other structure in it.
This is actually possible in C but in this peculiar usecase it doesn't make any real sense because an array of studens is already a class.*/


#include <stdio.h>

#define CLASS_SIZE 30

struct student {
    char fullName[50];
    int age;
    char grade;
}

struct class {
    struct student students[CLASS_SIZE];
    char section;
    int year;
};

int main() {
    // Initialize an array of students (used autocomplete to fill students with random names, ages and grades)
    struct student students[CLASS_SIZE] = {
        {"Alice Johnson", 19, 'A'},
        {"Bob Brown", 22, 'C'},
        {"Charlie Davis", 20, 'B'},
        {"Diana Evans", 21, 'A'},
        {"Ethan Foster", 19, 'C'},
        {"Fiona Green", 22, 'B'},
        {"George Harris", 20, 'A'},
        {"Hannah Irving", 21, 'C'},
        {"Ian Jackson", 19, 'B'},
        {"Julia King", 22, 'A'},
        {"Kevin Lee", 20, 'C'},
        {"Laura Martinez", 21, 'B'},
        {"Michael Nelson", 19, 'A'},
        {"Nina Owens", 22, 'C'},
        {"Oliver Parker", 20, 'B'},
        {"Paula Quinn", 21, 'A'},
        {"Quentin Roberts", 19, 'C'},
        {"Rachel Scott", 22, 'B'},
        {"Samuel Thompson", 20, 'A'},
        {"Tina Underwood", 21, 'C'},
        {"Ulysses Vega", 19, 'B'},
        {"Victoria White", 22, 'A'},
        {"William Xander", 20, 'C'},
        {"Xena Young", 21, 'B'},
        {"Yvonne Zimmerman", 19, 'A'},
        {"Zachary Allen", 22, 'C'}
    };

    struct class physics1 = {students, 'A', 2023};

    printf("Class Section: %c\n", physics1.section);
    printf("Class Year: %d\n", physics1.year);

}