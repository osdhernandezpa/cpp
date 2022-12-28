#include <iostream>
#include <cstring>
#include <string>


int main(void){

    //c-string y std::string

    //alfanumerico, alfabetico, minuscula o mayuscula, digito
    //pasar de minus a mayus
    //cctype lib

    //------ alfanumerico --------

    std::cout << "C es alfanumerico: " << std::isalnum('C') << '\n';
    std::cout << "^ no es alfanumerico: " << std::isalnum('^') << '\n';
    std::cout << '\n';

    //se puede usar como condicional


    //------- alfabetico ---------

    std::cout << "C es alfabetico: " << std::isalpha('C') << '\n';
    std::cout << "^ no es alfabetico: " << std::isalpha('^') << '\n';
    std::cout << '\n';

    //------- chaquear espacios ---------

    std::cout << "  es  : " << std::isblank(' ') << '\n';
    std::cout << "C no es : " << std::isblank('C') << '\n';
    std::cout << '\n';

    //------- minus o mayus -------------   

    std::cout << "C es mayus: " << std::isupper('C') << '\n';
    std::cout << "c no es mayus: " << std::isupper('c') << '\n';

    std::cout << "c es minus: " << std::islower('c') << '\n';
    std::cout << "C no es minus: " << std::islower('C') << '\n';
    std::cout << '\n';

    //-------- digito -------------

    std::cout << "1 es digito: " << std::isdigit('1') << '\n';
    std::cout << "C no es digito: " << std::isdigit('C') << '\n';
    std::cout << '\n';

    //-------- de minus a mayus y viceversa -------------------
    
    std::cout << "original: " << "C" << '\n';
    std::cout << "final: " << std::tolower('C') << '\n';
    std::cout << '\n';

    std::cout << "original: " << "c" << '\n';
    std::cout << "final: " << std::toupper('c') << '\n';
    std::cout << '\n';

    //*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+
    //----------------------------------------------------------
    //c-string

    //------- std::strlen -----------

    const char mensaje1 [] {"me aburri"};
    const char* mensaje2 {"sigo aburrido"};

    // strlen ignora \0

    std::cout << "strlen mensaje1: " << std::strlen(mensaje1) << '\n';
    std::cout << "strlen mensaje2: " << std::strlen(mensaje2) << '\n';
    std::cout << '\n';

    std::cout << "sizeof mensaje1: " << sizeof(mensaje1) << '\n';
    std::cout << "sizeof mensaje2: " << sizeof(mensaje2) << '\n';
    std::cout << '\n';

    //-------- std::strcmp -------- para comparar ------------
    
    const char* string1 {"Colombia"};
    const char* string2 {"Dolombia"};

    std::cout << "strcmp: " << string1 << " , " << string2 << " , " << std::strcmp(string1,string2) <<  '\n';

    const char* string3 {"Colombia"};
    const char* string4 {"Colombib"};

    std::cout << "strcmp: " << string3 << " , " << string4 << " , " << std::strcmp(string3,string4) <<  '\n';

    const char* string5 {"Colonbia"};
    const char* string6 {"Colombia"};

    std::cout << "strcmp: " << string5 << " , " << string6 << " , " << std::strcmp(string5,string6) <<  '\n';

    const char* string7 {"Colombia"};
    const char* string8 {"Eolombia"};

    std::cout << "strcmp: " << string7 << " , " << string8 << " , " << std::strcmp(string7,string8) <<  '\n';

    const char* string9 {"Colombia"};
    const char* string10 {"Dolombib"};

    std::cout << "strcmp: " << string9 << " , " << string10 << " , " << std::strcmp(string9,string10) <<  '\n';

    const char* string11 {"Colombia"};
    const char* string12 {"Dpmpncjb"};

    std::cout << "strcmp: " << string11 << " , " << string12 << " , " << std::strcmp(string11,string12) <<  '\n';



    std::cout << '\n';


    //------- std::strncmp  -------------- para comparar mas

    //buscar, anhade parametro n para solo comparar n caracteres
    //los primeros n

    //------- std::strchr y strrchr ----- primera y ult ocurrencia

    //buscar tambien, ayudan a buscar ocurrencias de caracteres



    //*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+
    //----------------------------------------------------------
    //concatenacion y copeo de c-strings

    char dest[50] = "Buenas ";
    char src[50] = "buenas";


    std::cout << "len ini: " << std::strlen(dest) << '\n';

    std::strcat(dest, src);//dest tiene que ser lo sufmente grande
    std::strcat(dest, " chaos");
    std::cout << "dest: " << dest << '\n';
    std::cout << "len fin: " << std::strlen(dest) << '\n';
    std::cout <<  '\n';

    //  std::strncat(dest,src,n) concatena solo n caracteres

    const char* src3 = "se acabo el anho";
    char *dest3 = new char[std::strlen(src3) + 1];
    std::strcpy(dest3,src3);    
    std::cout << "dest3: " << dest3 << '\n';
    std::cout <<  '\n';

    // std::strncpy(dest,src,n) copia n caracteres
    
    //es canson manejar arreglos de caracteres

    //*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+
    //----------------------------------------------------------
    //std::string

    std::string nombre_completo;//vacio
    std::string planeta{"Tierra"};//Tierra
    std::string planeta_favorito{planeta};//Tierra
    std::string mensaje{"Buenas buenas",6};//toma solo 6 (Buenas)
    std::string mensaje_raro(4, 'e');//eeee
    std::string saludo{"Buenos dias estrellitas"};//lo que dice
    std::string saludo_raro{saludo,7,4};//empieza en 7 y toma 4 (dias)

    std::cout << "nombre: " << nombre_completo << '\n';
    std::cout << "planeta: " << planeta << '\n';
    std::cout << "planeta preferido: " << planeta_favorito << '\n';
    std::cout << "mensaje: " << mensaje << '\n';
    std::cout << "mensaje raro: " << mensaje_raro << '\n';
    std::cout << "saludo: " << saludo << '\n';
    std::cout << "saludo raro: " << saludo_raro << '\n';
    std::cout << '\n';

    //ver libreria para mas
    







    return 0;
}













