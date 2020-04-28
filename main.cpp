#include <iostream>
#include<string>
using namespace std;

typedef struct Pessoa {
private: string nome;
private: int idade;

public: void setNome(string nome){
        this->nome = nome;
    }

public: string getNome(){
        return this->nome;
    }

public: void setIdade(int idade){
        this->idade = idade;
    }
public: int getIdade(){
        return this->idade;
    }
}T_Pessoa;

int main (){

    T_Pessoa pessoa;
    string nome;
    cout<<"Digite seu nome: "<<endl;
    cin>>nome;
    pessoa.setNome(nome);
    cout<<"Seu nome é: "<<pessoa.getNome()<<endl;
    return 0;
}

