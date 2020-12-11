#include <stdio.h>

typedef struct
{
	char name[30];
	unsigned char id;
	unsigned int phoneno;
	float salary;

} Employee;

void updateEmployee(Employee *employee);

int main(void)
{
	//members of a struct can be set like this
	Employee employee = {"Joshua", 19, 424780142, 90.87656};

	//or

	//individually like this
	// employee.id = 19;
	// employee.phoneno = 424780142;
	// employee.salary = 90.87656;

	printf("Name: %s. Id: %d. Phone#: %d. Salary: %f\n", employee.name, employee.id,
	       employee.phoneno, employee.salary);

	Employee *employeePtr = &employee; //pointer to a struct
	updateEmployee(employeePtr);

	//accessing members of a struct using struct pointer
	printf("Name: %s. Id: %d. Phone#: %d. Salary: %f\n", employeePtr->name, employeePtr->id,
	       employeePtr->phoneno, employeePtr->salary);
}

void updateEmployee(Employee *employee)
{
	employee->salary = 40.99;
	printf("Updated struct\n");
}