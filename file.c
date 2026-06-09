#include<stdio.h>

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mult(int a,int b){
    return a*b;
}

int divi(int a,int b){
    return a/b;
}

int main(){
        int choice;
        int a,b;

    do{
        printf("\n===== Calculator =====\n");

        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        
        printf("\nenter the choice[1-5]:");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
        
                printf("Enter first number:");
                scanf("%d",&a);
    
                printf("Enter second number:");
                scanf("%d",&b);

                printf("Result=%d\n",add(a,b)); 
                break;
                
            case 2:
            
                printf("enter firdt number:");
                scanf("%d",&a);
                
                printf("enter second number:");
                scanf("%d",&b);
                
                printf("Result=%d\n",sub(a,b));
                break;
                
            case 3:
                printf("enter first number:");
                scanf("%d",&a);
                
                printf("enter second number:");
                scanf("%d",&b);
                
                printf("Result=%d\n",mult(a,b));
                break;    
            
            case 4:
                printf("enter first number:");
                scanf("%d",&a);
                
                printf("enter second number:");
                scanf("%d",&b);
                
                printf("Result=%d\n",divi(a,b));
                break;
                
            case 5:
                printf("\n=====good bye=====\n");
                break;
            default:
                printf("\n---invalid choice enter[1-5]---\n");
        }
    }
        while(choice!=5);
    

    
}