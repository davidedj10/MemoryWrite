#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{

    int variable = 10;

    char a = 'y';

    while (true) {
        
        if(a == 'y'){
            
        printf("variable content = %i with addr = %p\n", variable, &variable);
        printf("Refresh variable? (y/n)");
        cin>>a;
            
        }else{
            
            return 1;
            
        }
    }
    
    return 0;
}

