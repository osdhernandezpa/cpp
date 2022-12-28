#include <iostream>


int main(){
    
    //--------------------------------------------------------
    //for loop

    for(int i {0}; i < 10 ; ++i){
        std::cout << "Amo mi carrera" << '\n';
    }

    std::cout << ":(" << '\n';
    std::cout << '\n';
    
    //buscar size_t, es algo que existe

    //se puede no usar los {}, pero no creo que sea buenaa idea

    //---------------------------------------------------------
    //while loop    

    int i {0};
    const int conteo {10};

    while ( i < 10){
        std::cout << "Amo mi carrera" << '\n';
        ++i;
    }

    std::cout << ":(" << '\n';
    std::cout << '\n';


    //---------------------------------------------------------
    //do while loop  (hace primero, pregunta despues. pa gustos sabores)  

    int j {0};

    do{
        std::cout << "Amo mi carrera" << '\n';
        ++j;
    }while(j < 10);

    std::cout << ":(" << '\n';
    std::cout << '\n';






    return 0;
}






















