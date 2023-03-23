 int main(){
    float peso,altura,IMC,total;
    char nome[20];
    printf("qual seu nome:");
    scanf("%s",nome);
    printf("qual seu peso:");
    scanf("%f",&peso);
    printf("qual sua altura:");
    scanf("%f",&altura);
    IMC=peso/(altura*altura);
    if(IMC<18.5){
    printf("vc esta magro precisa comer mais!");
    }else if(IMC<24.9){
     printf("vc esta no peso normalizado");  
    }else if(IMC<29.9){
        printf("vc esta acima do seu peso ideal");
    }else if(IMC<34.4){
        printf("vc esta com obesidade morbida tipo 1");
        }else if(IMC<36.7){
            printf("vc esta com obesidade morbida tipo 2");
               } else if(IMC<40.1){
                    printf("!!!! que isso!!!");
                }
                
        
   }
