#ifndef AUTH_H_INCLUDED
#define AUTH_H_INCLUDED

typedef struct personne {
    int id;
    char *nom;
    char *prenom;
    char nomutilisateur[20];
    char *password;
    double *age;
} personne;


int user_register(personne user);

#endif
