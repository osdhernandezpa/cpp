//este programa es para hacer sumas armonicas por dos metodos

#include <iostream>
#include <cmath>

// typedef float REAL;
// se usa para redefinir float, si se usa se cambia float por REAL

float sumup(int N);
float sumdown(int N);

int main (void)
{
	std::cout.precision(6);
	std::cout.setf(std::ios::scientific);
	
	for (int ii= 1; ii < 10000; ++ii){
		float suma1 = sumup(ii);
		float suma2 = sumdown(ii);
		std::cout << ii << "\t" << std::fabs(1 - suma1/suma2) << std::endl;
	}
	return 0;
}

float sumup(int N)
{
	float suma = 0;
	for (int ii = 1; ii <= N; ++ii){
		suma += 1.0/ii;
	}
	return suma;
}

float sumdown(int N)
{
	float suma = 0;
	for (int ii = N; ii >= 1; --ii){
		suma += 1.0/ii;
	}
	return suma;
}



































