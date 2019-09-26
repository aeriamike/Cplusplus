#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

#include "student.h"
using namespace std; // declare using namespace std 
					 // to allow input and output for this program.
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

