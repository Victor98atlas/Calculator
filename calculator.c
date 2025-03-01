#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793
void add(float a,float b);
void subtract(float a,float b);
void multiply(float a,float b);
float divide(float a,float b);

float logten(float a);
float loge(float a);
float log_base(float a,float b);
float expo(float a);
double si(double a);
double co(double a);
double ta(double a);

int main(){
float num1,num2;
double sinx,cosx,tanx,rad,result1,deg;
int num;
double pi = PI;

printf("1: Addition\n2:Subtraction\n3:Multiplication\n4:Division\n5:Log10\n6:loge\n7:log to base of x\n8:e^x\n9:sine\n10:cosine\n11:tangent\n12:cosecant\n13:secant\n14cotangent\n");
printf("choose which operation to be done");
scanf("%d",&num);
switch(num){
    case 1: printf("enter any two numbers:");
    scanf("%f%f",&num1,&num2);
    add(num1,num2);
    break;

    case 2:printf("enter any two numbers:");
    scanf("%f%f",&num1,&num2);
    subtract(num1,num2);
break;

    case 3:printf("enter any two numbers:");
    scanf("%f%f",&num1,&num2);
    multiply(num1,num2);
    break;

    case 4:printf("enter any two numbers:");
    scanf("%f%f",&num1,&num2);
    result1 = divide(num1,num2);
    printf("quotient = %f",result1);
break;

    case 5:printf("enter the value for the log:");
    scanf("%f",&num1);
    result1 = logten(num1);
    printf("log to the base 10:%f",result1);
    break;

    case 6:printf("enter the value for the loge:");
    scanf("%f",&num1);
   result1 =  loge(num1);
   printf("log to the base of e = %f",result1);

break;

    case 7:printf("b:");
    scanf("%f",&num1);
    printf("x:");
    scanf("%f",&num2);
    result1 = log_base(num2,num1);
    printf("log to the base of %f:%f",num1,result1);
    break;

    case 8:printf("enter the value for exponential function:");
    scanf("%f",&num1);
    result1 = expo(num1);
    printf("e^%f = %f",num1,result1);
break;

    case 9:printf("enter the angle value in degrees:");
    scanf("%lf",&deg);
    rad = deg*(pi/180.00);
    sinx = si(rad);
    printf("sin(%lf) = %lf",deg,sinx);
    break;

    case 10:printf("enter the angle value in degrees:");
    scanf("%lf",&deg);
    rad = deg*(pi/180.00);
    cosx = co(rad);
    printf("cos(%lf) = %0.2lf",deg,cosx);
    
break;

    case 11:printf("enter the angle value in degrees:");
    scanf("%lf",&deg);
    if(deg==90.0000){
        printf("the tangent cannot be found.it is infinity.\n");
        return 0;
    }
    else{
        rad = deg*(pi/180.00);
        tanx = tan(rad);
        printf("tan(%lf) = %0.2lf",deg,tanx);
    }
    break;

    case 12:printf("enter the angle value in degrees:");
    scanf("%lf",&deg);
    if(deg==0){
        printf("cosecant cannot be found.it is infinity\n");
        return 0;
    }
    else{
        rad = deg*(pi/180.00);
        result1 = 1/sin(rad);
        printf("cosec(%lf) = %0.2lf",deg,result1);
    }
break;

    case 13:printf("enter the angle value in degrees:");
    scanf("%lf",&deg);
    if(deg==90){
        printf("secant cannot be found.it is infinity\n");
        return 0;
    }
    else{
        rad = deg*(pi/180.00);
        result1 = 1/cos(rad);
        printf("sec(%lf) = %0.2lf",deg,result1);
    }
    break;

    case 14:printf("enter the angle value in degrees:");
    scanf("%lf",&deg);
    if(deg==0.00){
        printf("cotangent cannot be found.it is infinity\n");
    }
    else{
        rad = deg*(pi/180.00);
        result1 = 1/tan(rad);
        printf("cot(%lf) = %0.2lf",deg,result1);
    }
    break;

    default:printf("invalid value");

}
return 0;

}
void add(float a, float b){
    float sum = a+b;
    printf("the sum = %f\n",sum);
    }
    void subtract(float a, float b){
        float diff = a-b;
        printf("the difference = %f\n",diff);
    }
    void multiply(float a, float b){
        float product = a*b;
        printf("product = %f\n",product);
    }
    float divide(float a, float b){
        if(b == 0){
            printf("Division is not possible.The answer to this is infinity\n");
            return 0;
        }
        else{
            float quo = a/b;
            return (float) quo;
        }
    }
    float logten(float a){
        if(a==0){
            printf(
                "finding log is not possible\n"
            );
            return 0;
        }
        else{
            float out = log10(a);
            return (float) out;
        }
       
    }
    float loge(float a){
        if(a==0){
            printf("finding log is not possible\n");
            return 0;
        }
        else{
            float out = log(a);
            return (float) out;
        }
      
    }
    float expo(float a){
        float ex = exp(a);
        return (float) ex;
    }
    double si(double a){
        double sine = sin(a);
        return (double) sine;
    }
    double co(double a){
        double cosine = cos(a);
        return(double)cosine;
    }
    double ta(double a){
     double tang = tan(a);
     return(double)tang;
       
    }
    float log_base(float a,float b){
    if(a==0||b==0){
        printf("invalid inputs. Finding the log value is not possible\n");
        return(float)0;
    }
    else{
        float log_ba = log(a)/log(b);
        return(float)log_ba;
    }
    }
    