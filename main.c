#include<stdio.h>
#include"thermocouple.h"
int main()
{
    //chart function for calibration data
    /*FILE *inp;
    inp=fopen("lab data in C.txt","r");
    chart(inp);*/

    //function correction factor
    printf("%.4f",corr_fact(86,'f','k'));
    printf("\n");

    //function for printing NIST standard charts
    std_chart('k','F');
}
