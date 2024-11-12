#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]){
	if (argc == 4 || (argc == 3 && strcmp(argv[1], "sq") == 0)) {
        char* op = argv[1];
        char* a = argv[2];
        double r = 0;

        if (strcmp(op, "add") == 0 && argc == 4) {
            char* b = argv[3]; // Déclaration de 'b' ici
            r = _add(atof(a), atof(b));
            printf("%lf\n", r);
        }
        else if (strcmp(op, "sub") == 0 && argc == 4) {
            char* b = argv[3]; // Déclaration de 'b' ici
            r = _sub(atof(a), atof(b));
            printf("%lf\n", r);
        }
        else if (strcmp(op, "mul") == 0 && argc == 4) {
            char* b = argv[3]; // Déclaration de 'b' ici
            r = _mul(atof(a), atof(b));
            printf("%lf\n", r);
        }
        else if (strcmp(op, "div") == 0 && argc == 4) {
            char* b = argv[3]; // Déclaration de 'b' ici
            r = _div(atof(a), atof(b));
            printf("%lf\n", r);
        }
        else if (strcmp(op, "sq") == 0 && argc == 3) {
            r = _sq(atof(a));
            printf("%lf\n", r);
	}
	else {printf("Erreur de parametres");}
	}
	else {printf("Erreur de parametres");}
	return 0;
}

		
