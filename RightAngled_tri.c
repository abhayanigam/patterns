#include <stdio.h>
//program of ps
void printer(int lines);//declaration
void printerline(int i);//declaration

int main()
{
	
	printer(10);//call form the function
	return 0;	
}
//implimentation the function
void printer(int lines){
 	
	for (int i = 0; i < lines; ++i)
	{

   	 printerline(i);//call from the function
	}	

}
//implimentation 
void printerline(int i)
{
	char a='*';
   for (int j = 0; j < (4*i); )
		{
			printf(" %c ",a);

			j = j +1;
		}
		printf("\n");
}