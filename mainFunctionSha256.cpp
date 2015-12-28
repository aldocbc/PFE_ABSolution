#include <iostream>
#include "sha256.h"
 
using std::string;
using std::cout;
using std::endl;
 
int hashIdentityCall(int argc, char *argv[])
{
    string identity;
    cout << read.identity;
    string hashIdentity = sha256(identity);
 
    cout << "sha256('"<< identity << "'):" << hashIdentity << endl;
    return 0;
}
