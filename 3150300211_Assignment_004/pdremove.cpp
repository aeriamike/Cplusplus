#include "pdremove.h"
#include "main.h"

int main()
{
	
	bool del = 0;;
	DiaryBase * base = new pdremove(&del);
	
	delete base;
	if (del)
	
	return 0;
	return -1;
}
