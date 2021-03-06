#include "griglia.h"

using namespace std;

griglia::griglia(){
        gioco=-1;
        for(int j=0;j<7;j++){
                for(int i=0;i<6;i++){
                        gri[i][j]='0';
                }
        }
}
void griglia::pedina(int n, char p){
        if(n>7 || n<1){
                cout << "Colonna non valida" << endl;
                return;
        }
        int i=5;
        //cerca lo 0 dove non è ancora stata inserita la pedina
        while(gri[i][n-1]!='0'){
                i--;
        }
        if(i<0){
                cout << "Non c'è più posto nella colonna " << n<<endl;
                return;
        }
        gri[i][n-1]=p;
        if(check(i,n-1)){
                cout << "Vittoria del giocatore "<<p<<endl;
                gioco=1;
        }
        else{
                if (i==0){
                        if(checktie()){
                                cout << "Parità"<<endl;
                                gioco=0;
                        }
                }
        }
}
void griglia::pedina(int n, int p){
        char playerSym[2]={'X','V'};
        if(n>7 || n<1){
                cout << "Colonna non valida" << endl;
                return;
        }
        int i=5;
        //cerca lo 0 dove non è ancora stata inserita la pedina
        while(gri[i][n-1]!='0'){
                i--;
        }
        if(i<0){
                cout << "Non c'è più posto nella colonna " << n<<endl;
                return;
        }
        gri[i][n-1]=playerSym[p-1];
        if(check(i,n-1)){
                cout << "Vittoria del giocatore "<<p<<endl;
                gioco=1;
        }
        else{
                if (i==0){
                        if(checktie()){
                                cout << "Parità"<<endl;
                                gioco=0;
                        }
                }
        }
}
void griglia::printa(){
        for(int i=0;i<6;i++){
                for(int j=0;j<7;j++){
                        cout <<" ---";
                }
                cout <<"\n";
                for(int j=0;j<7;j++){
                        cout << "| "<< gri[i][j]<<" ";
                }
                cout << "|"<< "\n";
        }
        for(int j=0;j<7;j++){
                cout <<" ---";
        }
        cout << "\n";
}
bool griglia::check(int m, int n){

        return false;
}
bool griglia::checkcol(int m, int n){
        int v=0;
        int p=gri[m][n];
        for(int i=0; i<3;i++){
            if(m+i>5){
                break;
            }
            else{
                    if(gri[m+i][n]!=p){
                            break;
                    }
                    else{
                           v++;
                    }
            }
        }
        if(v<3){
            for(int i=0; i<3;i++){
            if(m-i<0){
                break;
            }
            else{
                    if(gri[m-i][n]!=p){
                            break;
                    }
                    else{
                           v++;
                    }
            }
        }
        if(v<3){
                return false;
        }
        else{
                return true;
        }
                
}
bool griglia::checkrow(int m, int n){
int v=0;
        int p=gri[m][n];
        for(int i=0; i<3;i++){
            if(n+i>6){
                break;
            }
            else{
                    if(gri[m][n+i]!=p){
                            break;
                    }
                    else{
                           v++;
                    }
            }
        }
        if(v<3){
            for(int i=0; i<3;i++){
            if(m-i<0){
                break;
            }
            else{
                    if(gri[m-i][n]!=p){
                            break;
                    }
                    else{
                           v++;
                    }
            }
        }
        if(v<3){
                return false;
        }
        else{
                return true;
        }
}
//d indica che diagonale considerare, 0 è la diagonale da alto a sinistra a
//in basso a destra, 1 è il contrario
bool griglia::checkdiag(int m, int n, int d){

}
bool griglia::checktie(){
        for(int i=0;i<7;i++){
                if(gri[0][i]=='0'){

                        return false;
                }
        }
        return true;
}
void griglia::clear(){
        for(int j=0;j<7;j++){
                for(int i=0;i<6;i++){
                        gri[i][j]=0;
                }
        }
}
/*
 1 1
 1 1
 1 1
 1 1
 1 1
 1 1

 2 2
 2 2
 2 2
 2 2
 2 2
 2 2

 3 1
 3 1
 3 1
 3 1
 3 1
 3 1

 4 1
 4 1
 4 1
 4 1
 4 1
 4 1

 5 1
 5 1
 5 1
 5 1
 5 1
 5 1

 6 1
 6 1
 6 1
 6 1
 6 1
 6 1

 7 1
 7 1
 7 1
 7 1
 7 1
 7 1

 */

