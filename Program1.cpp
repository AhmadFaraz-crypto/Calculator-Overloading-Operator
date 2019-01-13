#include<iostream>
class calculator
{
private:
    float num1;
public:
    void getdata()
    {
        std::cout<<"Enter a number ";
        std::cin>>num1;
    }
    void showdata()
    {
        std::cout<<"\n\t\t\tResult is "<<num1;
    }
    calculator operator+(calculator num2)
    {
        calculator sum;
        sum.num1=num1+num2.num1;
        return (sum);
    }
    calculator operator-(calculator num2)
    {
        calculator sub;
        sub.num1=num1-num2.num1;
        return (sub);
    }
    calculator operator*(calculator num2)
    {
        calculator multi;
        multi.num1=num1*num2.num1;
        return (multi);
    }
    calculator operator/(calculator num2)
    {
        calculator div;
        div.num1=num1/num2.num1;
        return (div);
    }
};
int main()
{
    calculator cal1, cal2, cal3;
    int choice;
    cal1.getdata();
    cal2.getdata();
    std::cout<<"\n\n\t\t1. Addition "<<std::endl;
    std::cout<<"\t\t2. Subtraction "<<std::endl;
    std::cout<<"\t\t3. Multiplication "<<std::endl;
    std::cout<<"\t\t4. Division "<<std::endl;
    std::cout<<"\n\n\tEnter a choice ";
    std::cin>>choice;
    switch(choice)
    {
    case 1:
    {
        cal3=cal1+cal2;
        cal3.showdata();
        break;
    }
    case 2:
    {
        cal3=cal1-cal2;
        cal3.showdata();
        break;
    }
    case 3:
    {
        cal3=cal1*cal2;
        cal3.showdata();
        break;
    }
    case 4:
    {
        cal3=cal1/cal2;
        cal3.showdata();
        break;

    }
    }
}
