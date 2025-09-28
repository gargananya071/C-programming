#include <stdio.h>
/*int main()
{
int a=20,b=30,sum;
sum=a+b;
printf("Sum is=%d",sum);
return 0;
}

int main()
{
int first_Num,second_Num;
printf("Enter first number:",first_Num);
scanf("%d",&first_Num);
printf("Enter second number:",second_Num);
scanf("%d",&second_Num);
first_Num=first_Num+second_Num;
second_Num=first_Num-second_Num;
first_Num=first_Num-second_Num;
printf("New first Number is=%d",first_Num);
printf("\nnew second number is=%d",second_Num);
return 0;
}
int main() 
{
    char ch,s,scn;
    printf("Enter a character:");
    scanf("%c",&ch);
    printf("Enter a string:");
    scanf("%c",&s);
    //printf("Enter a sentence",scn);
    //scanf("%[^\n]%*c",scn);
    printf("You entered character=%c",ch);
    printf("\n");
    printf("you entered string=%c",s);
    //printf("\n");
    //printf(scn);
    return 0;
}
int main()
{
	
    char s;
    printf("Enter your name:");
    scanf("%s",s);
    printf("Hello,%s\n",s);
    return 0;
}*/
int main()
{
float p,r,t,SI;
printf("Enter principle amount:",p);
scanf("%f",&p);
printf("Enter rate of interest:");
scanf("%f",&r);
printf("Enter time:",t);
scanf("%f",&t);
SI=(p*r*t)/100;
printf("SI=%f",SI);
return 0;
}
