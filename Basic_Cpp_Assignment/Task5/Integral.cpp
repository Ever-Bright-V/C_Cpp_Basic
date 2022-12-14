#include <iostream>
#include <string.h>
#include <math.h>

    // f(x)=sin(x)
    
double Calc_Funtion(double x){
    return sin(x);
}

int main(){
    double epsilon = 0.15;
    double US=0; // upper sum
    double LS=0; // lower sum
    for (double x = 1; x < 2; x+=epsilon)
    {
    //...
        printf("%f\n",x);
        if(x+epsilon<2){
            US+=epsilon*(Calc_Funtion(x)>Calc_Funtion(x+epsilon)?Calc_Funtion(x):Calc_Funtion(x+epsilon));
            LS+=epsilon*(Calc_Funtion(x)<=Calc_Funtion(x+epsilon)?Calc_Funtion(x):Calc_Funtion(x+epsilon));
        }else{
            US+=(2-x)*(Calc_Funtion(x)>Calc_Funtion(2)?Calc_Funtion(x):Calc_Funtion(2));
            LS+=(2-x)*(Calc_Funtion(x)<=Calc_Funtion(2)?Calc_Funtion(x):Calc_Funtion(2));
        }

    }
    printf("We believe that the integral I follows\n");
    printf("%.2f < I <= %.2f\n", LS,US);
}
