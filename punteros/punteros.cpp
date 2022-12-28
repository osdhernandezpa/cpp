#include <iostream>


int main(){

    //una variable tiene direccion en memoria, nombre y valor
    //un puntero es una variable cuyo valor es la direccion de otra variable
    
    

    int *p_number {}; //guarda la direccion de un int no especificado

    int numero {6};
    int *p_int{&numero};//& significa direccion de (es importante)

    std::cout << "variable: " << numero << '\n';
    std::cout << "direccion: " << p_int << '\n';
    std::cout << '\n';
    
    int numero1{12};
    p_int = &numero1; //cambiar la direccion del puntero    
    std::cout << "direccion: " << p_int << '\n';
    std::cout << '\n';

    //int* guarda direcciones de int UNICAMENTE
    //el tamanho de todo puntero es SIEMRPE 8 bytes
    
    int *puntero_basura{nullptr}; //este puntero no apunta a ningun lado
    std::cout << "direccion basura: " << puntero_basura << '\n';
    std::cout << '\n';
        

    //el * sobre un puntero hace referencia al valor al que apunta el puntero

    int alreves{37};
    int *punterete{&alreves};
    std::cout << "valor alreves: " << *punterete << '\n';
    std::cout << '\n';

    
    //-----------------------------------------------------------------
    //punteros para caracteres

    char caracter {'A'};
    char *apuntando {&caracter};
    std::cout << "caracter: " << *apuntando << '\n';
    std::cout << "direccion: " << apuntando << '\n';
    std::cout << '\n';


    /*
    char *mensajito {"buenas"};//crea un string con un puntero hacia el 1er elm
    std::cout << "mensajito: " << *mensajito << '\n';
    std::cout << "direccion: " << mensajito << '\n';
    std::cout << '\n';
    no funciona en algunos compiladores
    */

    
    //---------------------------------------------------------------

    //memoria virtual y mapa de memoria son importantes

    //memoria dinamica: usar memoria del heap ademas de la de stack

    /*
     *
     *       SIEMPRE INICIALIZAR PUNTEROS----SIEMPRE
     *       NUNCA USAR PUNTEROS NULOS
     *
     */

    //memoria stack: variables declaradas en funcion main
    //variabels declaradas en alguna fucion
    //
    //En stack no se controla el tiempo de vida de una var
    //En heap si, se controla totalmente cuando se usa y libera memoria
    //
    //

    //----------------------------------------------------------------
    //
    //inicializar puntero con memoria dinamica
    //dar memoria al estar corriendo un programa y hacer que un puntero
    //apunte a esta

    int *p_prueba_heap{nullptr};
    p_prueba_heap = new int; //da espacio para un int en memoria heap
                        //esta menoria no puede ser usada por el sistema
                        //hasta que se libere
                        //la memoria dada es tal que puede contener un int
                        //(en este caso)
    std::cout << *p_prueba_heap << '\n';

    *p_prueba_heap = 77;
    std::cout << '\n';
    std::cout << "memoria que se tiene: " << *p_prueba_heap << '\n';
    std::cout << '\n';
    
    //new int da memoria a un int en heap. normalmente solo la da en stack
    //y la variable se borra al salir de los {} en los que este definida

    delete p_prueba_heap;
    p_prueba_heap = nullptr;//delete libera la memoria, null lo hace mas seguro

    //ejemplo 2: declarar, imprimir, liberar... siempre liberar

    int *p_numero5{new int};
    int *p_numero6{new int (22)};
    int *p_numero7{new int {23}};
    
    std::cout << '\n';
    std::cout << "p_numero5: " << p_numero5 << '\n';
    std::cout << "*p_numero5: " << *p_numero5 << '\n';

    std::cout << '\n';
    std::cout << "p_numero6: " << p_numero6 << '\n';
    std::cout << "*p_numero6: " << *p_numero6 << '\n';

    std::cout << '\n';
    std::cout << "p_numero7: " << p_numero7 << '\n';
    std::cout << "*p_numero7: " << *p_numero7 << '\n';
    std::cout << '\n';

    delete p_numero5;
    p_numero5 = nullptr;

    delete p_numero6;
    p_numero6 = nullptr;

    delete p_numero7;
    p_numero7 = nullptr;

    //    NUNCA USAR 2 VECES delete EN UN MISMO PUNTERO ------ NUNCA

    //-------------------------------------------------------------
    //dangling pointer: puntero que no apunta a memoria valida
    //MALO
    //Casos:
    //  puntero sin inicializar
    //  puntero liberado
    //  variaos punteros apuntando al mismo lugar
    //

    //colocar condicionales para chequear que la memoria este liberada
    //usar condicionales para tener puntero main y auxiliares


    //ejemplo 3: uso de punteros auxiliares adecuado


    int *p_numero8{new int {382}};//8 sera el main
    int *p_numero9{p_numero8};
    
    std::cout << '\n';
    std::cout << "p_numero8: " << p_numero8 << '\n';
    std::cout << "*p_numero8: " << *p_numero8 << '\n';

    if(!(p_numero8 == nullptr)){
        std::cout << '\n';
        std::cout << "p_numero9: " << p_numero9 << '\n';
        std::cout << "*p_numero9: " << *p_numero9 << '\n';
    }


    delete p_numero8;
    p_numero8 = nullptr;


    if(!(p_numero8 == nullptr)){
        std::cout << '\n';
        std::cout << "p_numero9: " << p_numero9 << '\n';
        std::cout << "*p_numero9: " << *p_numero9 << '\n';
    }else{        
        std::cout << "nonas perri " << '\n';
    }
    std::cout << '\n';

    
    //------------------------------------------------------------
    //cuando new falla

    //casi nunca falla, pero es importante chequear
    //alocaciones de momeria fallidas

    /*
    int *muy_grande {new int[1000000000000000000]};

    for (size_t i{} ; i < 1000000000000000000 ; ++i){
        int *muy_grande {new int [10000000]};
    }
    */
    

    //se puede usar este visaje o std::nothrow, buscar ultimo    
    /*
    int *muy_grande {new int[1000000000000000000]};

    for (size_t i{} ; i < 1000000000000000000 ; ++i){
        try{
            int *muy_grande {new int [10000000]};
        }catch(std::exception& ex){
            std::cout << "excepcion: " << ex.what() << '\n';
        }
    }
    */
    
    //----------------------------------------------------------
    //seguridad con punteros nulos

    int *p_nulon{};//inicializa a nullptr    

    if  (!(p_nulon == nullptr)){
        std::cout << "p_nulon apunta melo: " << p_nulon << '\n';
    }else{
        std::cout << "p_nulon apunta paila" << '\n';
    }    
    std::cout << '\n';

    delete p_nulon;

    //------------------------------------------------------------
    //goteras de momoria: perder acceso a un pedazo de memoria
    //que se dio dinamicamente al programa. i.e se pierde el puntero

    //ejemplo

    int *p_gotera {new int{67}}; //apunta a una direccion

    //se deberia liberar y resetear aca

    int numero_extra{55}; //vive en otra direccion

    p_gotera = &numero_extra;// el puntero apunta a otra direccion
                             // pero la anterior sigue en uso

    
    int *p_gotera1 {new int{53}}; //apunta a una direccion

    p_gotera1 = new int{44}; //se pierde tambien

    {
        int *p_gotera2 {new int {57}};//aca tambien se pierde
    }

    
    //----------------------------------------------------------------
    //arreglos dinamicos

    //usar new
    
    size_t size{10};

    double *p_salarios {new double[size]};//basura
    int *p_estudiantes {new(std::nothrow) int[size]{}};//ceros
    double *p_puntajasos {new(std::nothrow) double[size]{1,2,3,4,5}};//x y 0

    if (p_salarios){
        for (size_t i{}; i < size; ++i){
            std::cout << "valor salarios: " << p_salarios[i] << " : " << *(p_salarios+ 1) << '\n';
        }
    }
    std::cout << '\n';

    if (p_estudiantes){
        for (size_t i{}; i < size; ++i){
            std::cout << "valor estudiantes: " << p_estudiantes[i] << " : " << *(p_estudiantes+ 1) << '\n';
        }
    }
    std::cout << '\n';

    if (p_puntajasos){
        for (size_t i{}; i < size; ++i){
            std::cout << "valor puntajasos: " << p_puntajasos[i] << " : " << *(p_puntajasos+ 1) << '\n';
        }
    }
    std::cout << '\n';

    delete[] p_salarios;
    p_salarios = nullptr;

    delete[] p_salarios;
    p_salarios = nullptr;

    delete[] p_salarios;
    p_salarios = nullptr;

    //para arreglos generados en heap no funciona std::size
    //ni for loops de rango






    return 0;
}





















