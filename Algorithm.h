/****************************************************************************************************************************************
 * 	Algorithm Syntax :														*
 * 		is not real software 													*
 * 		it help beginers to understand algorithm syntax 									*
 *																	*
 * 		you can't do the big project with this algorithm syntax									*
 *																	*
 *	RayDen																*
 ****************************************************************************************************************************************/
// use it if you reqlly need math header file in algorithm file
#ifdef MATH_C
#include<math.h> 
#endif

// start 

#ifndef ALGORITHM
#define ALGORITHM
//
// must include library to make sure that all function run it without error
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// define all algorithm keywords language
// like pascal but in C
// RayDen


// logic 
#define TRUE		1
#define FALSE		0

// line NULL in C but NONE here 
#define NONE		0
// use it for handling errors 
#define ERROR		-1

// program
#define BEGIN		int main(){
#define END_SUCCESS	return 0;}
#define END_FAILURE	return ERROR;}
//	the beginning of the program
//	Syntax:
//
//		BEGIN
//			...	
//		END_SUCCESS
//			end the program with 0 (success)
//		END_FAILURE
//			end the program with ERROR (faile)
//
//
#define program(a)	if(strcmp(a , __FILE__) != 0) return ERROR;
//	first line in algorithm
//	if you delete this line program will return error
//	Syntax:
//		BEGIN	
//			program(filename);
//			...
//		END_SUCCESS
#define IF		if(
#define ELIF		else if(
#define ELSE		else
#define THEN		)
//
//	if statement:
//	Syntax:
//		IF <condition> THEN
//		begin
//			...
//		end
//
//
#define begin		{
#define end		}
// 	Syntax:
// 		IF TRUE THEN
// 		begin
//			...
// 		end
//
//
#define FOR		for(
#define DO		)
#define WHILE		while(
//	loop:
//		Syntax:
//			FOR <initial var> <conditions> <chnage value> DO
//			begin
//				...
//			end
//
//			WHILE <condition> DO
//			begin
//				...
//			end
//
#define is 		=
#define noteq		!=
#define eq		==
#define mod		%
#define not		!
#define or		||
#define and		&&
#define endl		puts("")
//
//	operations:
//		Syntax:
//			- i is 3;
//			- IF 1 eq 1 or 1 noteq 2 and TRUE THEN
//			begin
//				...
//			end
//			- mod : modulus number
//			- endl : end line

// variables
#define VAR		 // this is just declaration
#define INTEGER		int
#define REAL		float
#define CHARACTER	char
#define BOOLEAN		int
#define STRING		const char*

// declaration variables
// Syntax:
// VAR
// 	INTEGER i;
// 	STRING message;

// constant 
#define CONST		// this is just declaration
#define C_INTEGER	const int
#define C_REAL		const float
#define C_CHARACTER	const char
#define C_BOOLEAN	const int
//
//	constant
//	Syntax:
//	CONST
//		C_INTEGER i is 5; <- must give value to constant in declaration
//
// functions
#define PROCEDURE	void
//
//	functions:
//		Syntax:
//			<type><name of function>(<params>)
//			begin
//				...
//			end
//		Example:
//			INTEGER add(INTEGER a , INTEGER b)
//			begin
//				return a + b;
//			end
//	procedure:
//		Example:
//			PROCEDURE foo()
//			begin
//				...
//			end
//

// pointers (output) just in functions 
#define O 		* // output
#define I		//input 
#define IO		* // input and output
//
//	Syntax:
//		PROCEDURE foo(INTEGER IO a)
//		begin
//			IO a is 5;
//		end
//	(you can delete I if you want use it just for people who reads your code for understand)
//


// std function 
#define rand(a)	(long)&a // put whatever you want in param "a" 
#define random(a , min , max)	(long)&(a) % ((max) + 1 - (min)) + (min)
#define write(a)	puts(a)
#define fwrite		printf
#define read_i(a)	scanf("%d",&a) // (one param) read int type
#define read_r(a)	scanf("%f",&a) // read float type
#define read_c(a)	scanf("%c",&a) // read char type
//
//	Syntax:
//		rand(<var>) -> 234345464567
//		random(var , 0 ,100) -> 31
//		write("hello world") -> hello world
//		fwrite("is %d" 5) -> is 5
//		read_(irc) -> read variables values input
//
// Arrays
#define Array(x)	[x] 
//
//	Syntax:
//		VAR
//			INTEGER arr Array(50) ;

// switch case 
#define _case		switch(
#define okay		){
#define cis 		case
#define otherwise	default
//
//	Syntax:
//	_case <var> okay
//	cis 1:
//		write("hello");
//		break;
//	...
//	overwise :
//		write("error");
//	} -> add this (i will fix it later)
//

#endif //ALGORITHM
