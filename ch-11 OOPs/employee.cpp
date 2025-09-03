#include <iostream>
using namespace std;

class Employee
{
public:
    int emp_id;
    char emp_name[30];
    int emp_age;
    char emp_role[50];
    int emp_salary;
    char emp_city[10];
    int emp_exprience;
    char emp_company_name[30];
};
int main()
{
    Employee employee1;
    Employee employee2;
    Employee employee3;
    Employee employee4;
    Employee employee5;

    // input----------------------------------------------------
    cout << endl
         << "Employee-1 Input..." << endl
         << endl;

    cout << "Enter Employee Id : ";
    cin >> employee1.emp_id;
    cout << "Enter Employee name : ";
    cin >> employee1.emp_name;
    cout << "Enter Employee age : ";
    cin >> employee1.emp_age;
    cout << "Enter Employee role : ";
    cin >> employee1.emp_role;
    cout << "Enter Employee salary : ";
    cin >> employee1.emp_salary;
    cout << "Enter Employee city : ";
    cin >> employee1.emp_city;
    cout << "Enter Employee experience : ";
    cin >> employee1.emp_exprience;
    cout << "Enter Employee company name : ";
    cin >> employee1.emp_company_name;

    cout << endl
         << "Employee-2 Input..." << endl
         << endl;

    cout << "Enter Employee Id : ";
    cin >> employee2.emp_id;
    cout << "Enter Employee name : ";
    cin >> employee2.emp_name;
    cout << "Enter Employee age : ";
    cin >> employee2.emp_age;
    cout << "Enter Employee role : ";
    cin >> employee2.emp_role;
    cout << "Enter Employee salary : ";
    cin >> employee2.emp_salary;
    cout << "Enter Employee city : ";
    cin >> employee2.emp_city;
    cout << "Enter Employee experience : ";
    cin >> employee2.emp_exprience;
    cout << "Enter Employee company name : ";
    cin >> employee2.emp_company_name;

    cout << endl
         << "Employee-3 Input..." << endl
         << endl;

    cout << "Enter Employee Id : ";
    cin >> employee3.emp_id;
    cout << "Enter Employee name : ";
    cin >> employee3.emp_name;
    cout << "Enter Employee age : ";
    cin >> employee3.emp_age;
    cout << "Enter Employee role : ";
    cin >> employee3.emp_role;
    cout << "Enter Employee salary : ";
    cin >> employee3.emp_salary;
    cout << "Enter Employee city : ";
    cin >> employee3.emp_city;
    cout << "Enter Employee experience : ";
    cin >> employee3.emp_exprience;
    cout << "Enter Employee company name : ";
    cin >> employee3.emp_company_name;

    cout << endl
         << "Employee-4 Input..." << endl
         << endl;

    cout << "Enter Employee Id : ";
    cin >> employee4.emp_id;
    cout << "Enter Employee name : ";
    cin >> employee4.emp_name;
    cout << "Enter Employee age : ";
    cin >> employee4.emp_age;
    cout << "Enter Employee role : ";
    cin >> employee4.emp_role;
    cout << "Enter Employee salary : ";
    cin >> employee4.emp_salary;
    cout << "Enter Employee city : ";
    cin >> employee4.emp_city;
    cout << "Enter Employee experience : ";
    cin >> employee4.emp_exprience;
    cout << "Enter Employee company name : ";
    cin >> employee4.emp_company_name;

    cout << endl
         << "Employee-5 Input..." << endl
         << endl;

    cout << "Enter Employee Id : ";
    cin >> employee5.emp_id;
    cout << "Enter Employee name : ";
    cin >> employee5.emp_name;
    cout << "Enter Employee age : ";
    cin >> employee5.emp_age;
    cout << "Enter Employee role : ";
    cin >> employee5.emp_role;
    cout << "Enter Employee salary : ";
    cin >> employee5.emp_salary;
    cout << "Enter Employee city : ";
    cin >> employee5.emp_city;
    cout << "Enter Employee experience : ";
    cin >> employee5.emp_exprience;
    cout << "Enter Employee company name : ";
    cin >> employee5.emp_company_name;

    //  output-----------------------------
    cout << endl
         << endl
         << "Employee-1 Output..." << endl
         << endl;

    cout << "Employee Id\t:" << employee1.emp_id << endl;
    cout << "Employee name\t:" << employee1.emp_name << endl;
    cout << "Employee age\t:" << employee1.emp_age << endl;
    cout << "Employee role\t:" << employee1.emp_role << endl;
    cout << "Employee salary\t:" << employee1.emp_salary << endl;
    cout << "Employee city\t:" << employee1.emp_city << endl;
    cout << "Employee experience\t:" << employee1.emp_exprience << endl;
    cout << "Employee company name\t:" << employee1.emp_company_name << endl;

    cout << endl
         << "Employee-2 Output..." << endl
         << endl;

    cout << "Employee Id\t:" << employee2.emp_id << endl;
    cout << "Employee name\t:" << employee2.emp_name << endl;
    cout << "Employee age\t:" << employee2.emp_age << endl;
    cout << "Employee role\t:" << employee2.emp_role << endl;
    cout << "Employee salary\t:" << employee2.emp_salary << endl;
    cout << "Employee city\t:" << employee2.emp_city << endl;
    cout << "Employee experience\t:" << employee2.emp_exprience << endl;
    cout << "Employee company name\t:" << employee2.emp_company_name << endl;

    cout << endl
         << "Employee-3 Output..." << endl
         << endl;

    cout << "Employee Id\t:" << employee3.emp_id << endl;
    cout << "Employee name\t:" << employee3.emp_name << endl;
    cout << "Employee age\t:" << employee3.emp_age << endl;
    cout << "Employee role\t:" << employee3.emp_role << endl;
    cout << "Employee salary\t:" << employee3.emp_salary << endl;
    cout << "Employee city\t:" << employee3.emp_city << endl;
    cout << "Employee experience\t:" << employee3.emp_exprience << endl;
    cout << "Employee company name\t:" << employee3.emp_company_name << endl;

    cout << endl
         << "Employee-4 Output..." << endl
         << endl;

    cout << "Employee Id\t:" << employee4.emp_id << endl;
    cout << "Employee name\t:" << employee4.emp_name << endl;
    cout << "Employee age\t:" << employee4.emp_age << endl;
    cout << "Employee role\t:" << employee4.emp_role << endl;
    cout << "Employee salary\t:" << employee4.emp_salary << endl;
    cout << "Employee city\t:" << employee4.emp_city << endl;
    cout << "Employee experience\t:" << employee4.emp_exprience << endl;
    cout << "Employee company name\t:" << employee4.emp_company_name << endl;

    cout << endl
         << "Employee-5 Output..." << endl
         << endl;

    cout << "Employee Id\t:" << employee5.emp_id << endl;
    cout << "Employee name\t:" << employee5.emp_name << endl;
    cout << "Employee age\t:" << employee5.emp_age << endl;
    cout << "Employee role\t:" << employee5.emp_role << endl;
    cout << "Employee salary\t:" << employee5.emp_salary << endl;
    cout << "Employee city\t:" << employee5.emp_city << endl;
    cout << "Employee experience\t:" << employee5.emp_exprience << endl;
    cout << "Employee company name\t:" << employee5.emp_company_name << endl;
    return 0;
}