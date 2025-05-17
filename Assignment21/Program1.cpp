/*
1. Define a structure Employee with member variables id, name, salary
2. Write a function to take input employee data from the user. [ Refer structure from
question 1 ]
3. Write a function to display employee data. [ Refer structure from question 1 ]
4. Write a function to find the highest salary employee from a given array of 10
employees. [ Refer structure from question 1]
5. Write a function to sort employees according to their salaries [ refer structure from
question 1]
6. Write a function to sort employees according to their names [refer structure from
question 1]
*/

#include<stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

void inputEmployee(struct Employee *e) {
    printf("Enter ID: ");
    scanf("%d", &e->id);
    printf("Enter Name: ");
    scanf("%s", e->name);
    printf("Enter Salary: ");
    scanf("%f", &e->salary);
}
void displayEmployee(struct Employee e) {
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
}

struct Employee findHighestSalary(struct Employee emp[], int n) {
    struct Employee max = emp[0];
    for(int i = 1; i < n; i++) {
        if(emp[i].salary > max.salary)
            max = emp[i];
    }
    return max;
}
void sortBySalary(struct Employee emp[], int n) {
    struct Employee temp;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(emp[i].salary > emp[j].salary) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
}


void sortByName(struct Employee emp[], int n) {
    struct Employee temp;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(strcmp(emp[i].name, emp[j].name) > 0) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
}
int main() {
    // Demo for 1 to 6
    struct Employee emp[3];
    for(int i = 0; i < 3; i++) inputEmployee(&emp[i]);

    printf("\nAll Employees:\n");
    for(int i = 0; i < 3; i++) displayEmployee(emp[i]);

    struct Employee high = findHighestSalary(emp, 3);
    printf("\nHighest Salary: %s with %.2f\n", high.name, high.salary);

    sortBySalary(emp, 3);
    printf("\nSorted by Salary:\n");
    for(int i = 0; i < 3; i++) displayEmployee(emp[i]);

    sortByName(emp, 3);
    printf("\nSorted by Name:\n");
    for(int i = 0; i < 3; i++) displayEmployee(emp[i]);

    return 0;
}