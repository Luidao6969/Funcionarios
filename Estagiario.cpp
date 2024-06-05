#include "Estagiario.hpp"
#include "Funcionario.hpp"

Estagiario::Estagiario(string nome, int ID, double salarioBase) : Funcionario(nome, ID, salarioBase)
{

}

double Estagiario::calcularSalarioTotal()
{
    return salarioBase * 0.75;
}

string Estagiario::getNome()
{
    return Funcionario::getNome();
}