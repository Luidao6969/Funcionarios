#ifndef ESTAGIARIO
#define ESTAGIARIO
#include"Funcionario.hpp"
#include <string>
using std::string;

class Estagiario : public Funcionario
{
private:
    
public:
    Estagiario(string nome, int ID, double salarioBase);
    double calcularSalarioTotal();
    string getNome();
};



#endif