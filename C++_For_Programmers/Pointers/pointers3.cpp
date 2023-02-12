#include<iostream>
#include<string>
int main()
{
	int *pointerI;
	int number;
	char character;
	char * pointerC;
	std::string sentence;
	std::string *pointerS;
	
	pointerI = &number;
	*pointerI = 45;
	
	pointerC = &character;
	*pointerC = 'f';
	
	pointerS = &sentence;
	*pointerS = "Hey look at me, I know pointer!";
	
	std::cout<<"number stored at address = "<<&number<<"\n";
	std::cout<<"character stored at address= "<<(void *)&character<<"\n";
	std::cout<<"sentence stored at address = "<<&sentence<<"\n";
	
	std::cout<<"number = "<<number<<"\n";
	std::cout<<"character = "<<character<<"\n";
	std::cout<<"sentence = "<<sentence<<"\n";
	return 0;
}