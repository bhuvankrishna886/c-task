// create,insert,seacrh,delete,display
#include<stdio.h>
# define Max 50

  int ar[Max];
      int n=sizeof(ar)/sizeof(ar[0]);
// create
void create(){
    
 printf("enter the elemnts in an array");
for(int i=0;i<=n;i++){
scanf("%d",&ar[i]);
}   

}

// display
void display(){
   
printf("array elements are");
for(int i=0;i<n;i++){
    printf("%d",ar[i]);
}
}

// insert()
void insert(){
    
    int pos,val;
    printf("enter the position");
    scanf("%d",&pos);

    if(pos<1||pos>n+1){
        printf("invalid position");
    }
    pos=pos-1;

printf("enter the value");
scanf("%d",&val);
for(int i=n-1;i>=pos;i--){
    ar[i+1]=ar[i];
}
ar[pos]=val;
n=n+1;

}

// delete

void delete(){
    int pos,val;
    printf("enter the position");
    scanf("%d",&pos);
    if(pos<1||pos>=n+1){
        printf("invalid position");
    }
    pos=pos-1;
    for(int i=pos;i<n;i++){
        ar[i]=ar[i+1];
    }
    n=n-1;

}

// search

void search(){
    int key,flag=0;
    printf("enter the element to search");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(ar[i]==key){
              flag=1;
            printf("the element is",ar[i]);
          
        }
    }
    if(flag=-0){
        printf("the search element is not found");
    }
}

int main(){
  
    int ch;
      int ar[Max];
      int n=sizeof(ar)/sizeof(ar[0]);
    printf("enter your choice");
    scanf("%d",&ch);
    while(1){
        switch(ch){
            case 1:
            create();
            break;
            case 2:
            display();
            break;
            case 4:
            insert();
            break;
            case 5:
            delete();
            break;
            case 6:
            search();
            break;
            case 7:
            exit(0);
            break;
            default:
            printf("invalid choice");
            break;

        }
    }
}