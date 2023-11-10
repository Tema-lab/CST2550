#include <iostream>
#include <string>
using namespace std;

struct Employee{
    string firstName;
    string lastName;
    int ID;
    string email;
    string phoneNumber;
    string salary;
    string manager;
};

int main() {
    Employee* manager_ptr =  new Employee;
    Employee emp1;
    Employee emp2;

    manager_ptr->firstName = "Mr.Tim";
    manager_ptr->lastName = "Crossley",
    manager_ptr->ID = 1;
    manager_ptr->email = "mrTim1@gmail.com";
    manager_ptr->phoneNumber = 7789752623;
    manager_ptr->salary = "320,000$";

    emp1.firstName = "Artem";
    emp1.lastName = "Halis",
    emp1.ID = 1997;
    emp1.email = "artemH123@gmail.com";
    emp1.phoneNumber = 7762825927;
    emp1.salary = "180,000$";
    emp1.manager = manager_ptr->firstName;

    emp2.firstName = "Bob";
    emp2.lastName = "Marley",
    emp2.ID = 879;
    emp2.email = "bobM879@gmail.com";
    emp2.phoneNumber = 7798076378;
    emp2.salary = "210,000$";
    emp2.manager = manager_ptr->firstName;

    cout << "Emp1: " << emp1.firstName << endl;
    cout << "Emp2: " << emp2.firstName << endl;
    cout << "Manager firstname: " << manager_ptr->firstName;

    return 0;
}
