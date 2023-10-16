#pragma once
//Muhammad Uzair Choudhary_22I-2681_Assignment # 01

#include<iostream>
#include<fstream>

using namespace std;


template<typename T, typename str>
struct EmployeesData
{
	str name;
	str id;
	str date_of_joining;
	str designation;
	str salary;

    //Swap function
    template <typename T>
    void swap(T &t1, T &t2)
    {
        T temp = t1;
        t1 = t2;
        t2 = temp;
    }

    //************************************ Functions for Scenario # 01 ******************************************
    template <typename T>
    void getData(T employees[])
	{
        employees[20];
        string line;



        ifstream file("Employeedata.txt"); // Opening the file for reading

        if (!file.is_open()) {
            cout << "File not opened";
            exit(0);
        }


        for (int i = 0; !file.eof(); i++)
        {
            file >> line;
            file >> line;
            file >> line;
            getline(file, employees[i].name);

            file >> line;
            file >> line;
            getline(file, employees[i].id);

            file >> line;
            getline(file, employees[i].salary);

            file >> line;
            file >> line;
            file >> line;
            getline(file, employees[i].date_of_joining);

            file >> line;
            getline(file, employees[i].designation);
        }
	}

    template <typename T>
    void CalculateAverageSalary(T employees[])
    {
        int salaries[10];
        float sum = 0;
        for (int i = 0; i < 10; i++)
        {
            string temp;
            temp = employees[i].salary[2];
            temp += employees[i].salary[3];
            temp += employees[i].salary[5]; 
            temp += employees[i].salary[6];
            temp += employees[i].salary[7];

            salaries[i] = stoi(temp);

        }

        for (int i = 0; i < 10; i++)
        {
            sum += salaries[i];
        }
        cout << "The average salary of the employees is: $" << sum / 10.0 << endl;
    }

    template <typename T>
    void TotalEmployees(T employees[], int size)
    {
        int count;
        for (count = 0; employees[count].id != "\0"; count++)
        {
            count++;
        }
        cout << "Total Number of employees are: " << count << endl << endl;
    }

    template <typename T>
    void AverageTenure(T employees[], const int size)
    {
        string temp;
        int sum = 0;
        int tenures[10];
        for (int i = 0; i < size; i++)
        {
            temp = employees[i].date_of_joining[1];
            temp += employees[i].date_of_joining[2];
            temp += employees[i].date_of_joining[3];
            temp += employees[i].date_of_joining[4];

            tenures[i] = 2023 - stoi(temp);
        }

        for (int i = 0; i < size; i++)
        {
            sum += tenures[i];
        }

        cout << "The average tenure of employees in the company is: " << sum / size << " years.\n\n";
    }

    template <typename T>
    void Designations(T employees[], int size)
    {
        string designations[10];

        for (int i = 0; i < size; i++)
        {
            for (int j = 1; employees[i].designation[j] != '\0'; j++)
            {
                designations[i] += employees[i].designation[j];
            }
        }

        int repeatingDesignations[10] = { 0,0,0,0,0,0,0,0,0,0 };
        string stringDesignations[10];

        for (int i = 0; i < size; i++)
        {
            stringDesignations[i] = employees[i].designation;
        }

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (employees[i].designation == employees[j].designation)
                {
                    stringDesignations[j] = employees[i].designation;
                }
            }
        }

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (employees[i].designation == employees[j].designation)
                {
                    repeatingDesignations[i]++;
                }
            }
        }

        cout << endl;

        for (int i = 0; i < size; i++)
        {
            cout << endl << stringDesignations[i] << ": " << repeatingDesignations[i];
        }

    }

    template <typename T>
    void LongestTenure(T employees[], const int size)
    {
        string temp;
        int max = 0;
        int tenures[10];
        for (int i = 0; i < size; i++)
        {
            temp = employees[i].date_of_joining[1];
            temp += employees[i].date_of_joining[2];
            temp += employees[i].date_of_joining[3];
            temp += employees[i].date_of_joining[4];

            tenures[i] = 2023 - stoi(temp);
        }
        max = tenures[0];
        for (int i = 0; i < size; i++)
        {
            for (int j = 1; j < size - 1; j++)
            {
                if (max < tenures[j])
                {
                    max = tenures[j];
                }
            }
        }

        cout << "\nThe Longest tenure of employees in the company is: " << max << " years.\n\n";
    }


    //************************************ Functions for Scenario # 02 ******************************************
    template <typename T>
    void HighestSalary(T employees[], int size)
    {
        int salaries[10];
        float max = 0;
        for (int i = 0; i < 10; i++)
        {
            string temp;
            temp = employees[i].salary[2];
            temp += employees[i].salary[3];
            temp += employees[i].salary[5];
            temp += employees[i].salary[6];
            temp += employees[i].salary[7];

            salaries[i] = stoi(temp);

        }

        max = salaries[0];
        for (int i = 0; i < size; i++)
        {
            for (int j = 1; j < size - 1; j++)
            {
                if (max < salaries[j])
                {
                    max = salaries[j];
                }
            }
        }
        cout << "The Highest salary of the employees is: $" << max << endl;
    }

    template <typename T>
    void LowestSalary(T employees[], int size)
    {
        int salaries[10];
        float min = 0;
        for (int i = 0; i < 10; i++)
        {
            string temp;
            temp = employees[i].salary[2];
            temp += employees[i].salary[3];
            temp += employees[i].salary[5];
            temp += employees[i].salary[6];
            temp += employees[i].salary[7];

            salaries[i] = stoi(temp);

        }

        min = salaries[0];
        for (int i = 0; i < size; i++)
        {
            for (int j = 1; j < size - 1; j++)
            {
                if (min > salaries[j])
                {
                    min = salaries[j];
                }
            }
        }
        cout << "\nThe Lowest salary of the employees is: $" << min << endl;
    }

    template <typename T>
    void SalaryRange(T employees[], int size)
    {
        int salaries[10];
        float max = 0;
        float min = 0;
        for (int i = 0; i < 10; i++)
        {
            string temp;
            temp = employees[i].salary[2];
            temp += employees[i].salary[3];
            temp += employees[i].salary[5];
            temp += employees[i].salary[6];
            temp += employees[i].salary[7];

            salaries[i] = stoi(temp);

        }

        //Calculating Maximum Salary
        max = salaries[0];
        for (int i = 0; i < size; i++)
        {
            for (int j = 1; j < size - 1; j++)
            {
                if (max < salaries[j])
                {
                    max = salaries[j];
                }
            }
        }

        //Calculating Minimum Salary
        min = salaries[0];
        for (int i = 0; i < size; i++)
        {
            for (int j = 1; j < size - 1; j++)
            {
                if (min > salaries[j])
                {
                    min = salaries[j];
                }
            }
        }

        cout << "\nThe salary Range of the employees is: $" << max - min << endl;
    }

    template <typename T>
    void MedianSalary(T employees[], int size)
    {
        int salaries[10];
        float median = 0;
        for (int i = 0; i < 10; i++)
        {
            string temp;
            temp = employees[i].salary[2];
            temp += employees[i].salary[3];
            temp += employees[i].salary[5];
            temp += employees[i].salary[6];
            temp += employees[i].salary[7];

            salaries[i] = stoi(temp);

        }

        cout << "\nThe Median Salary of the employees is: $" << salaries[size/2] << endl;
    }

    template <typename T>
    void AverageSalaries(T employees[], int size)
    {
        int salaries[10];
        int sum[10] = { 0,0,0,0,0,0,0,0,0,0 };
        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            string temp;
            temp = employees[i].salary[2];
            temp += employees[i].salary[3];
            temp += employees[i].salary[5];
            temp += employees[i].salary[6];
            temp += employees[i].salary[7];

            salaries[i] = stoi(temp);

        }

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (employees[i].designation == employees[j].designation)
                {
                    sum[i] += salaries[j];
                    count++;
                }
            }
            sum[i] /= count;
        }


        cout << "\nThe Average salary of the employees with respect to is: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << endl << employees[i].designation << ": " << sum[i];
        }



    }


    //************************************ Functions for Scenario # 03 ******************************************
    template <typename T>
    void LongestTenureEmployee(T employees[], int size)
    {
        string temp;
        int max = 0;
        int tenures[10];
        for (int i = 0; i < size; i++)
        {
            temp = employees[i].date_of_joining[1];
            temp += employees[i].date_of_joining[2];
            temp += employees[i].date_of_joining[3];
            temp += employees[i].date_of_joining[4];

            tenures[i] = 2023 - stoi(temp);
        }
        max = tenures[0];
        for (int i = 0; i < size; i++)
        {
            for (int j = 1; j < size - 1; j++)
            {
                if (max < tenures[j])
                {
                    max = tenures[j];
                }
            }
        }

        for (int i = 0; i < size; i++)
        {
            if (max == tenures[i])
            {
                cout << "\nThe employee with the Longest Tenure is: " << employees[i].name << "\n\n";
                return;
            }
        }

    }

    template <typename T>
    void ShortestTenure(T employees[], int size)
    {
        string temp;
        int min = 0;
        int tenures[10];
        for (int i = 0; i < size; i++)
        {
            temp = employees[i].date_of_joining[1];
            temp += employees[i].date_of_joining[2];
            temp += employees[i].date_of_joining[3];
            temp += employees[i].date_of_joining[4];

            tenures[i] = 2023 - stoi(temp);
        }
        min = tenures[0];
        for (int i = 0; i < size; i++)
        {
            for (int j = 1; j < size - 1; j++)
            {
                if (min > tenures[j])
                {
                    min = tenures[j];
                }
            }
        }

        for (int i = 0; i < size; i++)
        {
            if (min == tenures[i])
            {
                cout << "\nThe employee with the Shortest Tenure is: " << employees[i].name << "\n\n";
                return;
            }
        }
    }

    template <typename T>
    void AvgTenureWRTdesignations(T employees[], int size)
    {

        //Calculating designations
        string designations[10];

        for (int i = 0; i < size; i++)
        {
            for (int j = 1; employees[i].designation[j] != '\0'; j++)
            {
                designations[i] += employees[i].designation[j];
            }
        }

        float repeatingDesignations[10] = { 0,0,0,0,0,0,0,0,0,0 };
        string stringDesignations[10];

        for (int i = 0; i < size; i++)
        {
            stringDesignations[i] = employees[i].designation;
        }

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (employees[i].designation == employees[j].designation)
                {
                    stringDesignations[j] = employees[i].designation;
                }
            }
        }

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (employees[i].designation == employees[j].designation)
                {
                    repeatingDesignations[i]++;
                }
            }
        }

        //Calculating Tenures and storing them in tenures array
        string temp;
        int tenures[10];
        float avgTenures[10] = { 0,0,0,0,0,0,0,0,0,0 };
        for (int i = 0; i < size; i++)
        {
            temp = employees[i].date_of_joining[1];
            temp += employees[i].date_of_joining[2];
            temp += employees[i].date_of_joining[3];
            temp += employees[i].date_of_joining[4];

            tenures[i] = 2023 - stoi(temp);
        }

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (employees[i].designation == employees[j].designation)
                {
                    avgTenures[i] += tenures[i];
                }
            }
            avgTenures[i] /= repeatingDesignations[i];
        }


        cout << endl;

        for (int i = 0; i < size; i++)
        {
            cout << endl << stringDesignations[i] << ": " << avgTenures[i];
        }
       
    }

    template <typename T>
    void HighestPayingDesignation(T employees[], int size)
    {
        int salaries[10];
        float max = 0;
        for (int i = 0; i < 10; i++)
        {
            string temp;
            temp = employees[i].salary[2];
            temp += employees[i].salary[3];
            temp += employees[i].salary[5];
            temp += employees[i].salary[6];
            temp += employees[i].salary[7];

            salaries[i] = stoi(temp);

        }

        max = salaries[0];
        for (int i = 0; i < size; i++)
        {
            for (int j = 1; j < size - 1; j++)
            {
                if (max < salaries[j])
                {
                    max = salaries[j];
                }
            }
        }

        for (int i = 0; i < size; i++)
        {
            if(max == salaries[i])
            {
                cout << "\n\nThe designation with Highest salary is: " << employees[i].designation << endl;
                return;
            }
        }

    }


    //************************************ Functions for Scenario # 04 ******************************************
    template <typename T>
    void RankBasedOnSalaries(T employees[], int size)
    {
        //Calculating Salary
        int salaries[10];
        for (int i = 0; i < 10; i++)
        {
            string temp;
            temp = employees[i].salary[2];
            temp += employees[i].salary[3];
            temp += employees[i].salary[5];
            temp += employees[i].salary[6];
            temp += employees[i].salary[7];

            salaries[i] = stoi(temp);
        }
        
        time_t start_time;
        time(&start_time);
        
        int comparisons = 0, swaps = 0;
        //Performing Bubble Sort
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 9 - i; j++)
            {
                if (salaries[j] > salaries[j + 1] && comparisons++)
                {
                    swaps++;
                    swap(employees[j], employees[j + 1]);
                    swap(salaries[j], salaries[j + 1]);
                }
            }
        }
        time_t end_time;
        time(&end_time);

        // Calculating the elapsed time in seconds
        double elapsed_time = difftime(end_time, start_time);


        //Displaying the sorted array:
        cout << "The sorted array with respect to the salary in ascending order is: \n\n";
        for (int i = 0; i < 10; i++)
        {
            cout << employees[i].name << ": \t\t";
            cout << employees[i].salary << endl;
        }

        cout << "The Executiong time of the Bubble sort is: " << elapsed_time << " seconds" << endl;
        cout << "Number of comparisons performed for bubble sort are: " << comparisons;             //Printing number of comparisons
        cout << "\nNumber of swaps performed for bubble sort are: " << swaps << endl << endl;       //Printing number of swaps
         

    }


    //************************************ Functions for Scenario # 05 ******************************************
    template <typename T>
    void RankBasedOnTenure(T employees[], int size)
    {
        //Calculating Tenures
        string temp;
        int tenures[10];
        for (int i = 0; i < size; i++)
        {
            temp = employees[i].date_of_joining[1];
            temp += employees[i].date_of_joining[2];
            temp += employees[i].date_of_joining[3];
            temp += employees[i].date_of_joining[4];

            tenures[i] = 2023 - stoi(temp);
        }
        
        
        time_t start_time;
        time(&start_time);
        int comparisons = 0, swaps = 0;
        //Performing Bubble Sort
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 9 - i; j++)
            {
                if (tenures[j] > tenures[j + 1] && comparisons++)
                {
                    swaps++;
                    swap(employees[j], employees[j + 1]);
                    swap(tenures[j], tenures[j + 1]);
                }
            }
        }
        time_t end_time;
        time(&end_time);

        // Calculating the elapsed time in seconds
        double elapsed_time = difftime(end_time, start_time);


        //Displaying the sorted array:
        cout << "The sorted array with respect to the salary in ascending order is: \n\n";
        for (int i = 0; i < 10; i++)
        {
            cout << employees[i].name << ": \t\t";
            cout << employees[i].date_of_joining << endl;
        }

        cout << "The Execution time of the algorithm is: " << elapsed_time << " seconds" << endl;
        cout << "Number of comparisons performed for bubble sort are: " << comparisons;             //Printing number of comparisons
        cout << "\nNumber of swaps performed for bubble sort are: " << swaps << endl << endl;       //Printing number of swaps


    }
};