#include<iostream>
#include<cmath>

int menu()
{
    int o;
    std::cout<<":::::::::::::MENU:::::::::::::"<<std::endl;
    std::cout<<"\t1. Suma\n\t2. Resta\n\t3. División\n\t4. Multiplicación\n\t"<<std::endl;
    std::cin>>o;
    return o;
}
double rnum()
{
    double n;
    std::cout<<"Ingrese un número"<<std::endl;
    std::cin>>n;
    return (n);
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
int main ()
{
    double num1;
    double num2;
    num1=rnum();
    num2=rnum();
    switch (menu())
    {
    case 1:
    std::cout<<"El resultado es:"<<sum(num1,num2)<<std::endl;
        break;
     case 2:
    std::cout<<"El resultado es:"<<resta(num1,num2)<<std::endl;
        break;
     case 3:
    std::cout<<"El resultado es:"<<div(num1,num2)<<std::endl;
        break;
     case 4:
    std::cout<<"El resultado es:"<<proc(num1,num2)<<std::endl;
        break;
    default:
    std::cout<<"Opción incorrecta"<<std::endl;
        break;
    }

    return 0;
}
