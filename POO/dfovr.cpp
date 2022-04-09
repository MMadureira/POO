#include <iostream>
#include <string>


using namespace std;

class Pessoa
{
    public:
        string nome;

        
        // Construtor Default


        Pessoa()
        {

        }


        // Construtor Override


        Pessoa(string pnome)
        {
            nome = pnome;
        }

        void mostra_dados()
        {
            cout << "Nome: " + nome << endl;
        }
};

class PessoaFisica: public Pessoa
{
    public:
        int cpf;


        PessoaFisica()
        {

        }


        PessoaFisica(string pnome, int pcpf)
        {
            nome = pnome;
            cpf = pcpf;
        }

        void mostra_dados()
        {
            cout << "Nome: " + nome << endl;
            cout << "CPF: " + cpf << endl;
        }
};

class PessoaJuridica: public Pessoa
{
    public:
        int cnpj;
        string nome;


        PessoaJuridica()
        {

        }


        PessoaJuridica(string pnome, int pcnpj)
        {
            nome = pnome;
            cnpj = pcnpj;
        }

        void mostra_dados()
        {
            cout << "Nome: " + nome << endl;
            cout << "CNPJ: " + cnpj << endl;
        }
};

int main()
{
    Pessoa pessoa1;
    pessoa1.nome = "Matheus";
    pessoa1.mostra_dados();

    cout << endl;

}