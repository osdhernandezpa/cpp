


// USAR     g++ -std=c++2a     PARA USAR C++20



#include "maximo.h"
#include <iostream>
// IMPORTANTE: es necesario compilar todos los cpp

void ejemplo();
int sumar_multi (int a, int b);

void say_age(int age);
void diga_edad(int* edad);
void diga_edade(int& edade);

void max_str(const std::string& input1, const std::string input2,  std::string& output );
void max_int(int input1, int input2, int& output);
void max_double(double input1, double input2, double* output);

int suma (int a, int b);

int max (int a, int b);
double max (double a, double b);
std::string max (std::string a, std::string b);

template <typename T> T maximum (T a, T b);
                      //de aca a la der se les llama param de la plantilla
                      //lo otro son los argumentos de la plantilla
                      //(maximum<tipo deseado>(a,b))

template <typename T> const T& maximaso (const T& a, const T& b);

//template <> const char* maximum<const char*> (const char* a, const char* b);
//notacion para especificar comportamiento en casos especiales
//es necesario especificar la funcion mas adelante

//los headers permiten declarar las funciones al comienzo pero
//dejar la definicion al final del codigo


int main(int argc, char **argv){

    //Las definiciones solo pueden aparecer una vez

    //una funcion es una porción de código reusable
    //que toma inputs opcionales y da cierto output deseado

    /*
    return_type function_name (param1, param2, ...){
        
        <operaciones>


        return return_type
    }   
    */

    //una funcion es unica en base a su signatura: nombre y params

    //result_var = function_name (arg1,arg2)
    //function()
    

    ejemplo();
    std::cout << "maximo entre 1 y 2: " <<  maximo(1,2) << '\n';
    std::cout << '\n';

    int numero1 {2};
    int numero2 {3};

    std::cout << "antes de suma y multi: "  << '\n';
    std::cout << "numero1: " <<  numero1 << '\n';
    std::cout << "numero2: " <<  numero2 << '\n';
    std::cout << '\n';

    std::cout << "suma y multi: " << sumar_multi(numero1,numero2)  << '\n';
    std::cout << '\n';

    std::cout << "despues de suma y multi: "  << '\n';
    std::cout << "numero1: " <<  numero1 << '\n';
    std::cout << "numero2: " <<  numero2 << '\n';
    std::cout << '\n';

    int age {23};
    
    std::cout << "age antes: " << age << '\n';
    say_age (age); //age queda sin afectarse, say_age cambia una copia
    std::cout << "age despues: " << age << '\n';
    std::cout << '\n';

    int edad {23};

    std::cout << "edad antes: " << edad << '\n';
    diga_edad (&edad); //edad si cambia, como recibe puntero se mete dir
    std::cout << "edad despues: " << edad << '\n';
    std::cout << '\n';

    int edade {23};

    std::cout << "edade antes: " << edade << '\n';
    diga_edade (edade); //edad si cambia, como recibe puntero se mete dir
    std::cout << "edade despois: " << edade << '\n';
    std::cout << '\n';
    std::cout << '\n';

    //se pueden usar parametros como output, ademas de como input
    // se usan punteros o ref para hacer visibles los efectos de la funcion
        //ver max_str max_int y max_double como ejemplos
        //
        //param output se deben introducir en la func de forma que
        //sea posible modificarlos (punteros o ref)
        //
        //param input no deben ser modificable desde dentro de una funcion
        //esto se puede forzar usando const

    //demostracion

    std::string out_str;
    std::string string1("Argentina");
    std::string string2("Colombia");
    max_str(string1, string2, out_str);
    std::cout << "max_str : " << out_str << '\n';

    int out_int{}; 
    int entero1{34}; 
    int entero2{67}; 
    max_int(entero1, entero2, out_int);
    std::cout << "max_int : " << out_int << '\n';

    double out_double{}; 
    double real1{12.3}; 
    double real2{3.14}; 
    max_double(real1, real2, &out_double);
    std::cout << "max_double : " << out_double << '\n';
    std::cout << '\n';
    std::cout << '\n';

    //tambien se puede obtener datos a partir del return
    //no solo a partir de parametros output

    int a {34};
    int b {16};

    int resultado = suma(a,b); // suma() tiene su propia dir, dif de int resul
    std::cout << "En main: &resultado : " << &resultado << '\n';
    std::cout << "suma: " << resultado << '\n';
    std::cout << '\n';
    

    //-------------------------------------------------------------
    //overloading de funciones

    /*
    int max(int a, int b);
    double max(int a, int b);
    std::string max(const std::string& a, const std::string b);
    poder usar varios tipos de datos en una misma funcion
    */

    //NO SE PUEDE HACER OVERLOAD EN EL TIPO DE DATO DE RETORNO
    //PUES ESTE NO ES RELEVANTE EN LA UNICIDAD DE UNA FUNCION

    int entero3 {41};
    int entero4 {29};

    double real3 {47.2};
    double real4 {55.01};

    std::string string3 {"Buenasbuenas"};
    std::string string4 {"Chaos piros"};

    std::cout << "max(int): " << max(entero3,entero4) << '\n';
    std::cout << "max(double): " << max(real3,real4) << '\n';
    std::cout << "max(string): " << max(string3,string4) << '\n';
    std::cout << '\n';


    //----------------------------------------------------------------
    //funciones lambda

    //funciones anonimas (sin nombres) 

    /*
    [capture list] (parameters) -> return type{
        cuerpazo
    };
    es importante tener el ;
    */

    //EJEMPLOS DE FUNCIONES LAMBDA


    //1
    auto func = [](){
        std::cout << "Buenasbuenas" << '\n';
    };
    func();

    //2
    [](){
        std::cout << "Buenasbuenas" << '\n';
    }();

    //3
    [](double a , double b ){
        std::cout << "a + b: " << (a+b) << '\n';
    }(12.1,5.7);

    //4
    auto resultado_lambda = [](double a , double b ){
        return a+b;
    }(12.1,5.7);
        std::cout << "resultado: " << resultado_lambda << '\n';
    
    //5
    std::cout << "resultado: " << [](double a , double b ){
        return a+b;
    }(12.1,5.7) << '\n';
    
    //6
    auto resultado_lambda1 = [](double a , double b )->double{
        return a+b;
    }(12.1,5.7);
    std::cout << "resultado: " << resultado_lambda1 << '\n';
    std::cout << '\n';
    std::cout << '\n';

    //----------------------------------------------------------
    //usar capture list

    double reganho1 {10};
    double reganho2 {20};

    auto funcaso = [reganho1,reganho2](){
        std::cout << "suma de regaños: " << reganho1 + reganho2 << '\n';
    };
    funcaso();
    std::cout << '\n';

    //una funcion lambda es como un tipo de dato

    //capturar por valor => copia
    //capturar por ref => edita original
    //igual que en funciones normales


    //captura por valor
    int c {42};

    auto lambda_c = [c](){
        std::cout << "valor interno: " << c << '\n'; 
    };

    for(int i{}; i<5 ; ++i){
        std::cout << "valor externo: " << c << '\n'; 
        lambda_c();
        ++c;
    }
    std::cout << '\n';//en este e.g se cambia ext pero interno se mantiene

    //captura por referencia
    int d {42};

    auto lambda_d = [&d](){
        std::cout << "valor interno: " << d << '\n'; 
    };

    for(int i{}; i<5 ; ++i){
        std::cout << "valor externo: " << d << '\n'; 
        lambda_d();
        ++d;
    }
    std::cout << '\n';//en este e.g todo cambia
    std::cout << '\n';


    //------------------------------------------------------------
    //capturar todo en contexto

    //todo por valor
    auto lambda_todo_c = [=](){
        std::cout << "valor interno: " << c << '\n'; 
    };

    for(int i{}; i<5 ; ++i){
        std::cout << "valor externo: " << c << '\n'; 
        lambda_todo_c();
        ++c;
    }
    std::cout << '\n';

    //todo por ref
    auto lambda_todo_d = [&](){
        std::cout << "valor interno: " << d << '\n'; 
    };

    for(int i{}; i<5 ; ++i){
        std::cout << "valor externo: " << d << '\n'; 
        lambda_todo_d();
        ++d;
    }
    std::cout << '\n';
    std::cout << '\n';

    //----------------------------------------------------------
    //funciones plantilla

    //plantillas para funciones (blueprints), punto de control
    //para generar funciones
    //sirve para overloads

    /*    
    template <typename T>
    T maximum(T a, T b){
        return (a>b)? a : b ;
    }
    */

    int entero5 {10};
    int entero6 {23};

    double real5 {34.7};
    double real6 {23.4};

    std::string string5 {"Venezuela"};
    std::string string6 {"Peru"};

    std::cout << "maximum(int): " << maximum(entero5,entero6) << '\n';
    std::cout << "maximum(double): " << maximum(real5,real6) << '\n';
    std::cout << "maximum(string): " << maximum(string5,string6) << '\n';
    std::cout << '\n';
 
    std::cout << "maximum(int,double): " << maximum<double>(entero5,real6) << '\n';
    std::cout << '\n';
    std::cout << '\n';



    std::cout << "maximaso(int): " << maximaso(entero5,entero6) << '\n';
    std::cout << "maximaso(double): " << maximaso(real5,real6) << '\n';
    std::cout << "maximaso(string): " << maximaso(string5,string6) << '\n';
    std::cout << '\n';
 
    std::cout << "maximaso(int,double): " << maximaso<double>(entero5,real6) << '\n';
    std::cout << '\n';




    //templates no son codigo c++, solo son plantillas
    //el compilador no genera duplicados de la funcion
    //genera una unica instancia
    
    //       VER cppinsihgts.io 

    //usar punteros en plantillas con cuidado

    

















    return 0;
}



void ejemplo(){
    std::cout << "Esta funcion no tiene input ni output" << '\n';
    return ;
}

int sumar_multi (int a, int b){
    return ((++a) * (++b));
}

void say_age(int age){
    std::cout << "tenés " << ++age << " años" << '\n';
}

void diga_edad(int* edad){
    ++(*edad);
    std::cout << "sumercé tiene " << *edad << " años" << '\n';
}

void diga_edade(int& edade){
    ++edade;
    std::cout << "você tem " << edade << " anos" << '\n';
}

void max_str(const std::string& input1, const std::string input2, std::string& output ){
    if (input1 > input2){
        output = input1;
    }else{
        output = input2;
    }
}

void max_int(int input1, int input2, int& output){
    if (input1 > input2){
        output = input1;
    }else{
        output = input2;
    }
}

void max_double(double input1, double input2, double* output){
    if (input1 > input2){
        *output = input1;
    }else{
        *output = input2;
    }
}

int suma (int a, int b){
    int resultado = a + b;
    std::cout << "En suma: &resultado : " << &resultado << '\n';
    return resultado;
}

int max (int a, int b){
    return (a>b)? a : b;
}

double max (double a, double b){
    return (a>b)? a : b;
}

std::string max (std::string a, std::string b){
    return (a>b)? a : b;
}



template <typename T> T maximum (T a, T b){
    return (a>b)? a : b;
}
//a y b deben soportar >, o si no, paila ñero

template <typename T> const T& maximaso (const T& a, const T& b){
    return (a>b)? a : b;
}













