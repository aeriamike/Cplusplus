#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

//#include "student.h"

using namespace std; // declare using namespace std 
					 // to allow input and output for this program.

class Student
{
	
public:
        
    Student(int no, string name, int score1, int score2, int score3)
        : no(no), name(name), score1(score1), score2(score2), score3(score3)
    {
        average = double(score1 + score2 + score3) / 3;
    }
    
    
    friend void print(const Student& r);
    friend void print(vector<Student>& r);
     
private:		// Variable declarations, which follows the variables requirements
				// from the assignment questions	
    int no;
    string name;
    int score1;
    int score2;
    int score3;
    double average;
    
};


void print(const Student &r)
{
    cout << r.no << "\t" << r.name << "\t" << r.score1 << "\t"
  << r.score2 << "\t" << r.score3 << "\t" << r.average << endl;
}

void print( vector<Student> & member)
{
    int total_one = 0;				//variables needed for the listin process
    int total_two = 0;				//the max and min variables are used
    int total_three = 0;			//for the datas at the bottom of the table
    int max_one = 0;				//that will later be printed on the command screen.
    int max_two = 0;
    int max_three = 0;
    
    int min_one = (*(member.begin())).score1;
    int min_two = (*(member.begin())).score2;
    int min_three = (*(member.begin())).score3;
    
    
    for (vector<Student>::iterator i = member.begin() ; i != member.end() ;  ++i) // This function does the adding of all scores 
																		// from the students included in the program
																		// both three categories will be accumulated differently.
    {
        print(*i);
        total_one = total_one+(*i).score1;
        total_two = total_two+(*i).score2;
        total_three = total_three+(*i).score3;
        
        if (min_one > (*i).score1){
        	min_one = (*i).score1;
		}
        else if (min_two > (*i).score2){
        	min_two = (*i).score2;
		} 
        else if (min_three > (*i).score3){
        	 min_three = (*i).score3;
		}
		
        else if (max_one < (*i).score1){
        	max_one = (*i).score1;	
		} 
        else if (max_two < (*i).score1){
        	max_two = (*i).score2;	
		} 
        else if (max_three < (*i).score1){
       		max_three = (*i).score3;	
		} 
    }
    
    cout << "\taverage\t" << (double(total_one) / member.size()) << "\t"	//The chart below the student informations are printed through
         << (double(total_two) / member.size()) 							//this section of codes. This includes the average calculation of each
		 << "\t" << (double(total_three) / member.size()) << endl;			// type of scores as well.
         
    cout << "\tmin\t" << min_one << "\t" 
	<< min_two << "\t" << min_three << endl;
    
    cout << "\tmax\t" << max_one 
	<< "\t" << max_two << "\t" << max_three << endl;
}


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
