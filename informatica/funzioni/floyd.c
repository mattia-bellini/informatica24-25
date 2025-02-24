/*sviluppare un programma in che
 sviluppi il triangolo di floyd*/
 #include<stdio.h>
 int triangolofloyd(int _num);
int main(){
    int num;
    do{
        printf("inserisci un numero: ");
        scanf("%d",&num);
    }while(num<0);
    triangolofloyd( num);
}
int triangolofloyd(int _num){
    int cnt=1;
for(int i=1; i<=_num;i++){
    for(int j=1;j<=_num;j++){
        while(cnt<i)
        printf("%d", cnt);
    }
}

}




