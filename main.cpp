
#include "test.h"

int main(){

    player a("Arief",100,30);
    player b("ASS",200,50);

    a.print();
    b.print();

    a.Attack(b);

    
    a.print();
    b.print();
}

