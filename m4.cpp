#include <iostream>
using namespace std;

int main() {

    //Employee Information
    
    string employee_name;
    int payroll_date, employee_id,emp_salary,lates;
    int lates_to_hour, hourly_rate;
    double monthly_salary;
    float tax = 0.12;

    // constant values 
    int const Philheaalth = 1000;
    int const PagIbig = 800;
    int const SSS = 1200;


    cout << "Employee Indformation:" << endl;

    cout << "Payroll Period (Date):" << endl;
    cin >> payroll_date;

    cout << "Employee ID:" << endl;
    cin >> employee_id;

    cout << "Employee Name:" << endl;
    cin >> employee_name;

    cout << "Monthly Salary:" << endl;
    cin >> monthly_salary;

   // lates and absences input
    cout << "Lates and absences:" << endl;
    cin >> lates;

    // process for converting minutes to hours
    lates_to_hour = lates / 60;

    // hourly rate 
    hourly_rate = monthly_salary / 30;



   // [process for deduction]

    cout<< "Deductions"<<endl;
    cout << "Lates and absences:" << endl;
    cin >> lates;

   
    cout << "Philhealth employee contribution:" << Philheaalth << endl;
    cout << " Pag-ibig employee contribution:" << PagIbig << endl;
    cout << "SSS employee contribution:" << SSS << endl;
    cout << "Tax (12 percent of monthly salary:)";

    return 0;
}
