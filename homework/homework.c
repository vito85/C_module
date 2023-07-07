 //Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել տառ, ստուգել և տպել տառը բաղաձայն է, թե ձայնավոր:


// #include <stdio.h>

// int main(){
//     char symbol;
//     printf("Enter symbol \n");
//     scanf("%c", &symbol);
//     if(symbol == 'A' || symbol == 'E' || symbol == 'I' || symbol == 'O' || symbol == 'U' || symbol == 'Y'){
//         printf("dzaynavor e \n");
//     }else if(symbol == 'a' || symbol == 'e' || symbol == 'i' || symbol == 'o' || symbol == 'u' ||symbol == 'y'){
//         printf("dzhivory e \n"); 
//     }else{
//         printf("Baghadzyn e \n");
//     }


//     return 0;
// }




//Գրեք ծրագիր, թույլ կտա օգտվողին մուտքագրել երկու թիվ, ստուգել և տպել դրանցից ամենամեծը:

// #include <stdio.h>

// int main(){
//     int num1, num2;
//     printf("enter num1 \n");
//     scanf("%d",&num1);
//     printf("Enter num2 \n");
//     scanf("%d",&num2);
//     if(num1 >= num2){
//         printf("num1 > num2 %d \n" , num1);
//     }else {
//         printf("num1 < num2 %d \n", num2);
//     }

//     return 0;
// }




//Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել երեք թվեր,
// եթե երեք թվերից 2-ը հավասար են տպել՝ այդ երեքից ամենամեծ թիվը

#include <stdio.h>

int main() {
    int num1,num2,num3;
    printf("enter num1 \n");
    scanf("%d", &num1);
    printf("enter num2 \n");
    scanf("%d", &num2);
    printf("enter num3 \n");
    scanf("%d", &num3);
    if(num1 == num2 || num1 == num3 || num2 == num3){
        int max = (num1 > num2) ? num1 : num2;
         max = (max > num3) ? max : num3;
         printf("amenamec tiv@  %d\n", max);
    }
    return 0;
}