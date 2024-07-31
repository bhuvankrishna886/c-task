
 #include<stdio.h>
 int main(){
    int z[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    int size=sizeof(z)/sizeof(z[0]);
    int y=0;
    int i;
    for(i=0;i<size;i++){
    y+=z[i];
    }
    printf("sum of the array:%d\n",y);

    return 0;
}
    