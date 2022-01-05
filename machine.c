#include <stdio.h>
#include <stdlib.h>
typedef struct Tmaillon Tmaillon;

struct Tmaillon{
char value[256] ;
char type[256] ;
char nom[256];
Tmaillon* suivant;
};

struct Tmaillon *ALLOUER()
{
    return((struct Tmaillon*)malloc(sizeof(struct Tmaillon)));
};
struct Tmaillon *SUIVANT(struct Tmaillon *P)
{
    return (P->suivant);
}
void AFF_SUIVANT(struct Tmaillon *P,struct Tmaillon *Q){
P->suivant=Q;
}
struct Tmaillon *CREATION_TABLE_SYMBOLES()
{
        struct Tmaillon *tete=NULL;
        tete=ALLOUER();
        strcpy(tete->value,"");
        strcpy(tete->type,"");
		strcpy(tete->nom,"");
        AFF_SUIVANT(tete,NULL);
        return tete;
}
void AFF_VALUES(struct Tmaillon *P,char value[256],char type[256],char nom[256]){
strcpy(P->type,type);
strcpy(P->value,value);
strcpy(P->nom,nom);
}

void AJOUTER_ENTITE(Tmaillon *tete,char value[256],char type[256],char nom[256]){
Tmaillon *P,*Q;
if(strcmp(tete->value,"")==0){
    AFF_VALUES(tete,value,type,nom);
}else{
Q=ALLOUER();
AFF_VALUES(Q,value,type,nom);
AFF_SUIVANT(Q,NULL);
P=tete;
while(SUIVANT(P)!=NULL){
    P=SUIVANT(P);
}
AFF_SUIVANT(P,Q);
}
}

void AFFICHER_TABLE_SYMBOLES(struct Tmaillon *tete){
Tmaillon *P;
P=tete;
printf("=================================================================================================================\n");
printf("                                              TABLE DES SYMBOLES\n");
printf("=================================================================================================================\n");
while(P!=NULL){
    printf("|     Valeur: %s |  Type variable : %s  |  Nom variable : %s\n",P->value,P->type,P->nom);
    P=SUIVANT(P);
    printf("=================================================================================================================\n");
}
}

