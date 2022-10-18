#ifndef AGENDA_H_INCLUDED
#define AGENDA_H_INCLUDED

#include <iostream>

using namespace std;

template <typename T, int MAX>
struct Agenda{
    T itens[MAX];
    int qtd;
};

template <typename T, int MAX>
bool inicializaAgenda(Agenda<T,MAX> &ag){
    ag.qtd = 0;
    return true;
}

template <typename T, int MAX>
bool insereAgenda(Agenda<T,MAX> &ag, T dado){
    if (ag.qtd >= MAX) {
        cout << "Agenda Cheia!";
        return false;
    }
    else {
        ag.itens[ag.qtd] = dado;
        ag.qtd++;
        return true;
    }
}

#endif // AGENDA_H_INCLUDED
