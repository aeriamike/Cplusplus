#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

#include "student.h"

using namespace std; // declare using namespace std 
					 // to allow input and output for this program.
int main()
{
    cout << "no	name	score1	score2	score3	average\n";
    
    vector<Student> member;					// Declare vector for the Student class,
    									// which will allow the program to store
    									// information from all students listed below
										    
										    
    Student s1(1, "K.Weng", 5, 5, 5); 	//The s1 information from the Student class
    									//has its list number, name, and three different
    									//scores. They are both stored in the corresponding
    									//variables within the brackets.
    									
    member.push_back(s1);				    //Push_back increases a space in vector<student>
    									//to allow s1 to be placed inside the list.
    									
    
    Student s2(2, "T.Dixon", 4, 3, 2);	//The next several groups of codes below
    member.push_back(s2);					//will do the same thing as that of s1.
    
    Student s3(3, "V.Chu", 3, 4, 5);
    member.push_back(s3);
    
    Student s4(4, "L.Tson", 4, 3, 4);
    member.push_back(s4);
    
    Student s5(5, "L.Lee", 3, 4, 3);
    member.push_back(s5);
    
    Student s6(6, "I.Young", 4, 2, 5);
    member.push_back(s6);
     
    Student s7(7, "K.Hiro", 4, 2, 1);
    member.push_back(s7);
    
    Student s8(8, "G.Ping", 4, 4, 4);
    member.push_back(s8);
    
    Student s9(9, "H.Gu", 2, 3, 4);
    member.push_back(s9);
    
    Student s10(10, "J.Jon", 5, 4, 3);
    member.push_back(s10);
    
    print(member);
    
	
    return 0;
}
