//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//
//void Bubblesort (int * a,int n)
//{
//	int i,j,t;
//	for(i=0;i<n-1;i++)
//	{
//		for(j=i+1;j<n;j++)
//		{
//			if(a[i]>a[j])
//			{
//				t=a[i];
//				a[i]=a[j];
//				a[j]=t;
//			}
//		}
//	}
//} 
//
//
//void selectsort(int * a,int n)
//{
//	int i,j,t,k;
//	for(i=0;i<n-1;i++)
//	{
//		k=i;
//		for(j=1;j<n;j++)
//		{
//			if(a[j]<a[i])
//			{
//				k=j;
//			}
//		}
//		t=a[k];
//		a[k]=a[i];
//		a[i]=t;
//	}
//}
//
//
//
//
//void insertsort(int *a,int n)
//{
//	int i,j,t;
//	for(i=1;i<n;i++)
//	{
//		if(a[i]<a[i-1])
//		{
//			t=a[i];
//		    for(j=i-1;j>=0&&t<a[j];j--)
//		    {
//			    a[j+1]=a[j];
//		    }
//		    a[j+1]=t;
//		}
//	}
//}
//void shellsort(int *a,int n)
//{
//	int d,i,j,t;
//	for(d=n/2;d>=1;d=d/2)
//	{
//		for(i=d;i<=n;i++)
//		{
//
//			if(a[i]<a[i-d])
//			{
//				t=a[i];
//				for(j=i-d;j>=0&&t<a[j];j=j-d)
//				{
//					a[j+d]=a[j];
//				}
//				a[j+d]=t;
//			}
//		}
//	}
//}
//int Partition(int *a,int low,int high)
//{
//	int pivot=a[low];
//	while(low<high)
//	{
//		while(low<high&&a[high]>=pivot)
//		{
//			high--;
//			
//		}
//		a[low] = a[high];
//		while(low<high&&a[low]<=pivot)
//		{
//			low++;
//			
//		}
//		a[high] = a[low];
//	}
//	a[low]=pivot;
//	return low;
//}
//void quicksort(int *a,int low,int high)
//{
//	if(low<high)
//	{
//		int pivotpos=Partition(a,low,high);
//		quicksort(a,low,pivotpos-1);
//		quicksort(a,pivotpos+1,high);
//	}
//}
//int main()
//{
//	int a[15];
//	for(int i=0;i<15;i++)
//	{
//		a[i]=15-i;
//	}
//	for(int i=0;i<15;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	printf("\n");
//	quicksort(a,0,14);
//	for(int i=0;i<15;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	return 0;
//}
