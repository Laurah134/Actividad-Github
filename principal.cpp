#include<iostream>
#include<cmath>

int menu(int o)
{
    std::cout<<"::::::MENU::::::"<<std::endl;
    std::cout<<"\t1. Suma\n\t 2. Resta\n\t 3. División\n\t 4. Multiplicación\n\t 5. Modulo\n\t"<<std::endl;
    std::cin>>o;
    return o;
}
double rnum(double n)
{
    std::cout<<"Ingrese un número"<<std::endl;
    std::cin>>n;
    return n;
}
double sum(double n1, double n2)
{
    return n1+n2;
}
double resta(double n1, double n2)
{
    return n1-n2;
}
double div(double n1, double n2)
{
    return n1/n2;
}
double proc(double n1, double n2)
{
    return n1*n2;
}
double mod(double n1, double n2)
{
    return n1%n2;
}
