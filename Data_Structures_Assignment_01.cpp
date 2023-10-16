//Muhammad Uzair Choudhary_22I-2681_Assignment # 01

#include <iostream>
#include<string>
#include "header.h"

using namespace std;

template<typename T>
T displayMenu() {

    T input = 0;
    char in;
    cout << "\t\t\t\t=====================================" << endl;
    cout << "\t\t\t\t           Main Menu                " << endl;
    cout << "\t\t\t\t=====================================" << endl;
    cout << "\t\t\t\tOptions:" << endl;
    cout << "\t\t\t\t1. Scenario 1" << endl;
    cout << "\t\t\t\t2. Scenario 2" << endl;
    cout << "\t\t\t\t3. Scenario 3" << endl;
    cout << "\t\t\t\t4. Scenario 4" << endl;
    cout << "\t\t\t\t5. Scenario 5" << endl;
    cout << "\t\t\t\t6. Exit" << endl;
    cout << "\t\t\t\t=====================================" << endl;
    cin >> in;

    if (in == 6)
        exit(0);

    input = in;

    return input;
}



int main() {
    EmployeesData<struct EmployeeData, string>  employees[20];
    char scenario;

    employees->getData(employees);

    scenario = displayMenu<char>();
    
    switch (scenario)
    {
    case '1':
        employees->CalculateAverageSalary(employees);
        employees->TotalEmployees(employees, 10);
        employees->AverageTenure(employees, 10);
        employees->Designations(employees, 10);
        employees->LongestTenure(employees, 10);

        break;

    case '2':
        employees->HighestSalary(employees, 10);
        employees->LowestSalary(employees,10);
        employees->SalaryRange(employees, 10);
        employees->MedianSalary(employees, 10);
        employees->AverageSalaries(employees, 10);
        break;

    case '3':
        employees->LongestTenureEmployee(employees, 10);
        employees->ShortestTenure(employees, 10);
        employees->AvgTenureWRTdesignations(employees, 10);
        employees->HighestPayingDesignation(employees, 10);
        break;

    case '4':
        employees->RankBasedOnSalaries(employees, 10);
        break;

    case '5':
        employees->RankBasedOnTenure(employees, 10);
        break;

    default:

        break;
    }
    
    return 0;
}
