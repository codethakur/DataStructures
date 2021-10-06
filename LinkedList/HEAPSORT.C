#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}

void heapify(int A[],int n,int i){
int largest=i;
int l=(2*i)+1;
int r=(2*i)+2;
if(l<n && A[l]>A[largest])
{
largest=l;
}
if(r<n && A[r]>A[largest])
{
largest=r;
}
if(largest!=i)
{
swap(&A[largest],&A[i]);
heapify(A,n,largest);
}
}
void heapsort(int A[],int n)
{
int i,j;
for(i=n/2-1;i>=0;i--)
{
heapify(A,n,i);
}
for(j=n-1;j>0;j--)
{
swap(&A[0],&A[j]);
heapify(A,j,0);
}
}
void main(){
int A[20],n,i;
clrscr();
printf("Enter the size of Array:\n");
scanf("%d",&n);
printf("Enter %d elements in Array:\n",n);
for(i=0;i<n;i++)
scanf("%d",&A[i]);
heapsort(A,n);
printf("After Sorting:\n");
for(i=0;i<n;i++)
printf("%d ",A[i]);
getch();
}