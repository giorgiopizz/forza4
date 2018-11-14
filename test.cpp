#include "griglia.h"
using namespace std;
int main(){
        griglia a;
        a.printa();


        int n;
        int p;
        cin >> n >> p;
        while(n!=0 || p!=0){
                a.pedina(n,p);
                a.printa();
                if (a.status()==-1){
                        cout << "ciao";
                        break;
                }
                cin >> n >> p;

        }
}
