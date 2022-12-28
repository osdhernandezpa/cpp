#include <iostream>


//un arreglo es una forma de agrupar varias varialbes de cierto tipo (e.g int)
//se almacenan juntos en memoria y 

int main(){
    
    int puntajes[10]{};//arreglo de 10 enteros, inicializados a 0

    int alterno[]{0,1,2,3,4,5,6,7,8,9};

    puntajes[0] = 1;

    for (int i {0}; i < 10; ++i){
        std::cout << "puntaje" << i << ": " << puntajes[i] << '\n';    
    }

    std::cout << '\n';

    for (int i {0}; i < 10; ++i){
        std::cout << "alrterno" << i << ": " << alterno[i] << '\n';    
    }

    int suma {0};

    for (int element : puntajes){
        suma += element;
    }

    std::cout << "suma: " << suma << '\n';    
    
    
    std::cout << puntajes << '\n'; //muestra la direccion del primer elemento


    std::cout << '\n';
    std::cout << '\n';


    //std::cout << "tamanho puntajes: " << std::size(puntajes) <<  '\n'; c++17
    

    std::cout << "tamanho puntajes: " << sizeof(puntajes) <<  '\n';
    std::cout << "tamanho puntajes[0]: " << sizeof(puntajes[0]) <<  '\n';
    std::cout << "tamanho puntajes: " << sizeof(puntajes)/sizeof(puntajes[0]) <<  '\n';



    std::cout << '\n';
    std::cout << '\n';

    //---------------------------------------------------------------
    //arreglos de caracteres


    char mensaje[7]{'B', 'u', 'e', 'n', 'a', 's'};//anhadiendo uno se puede no
    //incluir el \0
    
    std::cout << "mensaje: ";
    for(auto c : mensaje){
        std::cout << c;
    }
    std::cout << '\n';

    std::cout << mensaje << '\n';
    
    std::cout << '\n';

    char mensajaso[]{"es mejor asi"};
    
    std::cout << mensajaso << '\n';

    std::cout << '\n';
    

    //se puede ver e incluso editar fuera de los limites de un arreglo
    //es peligroso editar fuera de un arreglo

    std::cout << puntajes[-1] << '\n';
    std::cout << puntajes[700] << '\n';






    return 0;
}


















