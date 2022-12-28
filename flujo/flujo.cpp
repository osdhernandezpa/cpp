#include <iostream>


int main()
{
    int number1 {55};
    int number2 {60};

    bool result = (number1 < number2);

    std::cout << std::boolalpha << "resultado: " << result << '\n';
    std::cout << '\n';
    
    if (result == true){
        std::cout << number1 << " es menor que " << number2 << '\n';
    }

    //if (!(result == true)){
    //    std::cout << number1 << " NO es menor que " << number2 << '\n';
    //}

    else{
        std::cout << number1 << "NO es menor que" << number2 << '\n';
    }
    std::cout << '\n';


    
    if (number1 < number2){
        std::cout << number1 << " es menor que " << number2 << '\n';
    }

    else{
        std::cout << number1 << "NO es menor que" << number2 << '\n';
    }
    std::cout << '\n';
    
    bool rojo {false};
    bool amarillo {false};
    bool verde {true};
    bool pare {true};
    
    if (rojo){
        std::cout << "parar" << '\n';
    }

    else if (amarillo){
        std::cout << "lento" << '\n';
    }

    else if (verde){
        if (pare){
            std::cout << "parar algo" << '\n';
        }
        else{
            std::cout << "seguir" << '\n';
        }
    }
    std::cout << '\n';

    //se pueden añadir operadores logicos

    const int esfero {10};
    const int lapiz {20};
    const int borrador {30};
    const int marcador {40};
    const int escuadra {50};

    int herramienta {borrador};

    if (herramienta == esfero){
        std::cout << "la herramienta es el esfero" << '\n';
    }
    else if (herramienta == lapiz){
        std::cout << "la herramienta es el lapiz" << '\n';
    }
    else if (herramienta == borrador){
        std::cout << "la herramienta es el borrador" << '\n';
    }
    else if (herramienta == marcador){
        std::cout << "la herramienta es el marcador" << '\n';
    }
    else if (herramienta == escuadra){
        std::cout << "la herramienta es la escuadra" << '\n';
    }
    std::cout << '\n';


    herramienta = lapiz;

    switch (herramienta){

        case esfero: {
            std::cout << "la herramienta es el esfero" << '\n';
        }
        break;

        case lapiz: {
            std::cout << "la herramienta es el lapiz" << '\n';
        }
        break;

        case borrador: {
            std::cout << "la herramienta es el borrador" << '\n';
        }
        break;

        case marcador: {
            std::cout << "la herramienta es el marcador" << '\n';
        }
        break;

        case escuadra: {
            std::cout << "la herramienta es la escuadra" << '\n';
        }
        break;
    }
    std::cout << '\n';

    //expresion ternaria

    int max {};

    int a {35};
    int b {20};

    max = (a > b) ? a : b ;  //se puede leer como es a menor que b? 1/0

    std::cout << "max: " << max << '\n';
    std::cout << '\n';

    //es equivalente a 
    
    if(a > b){
        max = a;
    }
    else{
        max = b;
    }

    std::cout << "max: " << max << '\n';
    std::cout << '\n';


    bool rapido {false};

    int velocidad { rapido ? 300 : 150};

    std::cout << "velocidad: " << velocidad << '\n';
    std::cout << '\n';




    return 0;
}

























