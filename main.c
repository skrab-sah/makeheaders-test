
#include "test4.h"
#include "student.h" // test3
#include "test2.h"
#include "test1.h"

#include <stdio.h>


int main ()
{
	printf("%s:\n", str);
	test1();


	char* string = test2("const char* string");
	printf("%s:\n", string);


	struct student s;
	s.roll = 1;
	s.name = "git";
	print_student(s);


	test4(s);
	return 0;
}