#include <string> 
#include <iostream>  
 
  
#include "student.h"  
  
using namespace std;  
  
  
Student::Student(string name):  
    stuName(name){  
  
}  
  
Student::~Student(){  
  
}  
  
  
void Student::setCourse(string name, int score){  
  
    Course course;  
    course.courName = name;  
    course.marks = score;  
    courses.push_back(course);          
}  
  
void Student::printSummary(){  
	
    cout << endl;
    cout << "Student's name: " << stuName << '\t' << endl;  
    cout << "Student's Courses and scores: "; 
	cout << endl; 
    for(int i = 0; i < courses.size(); i++)      
        cout << courses[i].courName << " "  << '\t'; 
	cout << endl; 
    for(int j = 0; j<courses.size(); j++){
    	cout << courses[j].marks << " " << '\t';
	}
	cout << endl;
    
} 
