#include <string>  
#include <iostream>  
#include <vector>  

#include "student.h"  
  
using namespace std;  
  
int main(){  
  
    vector<Student*> stuV;  
    Student *pointerStu = NULL;  
  
    string name;  
    
    int score = 0;  
  
    while(true){  
        cout << "Please input a student name, "   
            << "if you are finsihed, please type in done" << endl;  
          
        cin >> name;  
        if("done" == name)  
            break;  
        pointerStu = new Student(name);  
          
        cout << "Please input courses' name and score, "  
            << "if end then input 0 0" << endl;  
  
        cin >> name >> score;  
        while(name != "0"){  
            pointerStu->setCourse(name, score);  
            cin >> name >> score;  
        }  
  
        stuV.push_back(pointerStu);  
    }  
    
    cout << endl;
    cout << "Summary Sheet " << endl;  
  
    for(int i = 0; i < stuV.size(); i++){ 
	 
        stuV[i]->printSummary();  
        delete stuV[i];  
        
    }  
      
    return 0;  
}  
