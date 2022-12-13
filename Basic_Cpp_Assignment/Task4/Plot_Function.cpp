#include <iostream>
#include <string.h>
#include <math.h>

int main(){
    char *s="Hello World GOGOGOGGOGO";
    float XMin=-6;
    float XMax=6;
    float precision=0.0001;
    float X=XMin;
    float Y=0;
    while (X<XMax)
    {
        X+=precision;
        Y=1/(1+exp(X));
        printf("%f %f\n",X,Y);
    }
    return 0;
}
// .\a.exe > myplot.data 
// printf的内容不再显示到控制台，直接输出到文件 myplot.data 
// 用 CMD执行命令；不要用 PowerShell