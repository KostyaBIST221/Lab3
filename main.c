#include <stdio.h>
#define D 2.54
#define D1 2.32166
#define D2 2.7076
#include <math.h>
void task1(){
    int num;
    puts("введите число");
    scanf("%d",&num);
    printf("Введено число\n");
    int num2;
    scanf("%d",&num2);
    printf("1)Сумма-%i\n2)Разность-%i\n3)Произведение-%i\n4)Частное-%i\n5)остаток от деления второго числа на первое-%i\n",num+num2,num-num2,num*num2,num/num2,num%num2);
}

void task2(){
    int dym;
    float result;
    printf("Введитие кол-во дюймов\n");
    scanf ("%d", &dym);
    result=D *dym;
    printf ("%d дюймов – это %.1f см\n", dym, result);
    printf ("%d испанского дюймa – это %.1f см\n", dym, D1*dym);
    printf ("%d старолитовского дюймa – это %.1f см\n", dym, D2*dym);
}

void task2A(){
    int myl;
    printf("Введитие кол-во миль\n");
    scanf ("%d", &myl);
    printf ("%d морская миля – это %.1f м\n", myl, myl*1.852);
    printf ("%d сухопутная миля – это %.1f км\n", myl, myl*1.609);
    printf ("%d римская миля – это %.1i м\n", myl, myl*1475);
    printf ("%d старорусская миля – это %.1f км\n", myl, myl*7.468);
    printf ("%d географическая миля – это %.1f км\n", myl, myl*7412.6);
    
}

void task3(){
    int a,b;
    puts("Введите а");
    scanf ("%i", &a);
    puts("Введите б");
    scanf ("%i", &b);
    puts("___________________________________________________________________");
    printf("|         a*b         |         a+b         |         a-b         |\n");
    puts("-------------------------------------------------------------------");
    printf("|%10.0i*%-10.0i|%10.0i+%-10.0i|%10.0i-%-10.0i|\n",a,b,a,b,a,b);
    puts("-------------------------------------------------------------------");
    printf("|%21.0i|%21.0i|%21.0i|\n",a*b,a+b,a-b);
}

void homework(){
    float a,b;
    printf("Введите число a\n");
    scanf("%f",&a);
    printf("Введите число b\n");
    scanf("%f",&b);
    printf("Среднее арифметическое числа %0.0f и %0.0f равно %0.2f\n",a,b,(a+b)/2);
    printf("Среднее геометрическое числа %0.0f и %0.0f равно %0.2f\n",a,b,sqrt(a*b));
}


int main(int argc, const char * argv[]) {
//    task1();
//    task2();
//    task2A();
//    task3();
    homework();
}
