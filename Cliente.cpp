#include "Cliente.h"

Cliente::Cliente()
{
    nomeCliente = "";
    cpf_cnpj = "";
    endereco = "";
    fone = "";
}

Cliente::Cliente(string nome, string documento, string logradouro, string telefone)
{
    nomeCliente = nome;
    cpf_cnpj = documento;
    endereco = logradouro;
    fone = telefone;
}

Cliente::Cliente(string nome)
{
    nomeCliente = nome;
    cpf_cnpj = "";
    endereco = "";
    fone = "";
}
Cliente::Cliente(string nome, string documento)
{
    nomeCliente = nome;
    cpf_cnpj = documento;
    endereco = "";
    fone = "";
}

bool Cliente::operator!= (Cliente x)
{
    if(x.nomeCliente != nomeCliente || x.cpf_cnpj != cpf_cnpj || x.fone != fone || x.endereco != endereco)
        return true;
}
