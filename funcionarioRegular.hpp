#ifndef FUNCIONARIOREGULAR
#define FUNCIONARIOREGULAR
#include <iostream>
#include <string>
#include"Funcionario.hpp"
using std::string;

class funcionarioRegular : public Funcionario
{
private:
    
public:
    funcionarioRegular(string nome, int ID, double salarioBase);
    double calcularSalarioTotal();
    string getNome();
};

#endif
