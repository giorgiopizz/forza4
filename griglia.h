
#include <iostream>

class griglia{
public:
        griglia();
        //n colonna nella quale inserire la pedina e p giocatore (X o V)
        void pedina(int n,char p);
        void pedina(int n, int p);
        //controlla se nelle vicinanze della pedina alla posizione (m,n) ci sono
        //pedine dello stesso tipo
        bool check(int m, int n);
        bool checktie();
        void printa();
        void clear();
        int status(){
                return gioco;
        }
private:
        //le pedine sono 0 V X
        char gri[6][7];
        //gioco assume -1 quando si sta giocando, 0 per la parità e 1 per la
        //vittoria di uno dei due
        int gioco;
};
