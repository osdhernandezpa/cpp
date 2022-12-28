#include <iostream>
#include <cmath>
#include <iomanip>

int main(void)
{
    int numero1 = 15;
    int numero2 = 017;
    int numero3 = 0x0F;
    int numero4 = 0b00001111;

    std::cout << "numero 1: " << numero1 << '\n';
    std::cout << "numero 2: " << numero2 << '\n';
    std::cout << "numero 3: " << numero3 << '\n';
    std::cout << "numero 4: " << numero4 << '\n';
    
    int cicla = 1; // inicializacion por asignacion
    int hamburguesa (2); // inicializacion funcional
    int pizza {3}; // inicializacion por brakets (mejor)

    int nomas;

    std::cout << "tamanho int: " << sizeof(int) << '\n'; //tamanho en bytes
    std::cout << "tamanho cicla: " << sizeof(cicla) << '\n'; 
    
    std::cout << nomas << '\n';
 
    std::cout << '\n';
    std::cout << '\n';
    std::cout << "tamanho char: " << sizeof(char) << '\n'; //tamanho en bytes
    std::cout << '\n';
    std::cout << '\n';


    // es posible modificar el rango y tamanho de un int

    unsigned int arroz {}; //de 0 a ~4 mil millones
    signed int leche {}; //de ~ -2milmillones a ~2milmillones

    short int aguacate {}; //2 bytes
    long int durazno {}; //8 bytes
    long long pera {}; //8 bytes

    std::cout << "tamanho long: " << sizeof(durazno) << '\n'; //tamanho en bytes
    std::cout << "tamanho long long: " << sizeof(pera) << '\n'; 
    
    std::cout << "tamanho long: " << sizeof(long int) << '\n'; //tamanho en bytes
    std::cout << "tamanho long long: " << sizeof(long long int) << '\n'; 
    
    // los numeros fraccionarios
    //
    // float   (4 bytes)      7 cifras
    // double   (8 bytes)     15 cifras  recomendado
    // long double (12 bytes) mas de 15

    float argentina {1.127389351234234f}; //4 bytes
    double brazil {1.4783295123952398472}; //8 bytes
    long double uruguay {1.634781234126385712394193412341L}; //12 bytes

    std::cout << "tamanho float: " << sizeof(argentina) << '\n'; //tamanho en bytes
    std::cout << "tamanho double: " << sizeof(brazil) << '\n'; 
    std::cout << "tamanho long double: " << sizeof(uruguay) << '\n'; 
    
    std::cout << "tamanho float: " << sizeof(float) << '\n'; //tamanho en bytes
    std::cout << "tamanho double: " << sizeof(double) << '\n'; 
    std::cout << "tamanho long double: " << sizeof(long double) << '\n'; 
    
    std::cout << "argentina: " << argentina << '\n';
    std::cout << "brazil: " << brazil << '\n'; 
    std::cout << "uruguay: " << uruguay << '\n';  

    std::cout << std::setprecision(20);

    std::cout << "argentina: " << argentina << '\n'; //se inventa lo demas
    std::cout << "brazil: " << brazil << '\n'; 
    std::cout << "uruguay: " << uruguay << '\n'; 
 
    //buscar floating point number memory representation

    //booleanos

    bool sisa {true};
    bool nonas {false};

    std::cout << "tamanho bool: " << sizeof(bool) << '\n'; //tamanho en bytes
    std::cout << "tamanho sisa: " << sizeof(sisa) << '\n'; //1byte
    
    // caracteres
    // es ascii 1 char usa 1 byte
    
    char hoy {'h'};
    char ayer {65}; // usa ascii para asignar
        
    std::cout << "tamanho hoy: " << sizeof(hoy) << '\n'; //tamanho en bytes
    std::cout << hoy  << '\n'; 
 
    std::cout << "tamanho ayer: " << sizeof(ayer) << '\n'; //tamanho en bytes
    std::cout << "valor: " << ayer  << '\n'; 
    std::cout << "valor(int): " << static_cast<int>(ayer)  << '\n'; 

    // se puede usar auto, pero no parece muy seguro
    

    // = no es =, es un operador de asignacion
    

    return 0;
}














