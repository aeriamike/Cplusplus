#ifndef STUDENT_H
#define STUDENT_H


using namespace std; // declare using namespace std 
					 // to allow input and output for this program.
class Student{
    
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


     

#endif
