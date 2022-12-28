#include <iostream>

#include <ios>
#include <iomanip>

#include <limits>

#include <cmath>



int main()
{
    int number1 {7};
    int number2 {2};

    int result = number1 + number2;
    std::cout << "suma: " << result << '\n';

    result = number1 - number2;
    std::cout << "resta: " << result << '\n';

    result = number1 * number2;
    std::cout << "multiplicacion: " << result << '\n';

    result = number1 / number2;
    std::cout << "division: " << result << '\n';

    result = number1 % number2;
    std::cout << "modulo: " << result << '\n'; 


    //mas vainas aburridas...
    //
    //


    int value {5};

    std::cout << "valor inicial: " << value << '\n'; 
    value = value + 1;
    std::cout << "valor aumentado: " << value << '\n'; 
    std::cout << '\n'; 

    std::cout << "aumento prefijo: " << ++value << '\n'; 
    std::cout << "valor revisado: " << value << '\n'; 
    std::cout << '\n'; 

    std::cout << "reduccion prefijo: " << --value << '\n'; 
    std::cout << "valor revisado: " << value << '\n'; 
    std::cout << '\n'; 

    std::cout << "aumento sufijo: " << value++ << '\n'; 
    std::cout << "valor revisado: " << value << '\n'; 
    std::cout << '\n'; 

    std::cout << "reduccion sufijo: " << value-- << '\n'; 
    std::cout << "valor revisado: " << value << '\n'; 
    std::cout << '\n'; 
    std::cout << '\n'; 
    std::cout << '\n'; 

    //---------------------------------------------------
    
    value = 45;

    std::cout << "valor inicial: " << value << '\n'; 
    std::cout << '\n'; 

    value += 5;
    std::cout << "anhadir con +=5 : " << value << '\n'; 
    std::cout << '\n'; 

    value -= 5;
    std::cout << "restar con -=5 : " << value << '\n'; 
    std::cout << '\n'; 

    value *=2;
    std::cout << "multiplicar con *=2 : " << value << '\n'; 
    std::cout << '\n'; 

    value /= 3;
    std::cout << "dividir con /=3 : " << value << '\n'; 
    std::cout << '\n'; 

    value %= 11;
    std::cout << "modulo con %=11 : " << value << '\n'; 
    std::cout << '\n'; 

    // operadores relacionales
    
    number1 = 45;
    number2 = 60;

 
    std::cout << "numero 1: " << number1 << '\n'; 
    std::cout << "numero 2: " << number2 << '\n'; 
    std::cout << '\n'; 

    std::cout << std::boolalpha; //sale true/false en vez de 1/0

    std::cout << "numero 1 < numero 2: " << (number1 < number2) << '\n';  
    std::cout << "numero 1 <= numero 2: " << (number1 <= number2) << '\n';  
    std::cout << "numero 1 > numero 2: " << (number1 > number2) << '\n';  
    std::cout << "numero 1 >= numero 2: " << (number1 >= number2) << '\n';  
    std::cout << "numero 1 == numero 2: " << (number1 == number2) << '\n';  
    std::cout << "numero 1 != numero 2: " << (number1 != number2) << '\n';  
    std::cout << '\n'; 
    std::cout << '\n'; 

    //operadores logicos

    bool a {true};
    bool b {false};
    bool c {true};
    std::cout << '\n'; 

    std::cout << "a: " << a << '\n';  
    std::cout << "b: " << b << '\n';  
    std::cout << "c: " << c << '\n';  
    std::cout << '\n'; 


    std::cout << "AND " << '\n';  
    std::cout << "a && b: " << (a && b) << '\n';
    std::cout << "a && c: " << (a && c) << '\n';
    std::cout << "a && b && c: " << (a && b && c) << '\n';
    std::cout << '\n'; 

    std::cout << "OR " << '\n';  
    std::cout << "a || b: " << (a || b) << '\n';
    std::cout << "a || c: " << (a || c) << '\n';
    std::cout << "a || b || c: " << (a || b || c) << '\n';
    std::cout << '\n'; 

    std::cout << "NOT " << '\n';  
    std::cout << "!a: " << !a << '\n';
    std::cout << "!b: " << !b << '\n';
    std::cout << "!c: " << !c << '\n';
    std::cout << '\n'; 

    //para componer usar parentesis por favor
    // se pueden componer los operadores de comparacion
    // con los operadores logicos
    
    //----------------------------------------------------------
    //----------------------------------------------------------


    //formatear output, es decir...
    //hacer que se vea mas chimba lo que se ve en la terminal
    // se deben usar las dos biblios extras
    
    //cout no manda de una, manda a un buffer antes de la terminal
    //flush manda de una
    //setw formatea distancias (como tamanho de bloques en excel)
    //right o left especifica hacia que lado se manda la vuelta
    //internal separa el signo del numero
    //setfill('<con lo que se quiere rellenar>') rellena espacios
    //boolalpha noboolalpha ya sabemos 
    //showpos muestra signo mas
    //dec hex oct especifican el sistema numerico
    //showbase muestra marcadores de base (e.g 0x)
    //uppercase pone mayusculas en los hex
    //fixed fija las cifras decimales
    //scientific usa notacion cientifica
    //buscar para desactivarlos jajajaj no entendi
    //setprecision()
    //showpoint muestra el punto en floats
    //


    //limites numericos buscar std::numeric limits
    //--------------------------------------------------------
    

    //operaciones matematicas cmath
    //
    //incluye valores absolutos, funciones piso o techo
    //potencias, raices, exponenciacion, logaritmo
    //funciones trigonometricas
    //buscar para mas

    //-----------------------------------------------------------
    

    //char y short int no admiten operaciones,
    //se transforman automaticamente si se intentan hacer operaciones



    return 0;
}






























