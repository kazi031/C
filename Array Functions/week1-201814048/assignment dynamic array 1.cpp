#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
struct ArrayList
{
    int *p=NULL;
    int size=0;
    int iCapacity;
    int capacity;
    void init(int capacity_)
    {
        p=new int[capacity_];
        capacity=iCapacity=capacity_;
    }
    void dispose()
    {
        delete [] p;
    }
    void push_back(int value)
    {
        p[size]=value;
        size=size+1;
        if(size==capacity)
        {
           capacity=capacity+iCapacity;
           p=(int*)realloc(p,capacity*sizeof(int));
        }
    }
    void PrintAll()
    {
        for(int i=0;i<size;i++)
        {
            cout<<p[i]<<" ";
        }
        printf("\n");
    }
    void PushForword(int value)
    {
        size=size+1;
        if(size==capacity)
        {
          capacity=capacity+iCapacity;
          p=(int*)realloc(p,capacity*sizeof(int));
        }
        for(int i=size;i>0;i--)
        {
            p[i]=p[i-1];
        }
        p[0]=value;
    }
    void Pushinbetween(int index,int value)
    {
        size=size+1;
        if(size==capacity)
        {
            capacity=capacity+iCapacity;
            p=(int*)realloc(p,capacity*sizeof(int));
        }
        if(index<size)
        {
        for(int i=size;i>index;i--)
        {
            p[i]=p[i-1];
        }
        p[index]=value;
        }
    }

    void deleteLast()
    {
        size=size-1;
        if(capacity-size==iCapacity)
        {
            capacity=capacity-iCapacity;
            p=(int*)realloc(p,capacity*sizeof(int));
        }

    }
    void deleteFirst()
    {
        deleteLast();
        for(int i=0;i<size;i++)
        {
            p[i]=p[i+1];
        }
    }
    void deleteinbetween(int index)
    {
       deleteLast();
       for(int i=index;i<size;i++)
       {
           p[i]=p[i+1];
       }
    }
    void update_any_index(int index,int value)
    {
        p[index]=value;
    }
    int bound_check(int index)
    {
        if(index>=size)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }

};
int main()
{
    ArrayList l1;
    int capacity,x;
    cout<<"Enter the size of the array:";
    cin>>capacity;
    l1.init(capacity);
    int num;
    int i;
    int index;
    for(i=0;i<capacity;i++)
    {
        cin>>num;
        l1.push_back(num);
    }
    cout<<"Resultant array:";
    l1.PrintAll();

    cout<<"1. Insert element at the first position of the array"<<endl;
    cout<<"2. Insert element at the last position of the array"<<endl;
    cout<<"3. Insert element at any middle position of the array"<<endl;
    cout<<"4. Delete an element from the first position of the array"<<endl;
    cout<<"5. Delete an element from the last position of the array"<<endl;
    cout<<"6. Delete an element from any position of the array"<<endl;
    cout<<"7. Update any value of any position of the array"<<endl;
    cout<<"8. Quit"<<endl;
    cout<<"\nEnter option:";
    while(scanf("%d",&x),x!=8)
    {
        if(x==1)
        {
            printf("Input a number>>");
            cin>>num;
            cout<<"Resultant array:";
            l1.PushForword(num);
            l1.PrintAll();
            cout<<"\nEnter option:";
        }
        if(x==2)
        {
            printf("Input a number>>");
            cin>>num;
            l1.push_back(num);
            cout<<"Resultant array:";
            l1.PrintAll();
            cout<<"\nEnter option:";
        }
        if(x==3)
        {
            main3:;
            cout<<"Enter index:";
            cin>>index;
            int c=l1.bound_check(index);
            if(c==-1)
            {
                printf("\nInvalid Index\n");
                goto main3;
            }
            else if(c==1)
            {
                printf("Input a number>>");
                cin>>num;
                l1.Pushinbetween(index,num);
                cout<<"Resultant array:";
                l1.PrintAll();
                cout<<"\nEnter option:";
            }

        }
        if(x==4)
        {
            l1.deleteLast();
            cout<<"Resultant array:";
            l1.PrintAll();
            cout<<"\nEnter option:";
        }
        if(x==5)
        {
            l1.deleteFirst();
            cout<<"Resultant array:";
            l1.PrintAll();
            cout<<"\nEnter option:";
        }
        if(x==6)
        {
            main6:;
            cout<<"Enter index:";
            cin>>index;
            int c=l1.bound_check(index);
            if(c==-1)
               {
                  cout<<"invalid index";
                  goto main6;
               }
            else
            {
                l1.deleteinbetween(index);
                cout<<"Resultant array:";
                l1.PrintAll();
                cout<<"\nEnter option:";
            }
        }
        if(x==7)
        {
            main7:;
            cout<<"Enter index:";
            cin>>index;
            int c=l1.bound_check(index);
            if(c==-1)
            {
                cout<<"invalid index";
                goto main7;
            }
            else

            {
                printf("Input a number>>");
                cin>>num;
                l1.update_any_index(index,num);
                cout<<"Resultant array:";
                l1.PrintAll();
                cout<<"\nEnter option:";
            }
        }

    }
    l1.dispose();
    return 0;

}

