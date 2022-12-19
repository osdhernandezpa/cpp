//este programa es para hacer sumas armonicas por dos metodos

#include <iostream>

// typedef float REAL;
// se usa para redefinir float, si se usa se cambia float por REAL

float sumup(int N);
float sumdown(int N);

int main (void)
{
	std::cout.precision(6);
	std::cout.setf(std::ios::scientific);

	std::cout << sumup(3) << std::endl;
	std::cout << sumdown(3) << std::endl;

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



































