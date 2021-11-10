#include <iostream>
#include <stdlib.h>
#include "Node.h"

using namespace std;

int main(){
Node<string> *nodeString = new Node<string>(    info: "L");
nodeString->setNext(    next: new Node<string>( info: "M"));

    return EXIT_SUCCESS;
}