#include "Funcionario.hpp"
#include "funcionarioRegular.hpp"
#include "Gerente.hpp"
#include "Estagiario.hpp"
#include <iostream>
using std::string;
using std::cout;
using std::endl;

int main()
{
    funcionarioRegular T1("Lucas", 1234, 1800);
    Estagiario T2("Vitor", 34567, 1800);
    Gerente T3("Rodrigo", 9875, 45000, 3000);
    Estagiario T4("Vanessa", 5832, 2000);
    Gerente T5("Clara", 3809, 30000, 3000);
    cout << T1.getNome() << ":" << T1.calcularSalarioTotal() << endl;
    cout << T2.getNome() << ":" << T2.calcularSalarioTotal() << endl;
    cout << T3.getNome() << ":" << T3.calcularSalarioTotal() << endl;
    cout << T4.getNome() << ":" << T4.calcularSalarioTotal() << endl;
    cout << T5.getNome() << ":" << T5.calcularSalarioTotal() << endl;

    system("pause");
}