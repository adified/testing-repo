#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include <array>
#include <math.h>

knckvdbvdn

using namespace std; 

double cube(double num);        //function prototype

    struct rectangle{
        int length;
        int breath;
    };

    struct complex{
        int real;
        int imag;
    };

    struct student {
        int age;
        double cpi;
        char name[50];
    }student1;

    struct test{
        int a[5];
        int n;
    };

int * func (int n){                  //malloc array pointer creator
    int *p;
    p=(int *)malloc(n*sizeof(int));
    // printf("%lu \n",sizeof(p));
    for(int i=0;i<n;i++){
        p[i]=i+5;
    }
    return p;
}

void printarray (int * b,int n){            //how to accept arrays as input
// void fun(int  b[],int n){            //how to accept arrays as input
    for(int i=0;i<n;i++){
        printf("%d \n",b[i]);
    }
}

void swap (int * n1,int * n2){     //function taking pointers
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}

double testavg (struct test t1){
    double sum=0,result;
    for (int i=0;i<t1.n;i++){
        sum+=t1.a[i];
    }
    return (sum/t1.n);
}

double maxof3 (double num1,double num2,double num3){
    if ((num1>num2)&&(num1>num3)){
        return num1;
    }else if(num3>num2){
        return num3;
    }
    return num2;
}

double calculator (double calc1,double calc2,char op){
    if (op=='+'){
        return (calc1+calc2);
    }else if(op=='-'){
        return (calc1-calc2);
    }else if(op=='/'){
        return (calc1/calc2);
    }else if(op=='*'){
        return (calc1*calc2);
    }else{
        return 0;
    }
}

int main(){
    const double pi=3.1415;  //creates an unchangangable variable
    int b[5]={2,4,6,8,10},n,k=5;
    int  *pb;
    double num1,num2,num3,calc1,calc2;
    char op;
    // printf("hello world \n");
    // int len = sizeof(a)/sizeof(a[0]);
    // printf("enter the size of array \n");
    // scanf("%d",&n);
    // int a[n];
    // for(int i=0;i<n;i++){
    //     printf("please enter the %d th value of the array   ",i+1);
    //     scanf("%d",&a[i]);
    //     if(a[i]==0){n=i;
    //     break;
    //     }
    // printf("%p \n",b);

    // printarray(b,5);
    // pb=func(8);
    // for(int i=0;i<5;i++){
    //     printf("%d \n",pb[i]);
    // }

    // printf("%p \n",pb);
    // pb[0]=2;
    // pb[1]=4;
    // pb[2]=5;
    // pb[3]=6;
    // pb[4]=9;

    // // }
    // for(int i=0;i<5;i++){
        // printf("%d \n",pb[i]);
    // }
        // printf("%lu \n",sizeof(pb));

    // {
        // char grade;
        // printf("please enter your grade ");
        // scanf(" %c",&grade);
        // switch(grade){
        //     case 'A':
        //     printf("great job /n");
        //     break ;
        //     case 'f':
        //     printf("you failed /n");
        //     break;
        // }
    // }

// FUNCTIONS FUNCTIONS FUNCTIONS FUNCTIONS FUNCTIONS FUNCTIONS FUNCTIONS FUNCTIONS 
    // {
        // {
        //     printf("%f \n",cube(4.0));
        //     printf("enter the 3 numbers you want to compare  ");
        //     scanf("%lf %lf %lf",&num1,&num2,&num3);
        //     printf("the maximum of the 3 numbers is %f \n",maxof3(num1,num2,num3));
        // }
        // {
        //     printf("enter the 2 numbers you want to operate  ");
        //     scanf("%lf %lf",&calc1,&calc2);
        //     printf("enter the operation ");
        //     scanf(" %c",&op);
        //     if((op=='+')||(op=='-')||(op=='/')||(op=='*')){
        //         printf("the final result is: %f\n",calculator(calc1,calc2,op));
        //     }else{
        //         printf("invalid operator \n");
        //     }
        // }
        // {                 CALLING BY ADDRESS
        //     int n1=10,n2=5,result;
        //     swap(&n1,&n2);
        //     cout<<"the swapped result is"<<n1<<"  "<<n2;
        // }
    // }

// STRUCTURES STRUCTURES STRUCTURES STRUCTURES STRUCTURES STRUCTURES STRUCTURES

    // {   
        // {    
            // struct rectangle r;
            // struct rectangle R ={10,5};
            // struct rectangle *pR ;
            // pR=&R;
            // (*pR).length=15;
            // pR->length=15;
            // pR=(struct rectangle *)malloc(sizeof(struct rectangle));
            // pR=new rectangle;


            // printf("please enter the length and breath of the rectangle ");
            // scanf("%d %d ",&r.length,&r.breath);
            // printf("the area is = %d \n",R.length*R.breath);
        // }
    //     {
    //         int ncn;
    //         printf("please enter the number of complex numbers  ");
    //         scanf("%d",&ncn);
    //         struct complex c;
    //         double mod[ncn];

    //         for (int i =0; i<ncn; i++){
    //             printf("please enter the real and imag part of the %dth complex number \n",i+1);
    //             scanf("%d",&c.real);
    //             scanf("%d",&c.imag);
    //             mod[i]= sqrt( pow(c.real,2)+pow(c.imag,2));
    //             // printf("\n");
    //         }

    //         for (int i=0;i<ncn;i++){
    //             printf("%f ",mod[i]);
    //         }
    //     }

    //     {
    //         // struct student student1;
    //         student1.age=22;
    //         student1.cpi=7.73;
    //         strcpy(student1.name,"adarsh agarwal");
    //         printf("%d %f %s",student1.age,student1.cpi,student1.name);
        // }
    // }

    // {
        // char name[35];                     // usage of CHAR ******************
        // printf("enter your name: ");
        // strcpy(name,"adarsh agarwal");
        // scanf(" %s",name);
        // fgets(name,35,stdin);
        // printf("your name is %s \n",name);
    // }

    // {
    //     struct test test1={{1,2,3,4,5},5};
    //     int avgscore=testavg(test1);
    //     printf("%d",avgscore);
    // }


    // POINTERS POINTERS POINTERS POINTERS POINTERS POINTERS POINTERS POINTERS POINTERS 
    {
        // int k=5;
        // int *p1;
        // int *p;
        // char *p2;
        // struct rectangle *p3;
        // double *p4;

        // p = (int*) malloc (5*sizeof(int)); //ARRAY IN HEAP
        // p[0]=10;
        // p[1]=15;
        // p[2]=16;
        // p[3]=22;
        // p[4]=14;
        // p=&k;
        // *p=15;
        // printf("%d     %d\n",p,k);
        // printf("the address of k is %p \n",&k);
        // for(int i=0;i<5;i++){
        //     printf("%d \n",p[i]);
        // }
        // free(p);
        // printf("%lu \n",sizeof(p1));
        // printf("%lu \n",sizeof(p2));
        // printf("%lu \n",sizeof(p3));
        // printf("%lu \n",sizeof(p4));
    }
  //REFERENCES REFERENCES  REFERENCES  REFERENCES  REFERENCES  REFERENCES  REFERENCES  REFERENCES  REFERENCES  
    // {
    //     int A=10;
    //     int &r=A;
    //     int * pA,* pr;
    //     pA=&A;
    //     pr=&r;
    //     printf("%p  %p \n",pA,pr);
    // }
    // double ra=.17, temp,inv=0,t=20, sum=0, mi=pow(1+ra,0.09);
    // for(int i=0;i<t*12;i++){
    //     temp=4000*(1+i/12);
    //     if(temp>500000000){
    //         temp=50000000;
    //     }
    //     inv+=temp;
    //     for(int j=i;j<t*12;j++){
    //         temp*=mi;
    //     }
    //     sum+=temp;
    // }
    // printf("%f , %f",sum-inv,inv);

    // TreeNode* root=[1,2,5,3,4,NULL,6];
    // flatten(root);
    return 0;
}

double cube (double num){
    return pow(num,3);
}
