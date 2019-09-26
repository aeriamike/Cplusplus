#ifndef STUDENT_H  
#define STUDENT_H  
  
#include <string> 
#include <iostream>   
#include <vector>  
  
using namespace std;  
  
class Student{  
  
private:  
    string stuName;  
    
    struct Course{  
        string courName;  
        int marks;  
    };  
    vector<Course> courses;  
  
public:  
    Student(string stuName);  
    
    ~Student();  
      
    int getSumScore();  
      
    void setCourse(string courName, int marks);  
  
    void printSummary();  
};  
  
  
#endif 
