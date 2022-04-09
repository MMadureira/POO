#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Mamifero
{
    public:
        string especie;
        string raca;
        string nome;

        string getEspecie()
        {
            return this-> especie;
        }

        void setEspecie(string especie)
        {
            this->especie = especie;
        }

        string getRaca()
        {
            return this-> raca;
        }

        void setRaca(string raca)
        {
            this->raca = raca;
        }

        string getNome()
        {
            return this-> nome;
        }

        void setNome(string nome)
        {
            this->nome = nome;
        }

};

class Cachorro: public Mamifero
{
    public:
        void latir()
        {
            cout << " Está latindo";
        }
};

class Gato: public Mamifero
{
    public:
        void miar()
        {
            cout << "Está miando";
        }
};

class Cavalo: public Mamifero
{
    public:
        int idade;

        int getIdade()
        {
            return this -> idade;
        }

        void setIdade(int idade)
        {
            this -> idade = idade;
        }

        void correr()
        {
            cout << " esta correndo!\n";
        }

};

int main()
{
    string especie, raca, nome;
    
    Cachorro c1;
    cout << "Informe a espécie do mamifero: ";
    getline(cin,especie);
    c1.setEspecie(especie);
    cout << "Informe a raca do " << c1.getEspecie();
    cout << ": ";
    getline(cin,raca);
    c1.setRaca(raca);
    cout << "Informe o nome do " << c1.getEspecie();
    cout << ": ";
    getline(cin,nome);
    c1.setNome(nome);
    cout << "\n";
    cout << "Espécie: " << c1.getEspecie() << "\n";
    cout << "Raça: " << c1.getRaca() << "\n";
    cout << "Nome: " << c1.getNome() << "\n";
    cout << c1.getNome();
    c1.latir(); cout << "\n\n";

    Gato g1;
    cout << "Informe a especie do mamifero: ";
    getline(cin,especie);
    g1.setEspecie(especie);
    cout << "Informe a raca do " << g1.getEspecie();
    cout << ": ";
    getline(cin,raca);
    g1.setRaca(raca);
    cout << "Informe o nome do " << g1.getEspecie();
    cout << ": ";
    getline(cin,nome);
    g1.setNome(nome);
    cout << "\n";
    cout << "Espécie: " << g1.getEspecie() << "\n";
    cout << "Raça: " << g1.getRaca() << "\n";
    cout << "Nome: " << g1.getNome() << "\n";
    cout << g1.getNome();
    g1.miar(); cout <<"\n\n";

    int idade;
    Cavalo ca1;
	cout << "Informe a especie do mamifero: ";
	getline(cin,especie);
	ca1.setEspecie(especie);
    cout << "Informe a raca do "  << ca1.getEspecie();
	cout << ": ";
	getline(cin,raca);
    ca1.setRaca(raca);
	cout << "Informe o nome do " << ca1.getEspecie();
	cout << ": ";
	getline(cin,nome);
    ca1.setNome(nome);
	cout << "Informe a idade do " << ca1.getEspecie();
	cout << ": ";
	scanf("%d", &idade);
    ca1.setIdade(idade);
    cout << "\n";
	cout << "Espécie: " << ca1.getEspecie() << "\n";
    cout << "Raça: " << ca1.getRaca() << "\n";
    cout << "Nome: " << ca1.getNome() << "\n";
    cout << "Idade: " << ca1.getIdade() << "\n";
	cout << ca1.getNome();
	ca1.correr(); cout <<"\n\n";

};