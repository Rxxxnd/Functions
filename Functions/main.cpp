//Functions
#include <iostream>

int Sum(int a, int b);            
int Diff(int a, int b);           
int Mult(int a, int b);             
double Div(double a, double b);   
int Rem(int a, int b);            
int Fct(int a);		              
int Pwr(int a, int b);	          

void main()
{
	int a, b;
	std::cout << "Enter two numbers separated by a spacebar: "; std::cin >> a >> b;

	int c = Sum(a, b);												   
	std::cout << a << " + " << b << " = " << c << std::endl;		   
	std::cout << a << " - " << b << " = " << Diff(a, b) << std::endl;  
	std::cout << a << " * " << b << " = " << Mult(a, b) << std::endl;    
	std::cout << a << " / " << b << " = " << Div(a, b) << std::endl;   
	std::cout << a << " % " << b << " = " << Rem(a, b) << std::endl;   
	std::cout << a << " ! " << " = " << Fct(a) << std::endl;	       
	std::cout << a << " ^ " << b << " = " << Pwr(a, b) << std::endl;   
}																	   

int Sum(int a, int b)			
{							    
	int c = a + b;              
	return c;					
}								
int Diff(int a, int b)			
{								
	return a - b;				
}							    
int Mult(int a, int b)            
{								  
	return a * b;				
}								
double Div(double a, double b)	
{								
	return a / b;				
}								
int Rem(int a, int b)		   
{
	return a % b;				
}								
int Fct(int a)		            
{							    
	int fct = 1;                
	for (int i = 1; i <= a; i++)
	{                           
		fct *= i;               
	}                           
	return fct;                 								
}																
int Pwr(int a, int b)			
{								
	int res = 1;												
	for (int i = 1; i <= b; i++)
	{							
		res *= a;		        
	}							
	return res;					
}				         	    
