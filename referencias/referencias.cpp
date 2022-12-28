#include <iostream>

int main(void){

    //una referencia es un alias para una variable
    //entonces se pueden usar otros nombre para modificar la variable

    int entero {45};
    double real {33.65};

    int& referencia_entero1 {entero};
    int& referencia_entero2 = entero;
    double& referencia_real {real};

    std::cout << "valor entero: " << entero << '\n';
    std::cout << "valor real: " << real << '\n';
    std::cout << "referencia entero 1: " << referencia_entero1 << '\n';
    std::cout << "referencia entero 2: " << referencia_entero2 << '\n';
    std::cout << "referencia real: " << referencia_real << '\n';
    std::cout << '\n';

    std::cout << "dir entero: " << &entero << '\n';
    std::cout << "dir real: " << &real << '\n';
    std::cout << "dir referencia entero 1: " << &referencia_entero1 << '\n';
    std::cout << "dir referencia entero 2: " << &referencia_entero2 << '\n';
    std::cout << "dir referencia real: " << &referencia_real << '\n';
    std::cout << '\n';

    std::cout << "tamanho int: " << sizeof(int) << '\n';
    std::cout << "tamanho int&: " << sizeof(int&) << '\n';
    std::cout << "tamanho ref: " << sizeof(referencia_entero1) << '\n';
    std::cout << '\n';
    
    //modificando

    referencia_entero1 = 55;
    real = 3.14;

    std::cout << "valor entero: " << entero << '\n';
    std::cout << "valor real: " << real << '\n';
    std::cout << "referencia entero 1: " << referencia_entero1 << '\n';
    std::cout << "referencia entero 2: " << referencia_entero2 << '\n';
    std::cout << "referencia real: " << referencia_real << '\n';
    std::cout << '\n';

    std::cout << "dir entero: " << &entero << '\n';
    std::cout << "dir real: " << &real << '\n';
    std::cout << "dir referencia entero 1: " << &referencia_entero1 << '\n';
    std::cout << "dir referencia entero 2: " << &referencia_entero2 << '\n';
    std::cout << "dir referencia real: " << &referencia_real << '\n';
    std::cout << '\n';
    
    //-------------------------------------------------------------
    //punteros y referencias

    //con ref no hay *, una ref no puede moverse a ref otra cosa
    //una ref no puede no inicializarse

    // una ref es como un const puntero

    //-------------------------------------------------------------
    //ref y const
    

    int edad {30};
    const int& cte_ref{edad};

    std::cout << "edad: " << edad << '\n';
    std::cout << "cte_ref: " << cte_ref << '\n';
    std::cout << '\n';

    edad += 1;  

    std::cout << "edad: " << edad << '\n';
    std::cout << "cte_ref: " << cte_ref << '\n';
    std::cout << '\n';

    //la variable se puede editar desde la original
    //pero no desde la referencia

    // existe const int* const, se comporta como ref


    return 0;
}
























