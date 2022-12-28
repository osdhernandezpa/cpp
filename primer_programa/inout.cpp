#include <iostream>
#include <string>
#include <sstream>


int main(void)
{
    std::cout << "que queres?" << '\n';
    std::cerr << "nonas perri" << '\n';
    std::clog << "meloncios" << '\n';
   
    std::cout << '\n';
    std::cout << '\n';


    int age;
    std::string name;

    std::cout << "nombre: " << std::endl;
    std::cin >> name;
    std::cout << std::endl;

    std::cout << "edad: " << std::endl;
    std::cin >> age;
    std::cout << std::endl;

    std::cout << name << " tiene " << age << " anhos " << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::string varias;

    std::cout << "escribir varias palabras: " << std::endl;
    std::getline(std::cin,varias);
    std::cout << std::endl;

    std::cout << "se escribio: " << varias << std::endl;


    return 0;

}





















