//Qual è l'output se in input fossero passati i parametri
//s = "conosco c.,sono ricco"
void mistero_3(char *s) {
    int len = strlen(s);     //definisce la lungezza cioè 21

    int m = len / 2;   //divide tutto e trova la metà che pero la lunghezza è 21 quindi prende 10 
    int offset;                  //offest penso determini l'inizio della seconda metà e se diciamo l'indice è dispari fa +1 
    if(len % 2 == 0) offset = m;
    else offset = m + 1;

    for (int i = 0; i < m; i++) {    //scambia il carattere nella posizione i con il carattere nella posizione i + offset
        char t = s[i]; //salva temporaneamente il valore in t
        s[i] = s[i + offset];      //il valore di i+offset viene salvato in s di i
        s[i + offset] = t;        // i+ offset prende il valore salvato in t
    }
    printf("%s", s);                // l'output dovrebbe essere sono ricco,conosco c.
                                    // NON SO SE SIA GIUSTO MA CI HO PROVATO :))))))

}