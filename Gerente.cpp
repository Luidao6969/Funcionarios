#include "Gerente.hpp"

Gerente::Gerente(string nome, int ID, double salarioBase, double BonusAnual) : BonusAnual(BonusAnual), Funcionario(nome, ID, salarioBase)
{

}

double Gerente::calcularSalarioTotal()
{
    return salarioBase + BonusAnual;
}

string Gerente::getNome()
{
    return Funcionario::getNome();
}