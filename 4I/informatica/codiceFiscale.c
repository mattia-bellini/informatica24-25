/*
Scrivere un programma in linguaggio C che calcoli e visualizzi il codice
fiscale (senza il carattere di controllo finale) chiedendo all’utente di 
inserire nome, cognome, data di nascita nel formato GG/MM/AAAA, sesso (M o F).
Sarà necessario verificare la correttezza degli input,
quindi nome e cognome devono essere composti solo da lettere; la data 
deve essere composta solo da numeri (oltre agli eventuali /, 
si può scegliere se far inserire un valore della data alla 
volta o tutta la data con il separatore /); il sesso può avere solo la lettera M o F.
Per il controllo di nome, cognome e data, si suggerisce
di leggere l’input carattere per carattere usando getchar()
codice del comune di nascita (per questo esercizio useremo G186
  */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* stringa;

void estrai_consonanti(stringa input, stringa output) {
    int j = 0;
    for (int i = 0; i < strlen(input); i++) {
   char c = input[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
     char superiore = (c >= 'a' && c <= 'z') ? c - 32 : c; 
     if (superiore != 'A' && superiore != 'E' && superiore != 'I' && superiore != 'O' && superiore != 'U') {
    output[j++] = superiore;
            }
        }
    }
    output[j] = '\0';
}


void estrai_vocali(stringa input, stringa output) {
    int j = 0;
    for (int i = 0; i < strlen(input); i++) {
        char c = input[i];
     char superiore = (c >= 'a' && c <= 'z') ? c - 32 : c;
    if (superiore == 'A' || superiore == 'E' || superiore == 'I' || superiore == 'O' || superiore == 'U') {
    output[j++] = superiore;
        }
    }
    output[j] = '\0';
}


void calcola_cognome(stringa cognome, stringa codice) {
    char consonanti[50], vocali[50];
    estrai_consonanti(cognome, consonanti);
    estrai_vocali(cognome, vocali);

    int j = 0;
    for (int i = 0; i < strlen(consonanti) && j < 3; i++)
    codice[j++] = consonanti[i];
    for (int i = 0; i < strlen(vocali) && j < 3; i++)
    codice[j++] = vocali[i];
    while (j < 3)
    codice[j++] = 'X';
    codice[3] = '\0';
}


void calcola_nome(stringa nome, stringa codice) {
    char consonanti[50], vocali[50];
    estrai_consonanti(nome, consonanti);
    estrai_vocali(nome, vocali);

    int j = 0;
    if (strlen(consonanti) >= 4) {
    codice[j++] = consonanti[0];
    codice[j++] = consonanti[2];
    codice[j++] = consonanti[3];
    } else {
        for (int i = 0; i < strlen(consonanti) && j < 3; i++)
    codice[j++] = consonanti[i];
   for (int i = 0; i < strlen(vocali) && j < 3; i++)
            codice[j++] = vocali[i];
 while (j < 3)
     codice[j++] = 'X';
    }
    codice[3] = '\0';
}


char calcola_mese(int mese) {
    switch (mese) {
        case 1:  return 'A';
    case 2:  return 'B';
    case 3:  return 'C';
    case 4:  return 'D';
    case 5:  return 'E';
    case 6:  return 'H';
    case 7:  return 'L';
    case 8:  return 'M';
    case 9:  return 'P';
    case 10: return 'R';
    case 11: return 'S';
    case 12: return 'T';
    default: return 0;
    }
}

void costruisci_codice_fiscale(stringa nome, stringa cognome, int giorno, int mese, int anno, char sesso, stringa codice) {

    calcola_cognome(cognome, codice);


    calcola_nome(nome, codice + 3);

    int aa = anno % 100;
    codice[6] = '0' + (aa / 10);
    codice[7] = '0' + (aa % 10);


    codice[8] = calcola_mese(mese);


    if (sesso == 'F' || sesso == 'f')
    giorno += 40;
    codice[9]  = '0' + (giorno / 10);
    codice[10] = '0' + (giorno % 10);

    strcpy(codice + 11, "G186");

    codice[15] = '\0'; 
}

int main() {
    char nome[50], cognome[50], sesso;
    int giorno, mese, anno;
    char codice_fiscale[17];

    printf("Inserisci il nome: ");
    scanf("%s", nome);
    printf("Inserisci il cognome: ");
    scanf("%s", cognome);
    printf("Inserisci la data di nascita (GG/MM/AAAA): ");
    scanf("%d/%d/%d", &giorno, &mese, &anno);
    printf("Inserisci il sesso (M/F): ");
    scanf(" %c", &sesso);

    costruisci_codice_fiscale(nome, cognome, giorno, mese, anno, sesso, codice_fiscale);

    printf("\n Il codice fiscale è: %s\n", codice_fiscale);

    return 0;
}