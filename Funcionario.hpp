#ifndef FUNCIONARIO
#define FUNCIONARIO
#include <iostream>
#include <string>
using std::string;

class Funcionario
{
private:
    string nome;
    int ID;
protected:
    double salarioBase;
public:
    Funcionario(string nome, int ID, double salarioBase);
    string getNome();
}; 

#endif