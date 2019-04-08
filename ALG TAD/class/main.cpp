#include <iostream>

using namespace std;

class ContaBancaria
{

int operaCredito()
{
    int x=0;

    return  x=0;
}
private:
    string c;
    string s;
public:
    void AberturaConta()
    {

        cout<< "digite o numero da sua conta:";
        cin >> c;
        cout<< "Digite quanto quer colocar na conta: ";
        cin>> s;
    }
    void saida()
    {
        cout<<"numero da conta: "<<c;
        cout<<"saldo:"<<operaCredito();
    }
};

int main()
{
    ContaBancaria t;
    t.AberturaConta();
    t.saida();

    return 0;
}
