#include <iostream>
using namespace std;
 



double firstOp;
double secondOp;
bool oddCase;
////////////////////////////////////////////////////////Method implementaiton//////////////////////////////////////////////////

double addition(double firstOperand, double secondOperand)
{
double sum = firstOperand + secondOperand;
return sum;
}

double subtract (double firstOperand, double secondOperand)
{
double diff = 0.0;
 diff = firstOperand - secondOperand;
 
 return diff;
}

double multiply (double firstOperand, double secondOperand)
{
double mult = firstOperand * secondOperand;
return mult; 
}

double divide (double firstOperand, double secondOperand)
{
double div = firstOperand / secondOperand;
return div;
}

int selectOperation(char candidateOperator)
{


switch(candidateOperator)
{
case '+' : return 1;       break;
case '-': return 2;      break;
case '*': return 3;      break;
case '/': return 4;      break;
default :  cout << "Please select +, -, *, or / for the second argument." << endl; return -2; break;

}
}
////////////////////////////////////////////////////Main Method///////////////////////////////////////////
int main (int argc, char ** argv)
{
double firstOperand;
double secondOperand;
double result;

 oddCase = false;



if(argc != 4 && (argc != 5 && argv[2] != "*"))
{
	cout << "Error: Invalid Input: Please input exactly three parameters" << endl;
	return -3;
}


if(argc != 5)
{
if(atof(argv[1]) == 0 || atof(argv[3]) == 0)
{
	cout << "Zero is not allowed for either operand!" << endl;
	return -1;
}
}
else if(argc == 5)
{
	oddCase = true;
 if(atof(argv[4]) == 0)
{
cout << "Zero is not allowed for either operand!" << endl;
	return -1;

}
}
 firstOperand = (double) atof(argv[1]);
 secondOperand = (double) atof(argv[3]);
 char holdThis = *argv[2];
if(oddCase)
{
	cout << argv[3] << endl;;
	secondOperand = (double) atof(argv[4]);
	holdThis = '*';//*argv[2];
	
	
	if(argv[3] != "calculator.cpp")
	{
		cout << "Error: Invalid Input: Please input exactly three parameters" << endl;
	return -3;
	}
}




int temp = selectOperation(holdThis);

if(temp == 1)
{
cout << addition(firstOperand, secondOperand)  << endl;  
 return 0;   
}
else if(temp == 2)
{
cout << subtract(firstOperand, secondOperand)  << endl;   
return 0;   
}
else if(temp == 3)
{
cout << multiply(firstOperand, secondOperand)  << endl;   
return 0;   
}
else if(temp == 4)
{
cout << divide(firstOperand, secondOperand)    << endl;   
return 0;   
}


 cout << "Please select +, -, *, or / for the second argument." << endl; 
 return -2;
	
}

