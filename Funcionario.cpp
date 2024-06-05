#include"Funcionario.hpp"

Funcionario::Funcionario(string nome, int ID, double salarioBase)
{
    this->nome = nome;
    this->ID = ID;
    this->salarioBase = salarioBase;

};

string Funcionario::getNome()
{
    return nome;
}