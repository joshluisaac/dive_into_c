#include <stdio.h>

typedef struct
{
	unsigned char id;
	unsigned int phoneno;
	float salary;
} Employee;

void updateEmployee(Employee *employee);

int main(void)
{
	Employee employee;
	employee.id = 19;
	employee.phoneno = 424780142;
	employee.salary = 90.87656;
	updateEmployee(&employee);

	printf("%f\n", employee.salary);
}

void updateEmployee(Employee *employee)
{
	employee->salary = 40.99;
}