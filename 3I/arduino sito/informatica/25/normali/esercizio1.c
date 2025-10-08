int main(){ 
    float costobiglietto;
    float costodocenti;
    float costototale;
    float numeroalunni;
    costobiglietto=12;
    costodocenti=12*2/2;
    printf("scrivi il numero degli alunni")
    scanf("%f,&numeroalunni")
    costototale=costobiglietto*numeroalunni+costodocenti;
    printf("il costo totale : %f",costototale)
}