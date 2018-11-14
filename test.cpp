#include "griglia.h"
using namespace std;
int main(){
        griglia a;

        int n=1;
        int p=1;


        while((n!=0 || p!=0)&&(a.status()==-1)){
                a.printa();
                cin >> n >> p;
                a.pedina(n,p);
        }
}
