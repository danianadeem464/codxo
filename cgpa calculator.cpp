#include<iostream>
using namespace std;

void gpapersubject(){
	float obtained;
	    cout << "Enter obtained marks: ";
    cin >> obtained;
    float per_sub = (obtained / 100) * 100.0;
    cout << "Percentage: " << per_sub <<"%"<< endl;
    float gpa_sub = (per_sub / 100.0) * 4.0;
    cout << "GPA for the subject: " << gpa_sub << endl;
}

void gpapersemester(){
    float subject1, subject2, subject3, subject4, subject5;
    cout << "Enter marks for subject 1: ";
    cin >> subject1;
    cout << "Enter marks for subject 2: ";
    cin >> subject2;
    cout << "Enter marks for subject 3: ";
    cin >> subject3;
    cout << "Enter marks for subject 4: ";
    cin >> subject4;
    cout << "Enter marks for subject 5: ";
    cin >> subject5;
    float obt = subject1 + subject2 + subject3 + subject4 + subject5;
    float percentage = (obt / 500) * 100.0;
    float gpa = (percentage / 100.0) * 4.0;
    cout<<" GPA PER SEMESTER"<<gpa << endl;
    cout << "GRADING: ";
    if (percentage >= 85) {
        cout << "Grade A+"<<endl;
    } else if (percentage >= 80 && percentage < 85) {
        cout << "Grade A"<<endl;
    } else if (percentage >= 75 && percentage < 80) {
        cout << "Grade B+"<<endl;
    } else if (percentage >= 70 && percentage < 75) {
        cout << "Grade B"<<endl;
    } else if (percentage >= 65 && percentage < 70) {
        cout << "Grade C+"<<endl;
    } else if (percentage >= 60 && percentage < 65) {
        cout << "Grade C"<<endl;
    } else if (percentage >= 55 && percentage < 60) {
        cout << "Grade D+"<<endl;
    } else if (percentage >= 50 && percentage < 55) {
        cout << "Grade D"<<endl;
    }
}

void cgpa(){
float obtained;
    int credit_hr;
    cout << "Enter obtained marks: ";
    cin >> obtained;
    float per_sub = (obtained / 100) * 100.0;
    cout << "Percentage: " << per_sub  <<"%"<< endl;
    float gpa_sub = (per_sub / 100.0) * 4.0;
    cout << "GPA for the subject: " << gpa_sub << endl;
    cout << "Enter total credit hours: ";
    cin >> credit_hr;
    float cgpa = gpa_sub / credit_hr;
    cout << "CGPA: " << cgpa << endl;
}

int main(){
int choice;
float percentage;
float per_sub;
int total=500;
float gpa;
int credit_hr;
int obtained;
int total_marks=100;
float points;

while (true) {
		cout << "1. GPA per Subject" <<endl;
        cout << "2. GPA per Semester" <<endl;
        cout<<"3. CGPA"<<endl;
        cout<<"4.EXIT"<<endl;
        cin >> choice;
        switch (choice) {
            case 1:
                gpapersubject();
                break;
            case 2:
                gpapersemester();
                break;
           case 3:
           	cgpa();
           	
           }  
}
	
}
