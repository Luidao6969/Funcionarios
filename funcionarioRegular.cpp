#include"funcionarioRegular.hpp"

funcionarioRegular::funcionarioRegular(string nome, int ID, double salarioBase) : Funcionario(nome, ID, salarioBase)
{

}

double funcionarioRegular::calcularSalarioTotal()
{
    return salarioBase;
}

string funcionarioRegular::getNome()
{
    return Funcionario::getNome();
}