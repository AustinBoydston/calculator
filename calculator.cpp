#include <iostream>
using namespace std;
 
int main (int size, char *array[])
{




int sum = 0; 


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

cout << sum << endl;

return sum;
}



