// multidimensional
// single dimensional

// array -

# include<stdio.h>
int main(){
    // int b=7;
    // int bsize=sizeof(b);
    int a[]={1,2,3,4,5};
    a[0]=7;
    printf("%d",a[0]);
    int size=sizeof(a)/sizeof(a[0]);

    printf("\n%d",size);
    // printf("\n%d",bsize);.
for(int i=0;i<size;i++){
    printf("\n%d",a[i]);
}

}