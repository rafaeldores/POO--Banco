#ifndef CONTA_H
#define CONTA_H

#include <string>
#include <list>
#include "Cliente.h"
#include "Movimentacao.h"

using std::string;
using std::list;

class conta{
  public:
    numConta(string cliente); // inicializa um numero de conta
    int getNumConta(); //obtem o valor do numero da conta
    double getSaldo(); //obtem o valor do saldo disponivel na conta
    cliente getCliente(); //obtem o nome do cliente
    int static getProximoNumConta(); //obtem o proximo numero da conta
    list <Movimentacao> getMovimentacoes(); //obtem as movimentaÃ§Ãµes feitas na conta
    void debita(double d, string deb); //debita um valor, recebe como parametros o valor a ser debitado e a descriÃ§Ã£o
    void credita(double c, string cred); //credita um valor, recebe como parametros o valor a ser creditado e a descriÃ§Ã£o
    double extratoDias(int inicio, int fim); //retorna as movimentaÃ§Ãµes ocorridas de uma data inicial atÃ© uma data final
    double extratoAtual(int inicio); //retorna as movimentaÃ§Ãµes ocorridas de uma data incial atÃ© a data atual
    double extratoMes(); //retorna as movimentaÃ§Ãµes ocorridas no ultimo mes

  private:
    int numConta;
    double saldo;
    Cliente cliente;
    int static proximoNumConta;
    list <Movimentacao> movimentacoes;
    friendly class Cliente;
    friendly class Movimentacao;

};

#endif
