#include<stdio.h>

void inter();
void union1();
void symmatric1();
void diff();
void comp();

int main(){

    int ch;

    printf("set1 =[1,2,3,4,5]\n");
    printf("set2 =[1,4,5,90,0]\n");

    printf("-----------------------------\n");

    printf("\n\t1 - Intersection\n\t2 - Union\n\t3 - Symmatric Diffrence\n\t4 - Diffrence\n\t5 - Complement\n\n\n");

    printf("\nEnter the choice : ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        inter();
        break;
    case 2:
        union1();
        break;
    case 3:
        symmatric1();
        break;
    case 4:
        diff();
        break;
    case 5:
        comp();
        break;
    
    default:
        printf("Invalid Ch");
        break;
    }
    

    return 0;
}

void inter(){
    int x[]={1,2,3,4,5};
    int y[]={1,4,5,90,0};
    int z[0];
    int size=sizeof(x)/sizeof(x[0]);
    int sizey=sizeof(y)/sizeof(y[0]);
    int c=0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < sizey; j++)
        {
            if (x[i]==y[j])
            {
                z[c]=x[i];
                c++;
                
            }

            
        }
    }
    
    printf("Intersection of set x and y is : ");
    for (int i = 0; i < c; i++)
    {
        printf("%d\t",z[i]);
    }
 
}

void union1(){
    int x[]={1,2,3,4,5};
    int y[]={1,4,5,90,0};
    int size=sizeof(x)/sizeof(x[0]);
    int sizey=sizeof(y)/sizeof(y[0]);
    int z[size + sizey];
    int u[size + sizey];
    int k=0;


    for (int i = 0; i < size; i++)
    {
       z[i]=x[i]; // values of x[] are appending into z[]
        
    }
    for (int j = 0; j < sizey; j++)
    {
       z[size + j]=y[j]; // values of y[] are appending into z[]
              
    }
    
    for (int i = 0; i < size + sizey; i++) // remove duplicates from z[]
    {
        int isdup=0;

        for (int j = 0; j < k; j++)
        {
            if(u[j]==z[i]){
                isdup=1;
                break;
            }
        }
        
        if(!isdup){
            u[k]=z[i];
            k++;
        }
    }

    printf("Union of set x and y is : ");

    for (int i = 0; i < k; i++)
    {
       printf("%d\t",u[i]); // print set without duplicates
    }
}

void symmatric1(){
    int x[]={1,2,3,4,5};
    int y[]={1,4,5,90,0};
    int size=sizeof(x)/sizeof(x[0]);
    int sizey=sizeof(y)/sizeof(y[0]);
    int z[size + sizey];
    
    int k=0;


    
    for (int i = 0; i < size; i++) // remove duplicates from z[]
    {
        int isdup=0;

        for (int j = 0; j < sizey; j++)
        {
            if(y[j]==x[i]){
                isdup=1;
                break;
            }
        }
        
        if(!isdup){
            z[k]=x[i];
            k++;
        }
    }

    for (int i = 0; i < sizey; i++) // remove duplicates from z[]
    {
        int isdup=0;

        for (int j = 0; j < size; j++)
        {
            if(x[j]==y[i]){
                isdup=1;
                break;
            }
        }
        
        if(!isdup){
            z[k]=y[i];
            k++;
        }
    }

    printf("Symmetric Difference of set x and y is : ");

    for (int i = 0; i < k; i++)
    {
       printf("%d\t",z[i]); // print set without duplicates
    }
    
}

void diff(){
    int x[]={1,2,3,4,5};
    int y[]={1,4,5,90,0};
    int size=sizeof(x)/sizeof(x[0]);
    int sizey=sizeof(y)/sizeof(y[0]);
    int z[size];
    
    int k=0;


    
    for (int i = 0; i < size; i++) // remove duplicates from z[]
    {
        int isdup=0;

        for (int j = 0; j < sizey; j++)
        {
            if(y[j]==x[i]){
                isdup=1;
                break;
            }
        }
        
        if(!isdup){
            z[k]=x[i];
            k++;
        }
    }

   
    printf("Difference of set x and y is : ");

    for (int i = 0; i < k; i++)
    {
       printf("%d\t",z[i]); // print set without duplicates
    }
 
}

void comp(){
     int x[]={1,2,3,4,5};
    int y[]={1,4,5,90,0};
    int size=sizeof(x)/sizeof(x[0]);
    int sizey=sizeof(y)/sizeof(y[0]);
    int z[size];
    
    int k=0;


    
    for (int i = 0; i < sizey; i++) // remove duplicates from z[]
    {
        int isdup=0;

        for (int j = 0; j < size; j++)
        {
            if(y[i]==x[j]){
                isdup=1;
                break;
            }
        }
        
        if(!isdup){
            z[k]=y[i];
            k++;
        }
    }

   
    printf("Complement of set x and y is : ");

    for (int i = 0; i < k; i++)
    {
       printf("%d\t",z[i]); // print set without duplicates
    }
   
}
