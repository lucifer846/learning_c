/*int a = 23;
    int b = a;
    int c = b+1;
    int d = 1,e;

    int oldage = 22;
    int years = 2;
    int newage = oldage +years;
    int x,y,z;
    x=y=z=2;*/
/*int a,b;
    a=3,b=-5;
    float sum = a+b;
    float product = a*b;
    float different = b-a;
    int p,q,l=1;
    float power = pow(b,a);
    printf("power %f\n",power);
    int rem = b%a;
    printf("the remainder is %d", rem);*/
    /*#include<stdio.h>
#include<math.h>
int main(){
    printf("product is %f",3.0/2);

    return 0;
}*/

/*int a = (int)1.999999;
    printf("%d",a);*/

/*int a = 9+5-1*7, guess;
    printf("enter your guess: ");scanf("%d", &guess);
    printf("the answer is %d", a);*/

/*int q = 5+2/2*3,guess;
    printf("enter your guess: ");scanf("%d",&guess);
    printf("the answer is: %d", q);*/

/*int a = 3, b=4;
    b%=a;
    //printf("%d", !(2==3 || 7!=4));
    printf("the value of b: %d", b);*/
/*#include<stdio.h>
int main(){
    int day;char weather;
    printf("enter day: ");scanf("%d", &day);
    printf("enter weather: ");scanf(" %c", &weather);
    printf("%d", day==1||weather=='r');

    return 0;
}*/
/*int number;
    printf("enter number: ");scanf("%d", &number);
    printf("%d", number>9&&number<100);
    return 0;*/

/*int age;
    printf("enter your age: ");scanf("%d",&age);
    if (age>=18) 
        printf("\nYou can Vote");        
    else if (age>12&&age<18)
        printf("you are a teen!");
    else 
        printf("you are a under twelve!");
    */

/*int age;
    printf("Enter your age: ");scanf("%d",&age);
    age>=18?printf("grown up"):printf("child");*/
/*char day;
    int age;
    printf("enter your age:");scanf("%d", &age);
    printf("enter day: ");scanf("%s",&day);
    switch(day){
    case 'm':printf("monday");
    switch(age){
        case 18:printf("\nyou have just become an adult");
    }
        break;
        case 't':printf("tuesday");
            break;
        case 'w':printf("wednesday");
                break;
        case 'T':printf("thrusday");
                break;
        case'f':printf("friday");
                break;
        case 's':printf("saturday");
                break;
        case 'S':printf("sunday");
                break;
        default:printf("invalid day!");            
    }
    if (age==18){
        if (day=='m'){
            printf("\nthat's the perfect combo");
        }
    }*/
/*int marks;
    printf("enter marks:");scanf("%d",&marks);
    if (marks<30){printf("grade C");}
    else if (marks>=30&&marks<70){printf("grade B");}
    else if (marks>=70&&marks<90){printf("grade A");}
    else printf("grade A+");*/
/*int ntimes;
    printf("enter value for n:");scanf("%d",&ntimes);
    for (int i=0;i<ntimes;i++)//initialize expression;test expression;update expression 
    { 
        printf("this will print %d times\n", ntimes);
        }*/
/*int i = 3;
    do {
        printf("test check\n");
        i++;//update expression
    } while (i<=4);  //test expression*/

#include<stdio.h>
int main(){
    for(int i=1;i<=5;i=i+1){
        printf("what is this?\n");
    }
    return 0;
}
