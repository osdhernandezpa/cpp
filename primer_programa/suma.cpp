// este programa hace sumas armonicas de dos formas para comparar

#include <iostream>
  
//typedef float REAL;
//si se usa el type def,se cambia float por REAL


float sumup(int N);
float sumdown(int N);


int main(void)
{
	
	return 0;
}


float sumup(int N)
{
	float suma = 0;
	for (int ii = 1; ii <= N; ++ii){
		suma += 1/ii;
	}
	return suma
}

float sumdown(int N)
{
	float suma = 0;
	for (int ii = N; ii >= 1; ++ii){
		suma += 1/ii;
	}
	return suma
}




















