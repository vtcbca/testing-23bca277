#include<iostream.h>
#include<conio.h>
class employee
{
	public:
	int eid,salary;
	char ename[20],dept[20];
	employee(int id,char name,char dept,int sal);
// method to print employee details
	void printemp()
	{
		cout<<"enter id :"<<eid;
		cout<<"enter name :"<<ename;
		cout<<"enter department :"<<dept;
		cout<<"enter salary:"<<salary;
	}
//getter method for employee name
	char getname()
	{
		return ename;
	}
};
void main() {
    // Input 5 employee data using constructor
    for (int i = 0; i < 5; i++) {
	int id;
	string name, department;
	double salary;
	cout << "Enter employee " << i + 1 << " details:" << endl;
	cout << "ID: ";
	cin >> id;
	cout << "Name: ";
	cin >> name;
	cout << "Department: ";
	cin >> department;
	cout << "Salary: ";
	cin >> salary;
    }

    // Print employee data using constructor
    for (int a = 0; a < 5; a++) {
	cout << "Employee " << i + 1 << " details:" << endl;
	cout << endl;
    }

    // Implement searching employee record based on employee name
    char searchName;
    cout << "Enter employee name to search: ";
    cin >> searchName;
    for (int l = 0; l < 5; l++) {
	if (employees[i].getName() == searchName) {
	    cout << "Employee found:" << endl;
	    employees[i].printEmployee();
	    break;
	}
    }

    getch();
}
