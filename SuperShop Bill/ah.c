#include<stdio.h>
#include<conio.h>
#include<string.h>
struct new_product
{
    int quantity;
    char name[20];
    double price;
};
typedef struct new_product NPR;
double item_bill_generator(NPR p)
{
    if(strcmp(p.name,"rice")==0)
    {
        p.price = (double)55*p.quantity/1000;
        return p.price;
    }
    else if(strcmp(p.name,"sugar")==0)
    {
        p.price = (double)80*p.quantity/1000;
        return p.price;
    }
    else if(strcmp(p.name,"oil")==0)
    {
        p.price = (double)85*p.quantity/1000;
        return p.price;
    }
    else if(strcmp(p.name,"egg")==0)
    {
        p.price = (double)130*p.quantity/12;
        return p.price;
    }
    else if(strcmp(p.name,"pepper")==0)
    {
        p.price = (double)100*p.quantity/1000;
        return p.price;
    }
    else if(strcmp(p.name,"oats")==0)
    {
        p.price = (double)200*p.quantity/1000;
        return p.price;
    }
    else if(strcmp(p.name,"beef")==0)
    {
        p.price = (double)600*p.quantity/1000;
        return p.price;
    }
    else if(strcmp(p.name,"salt")==0)
    {
        p.price = (double)70*p.quantity/1000;
        return p.price;
    }
    else if(strcmp(p.name,"apple")==0)
    {
        p.price = (double)150*p.quantity/1000;
        return p.price;
    }
    else if(strcmp(p.name,"orange")==0)
    {
        p.price = (double)150*p.quantity/1000;
        return p.price;
    }

}
double VAT_calculator(double value)
{
    return (double)15/100*value;
}
double receipt_generator(double value,double vat)
{
    return value+vat;
}
int main()
{
    NPR product1;
    char shopkeeper[20];
    char customer[20];
    gets(shopkeeper);
    gets(customer);
    double total = 0;
    for(int i=0;i<5;i++)
    {
        scanf("%s",product1.name);
        scanf("%d",&product1.quantity);
        char temp;
        scanf("%c",&temp);
        getchar();
        total = total + item_bill_generator(product1);
    }
    double vat = VAT_calculator(total);
    double total_price = receipt_generator(total,VAT_calculator(total));
    printf("Super Store\n");
    printf("Mon May 20 10 :44:20 2019 \n");
    printf("Product price : %g\n",total);
    printf("VAT           : %g\n",vat);
    printf("Total price   : %g\n\n\n",total_price);
    printf("THANK YOU!!\n");
}
