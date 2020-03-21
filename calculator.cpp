#include <iostream>
using namespace std;
 
int add(float n1, float n2);
int sub(float n1, float n2);
int mult(float n1, float n2);
int div(float n1, float n2);
int main (int size, char *array[])
{

bool oddCase = false;


//cout << size << endl;
if(size != 4 && (size != 5 && array[2] != "*"))
{
	cout << "Error: Invalid Input: Please input exactly three parameters" << endl;
	return -3;
}
//else if(size != 5 && array[2] != "*")

//cout << array[4] << endl;

//cout << array[3] << endl;

//cout << array[2] << endl;

//cout << array[1] << endl;

//if(atof(array[1]))
if(size != 5)
{
if(atof(array[1]) == 0 || atof(array[3]) == 0)
{
	cout << "Zero is not allowed for either operand!" << endl;
	return -1;
}
}
else if(size == 5)
{
	oddCase = true;
 if(atof(array[4]) == 0)
{
cout << "Zero is not allowed for either operand!" << endl;
	return -1;

}
}
float n1 = atof(array[1]);
float n3 = atof(array[3]);
if(oddCase)
{
	n3 = atof(array[4]);
}

/*
switch(array[2])
{
case "+": return add (n1, n3); break;
case "-": return sub (n1, n3); break;
case "*": return mult(n1, n3); break;
case "/": return div (n1, n3); break;
default: cout << "Please select +, -, *, or / for the second argument." << endl;
return -2;
break;
}*/
char holdThis = *array[2];

if(holdThis == '+')
{
return add(n1, n3);
}
else if(holdThis == '-')
{
return sub(n1, n3);
}
else if(holdThis == '*' || oddCase)
{
	if(oddCase)
	{
		return mult(n1, n3);
	}

return mult(n1, n3);
}
else if(holdThis == '/')
{
return div(n1, n3);
}
else
{
	{
cout << "Please select +, -, *, or / for the second argument." << endl;
return -2;
	}
}


}
////////////////////////////////////////////////////////Method implementaiton//////////////////////////////////////////////////
int add(float n1, float n2)
{
float sum = 0; 

/*
int temp = 0;
  for(int i = 0; i < size; i++)
     {

  if(array[i] == " ")
	{
	i--;
	}
	else if(array[i] == "-")
	{
	sum -= temp;
	i++;
	i++;		
	}
  else 
	{ 
	temp = atoi(array[i]);
	sum += temp;
	}


    }
*/

sum = n1 + n2;
cout << sum << endl;

return  0;
}

int sub(float n1, float n2)
{
float diff = 0.0;
 diff = n1 - n2;
 cout << diff << endl;
 return 0;
}

int mult(float n1, float n2)
{
	float mult = 0.0;
	mult = n1 * n2;
	cout << mult << endl;
	return 0;
}

int div(float n1, float n2)
{
	float div = 0.0;
	div = n1 / n2;
	cout << div << endl;
	return 0;
}



