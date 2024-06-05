#ifndef GERENTE
#define GERENTE
#include <string>
#include "Funcionario.hpp"
using std::string;

class Gerente : public Funcionario
{
private:
    double BonusAnual;
public:
    Gerente(string nome, int ID, double salarioBase, double BonusAnual);
    double calcularSalarioTotal();
    string getNome();
};



#endif