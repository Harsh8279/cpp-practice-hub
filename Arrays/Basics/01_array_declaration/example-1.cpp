// Problem Statement:
/*
STUDENT GRADE MANAGEMENT SYSTEM

Objective:
Write a C++ program to manage and analyze student grades for a class of 10 students.

Requirements:
1. Create an array to store grades for 10 students.
2. Implement the following functions:
   a) Input Grades: Allow user to input grades for all 10 students
   b) Calculate Average Grade: Compute the class average
   c) Find Highest and Lowest Grades: Identify top and bottom performers
   d) Grade Distribution Analysis: Count students in different grade categories

Grading Scale:
- A: 90-100
- B: 80-89
- C: 70-79
- D: 60-69
- F: 0-59

Detailed Tasks:
1. Write a function to input grades for 10 students
2. Write a function to calculate and return the average grade
3. Write a function to find and display the highest and lowest grades
4. Write a function to display grade distribution
5. Handle potential input validation (ensure grades are between 0 and 100)

Sample Input/Output:
Enter grades for 10 students:
Student 1: 85
Student 2: 92
...
Student 10: 67

Output:
- Class Average: 78.5
- Highest Grade: 92
- Lowest Grade: 55
- Grade Distribution:
  A Grades: 2 students
  B Grades: 3 students
  C Grades: 3 students
  D Grades: 1 student
  F Grades: 1 student

Bonus Challenge:
- Implement error handling for invalid grade inputs
- Add functionality to sort grades in ascending or descending order
*/


#include<iostream>
#include<iomanip>
#include<unordered_map>
#include<vector>
using namespace std;

class StudentGrades{

private:
    unique_ptr<int []> student_grades;
    int no_of_students = 10;

public:
    StudentGrades(){

        // Intialize unique pointer
        student_grades = make_unique<int[]>(no_of_students);

        cout<<"Enter Grades of Student \n";
        int marks;
        for(int i = 0; i<no_of_students; i++){
            cout<<"Student "<<i+1<<" : ";
            cin>>marks;

            if(marks<=100){
                if(marks<0){
                    student_grades[i] = 0;
                    continue;
                }
                student_grades[i] = marks;

            }
            else{
                student_grades[i] = 99;
            }

        }

    }
    
    float average_calculation(){
        float avg = 0;
        int sum = 0;

        for(int i = 0; i<no_of_students; i++){
            sum += student_grades[i];
        }

        avg = sum / no_of_students;

        return avg;
    }

    void get_grade_classification(){

        unordered_map<char, int> grading;

        grading.emplace(make_pair('A', 0));
        grading.emplace(make_pair('B', 0));
        grading.emplace(make_pair('C', 0));
        grading.emplace(make_pair('D', 0));
        grading.emplace(make_pair('F', 0));

        for(int i = 0; i<no_of_students; i++){
            int grade = student_grades[i];
            if(grade>=90 && grade<=100){
                grading['A']+=1;
            }
            else if(grade>=80 && grade<=89){
                grading['B']+=1;
            }
            else if(grade>=70 && grade<=79){
                grading['C']+=1;
            }
            else if(grade>=60 && grade<=69){
                grading['D']+=1;
            }
            else if(grade>=0 && grade<=59){
                grading['F']+=1;
            }
        }

        cout<<"\n---------------------Result---------------------\n";

        for(auto &pair : grading){
            cout<<pair.first<<" Grades : "<<pair.second<<endl;
        }

    }

    void get_top_and_bottom(){
        
        vector<int> sorted_arr;

        for(int i = 0; i<no_of_students; i++){
            int grade = student_grades[i];
        }

    }

    
};

int main(){

    StudentGrades s1 =  StudentGrades();

    s1.get_grade_classification();

    return 0;

}
