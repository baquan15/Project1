#include<stdio.h>

void fcn01(void);
void taomang(int arr[], int *n);
void xuatmang(int arr[], int n);
void add_element(int arr[], int *n, int x);
void delete_element(int arr[], int *n, int k);
void sapxeptang(int arr[], int n);
void sapxepgiam(int arr[], int n);
void timkiem(int arr[], int n, int k);
int main()
{
	fcn01();
	return 0;
}

void fcn01(void)
{
    char kt;
    int arr[100],n=0,x;
	do
	{
		printf("Chuong trinh quan ly day so bang mang:\n");
		printf("\t1.Nhap 'c' de tao mang so nguyen\n");
		printf("\t2.Nhap 'p' de in day\n");
		printf("\t3.Nhap 'i' de them 1 phan tu vao cuoi day\n");
		printf("\t4.Nhap 'd' de xoa 1 phan tu va nhap k la vi tri xoa\n");
		printf("\t5.Nhap 's' de sap xep day so theo chieu tang dan\n");
		printf("\t6.Nhap 'x' de sap xep day so theo chieu giam dan\n");
		printf("\t7.Nhap 't' de tim kiem 1 so x co trong day khong\n");
		printf("\t8.Nhap 'e' de thoat chuong trinh\n");
		scanf("%c",&kt);
        switch (kt)
        {
        case 'c':
            taomang(arr,&n);
            printf("Complete!\n");
            break;

        case 'p':
            printf("Mang hien tai la:");
            xuatmang(arr,n);
            break;

        case 'i':
            printf("Nhap phan tu can them:");
            scanf("%d",&x);
            add_element(arr,&n,x);
            printf("Complete!\n");
            break;

        case 'd':
            printf("Nhap vi tri can xoa:");
            int k;
            scanf("%d",&k);
            delete_element(arr,&n,k);
            printf("\nComplete!\n");
            break;

        case 's':
            printf("Mang sap xep theo chieu tang dan:");
            sapxeptang(arr,n);
            xuatmang(arr,n);
            printf("\nComplete!\n");
            break;

        case 'x':
            printf("Mang sap xep theo chieu giam dan:");
            sapxepgiam(arr,n);
            xuatmang(arr,n);
            printf("\nComplete!\n");
            break;

        case 't':
            printf("Nhap so can tim kiem:");
            int m;
            scanf("%d",&m);
            timkiem(arr,n,m);
            printf("\nComplete!\n");
            break;

        default:
            printf("Chon sai chuc nang!");

        case 'e':
            break;
        }
        if(kt!='e')
        {
            printf("\nNhan 1 ki tu bat ki de tiep tuc:");
            scanf("%d",&kt);
            fflush(stdin);
        }
	} while(kt!='e');
}

void taomang(int arr[], int *n)
{
    int i,n1;
    printf("Nhap so phan tu cua mang:");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        printf("Nhap phan tu arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    *n=n1;
}

void xuatmang(int arr[], int n)
{
    int i;
    if(n==0)
    {
        printf("Mang trong!");
    }
    else
    {
      for(i=0;i<n;i++)
      {
         printf("%3d",arr[i]);
      }
    }
}

void add_element(int arr[], int *n, int x)
{
    *n=*n+1;
    arr[*n-1]=x;
}

void delete_element(int arr[], int *n, int k)
{
    int i;
    if(k>=(*n))
    {
        printf("Khong co phan tu k!");
    }
    else
    {
       for(i=k;i<(*n);i++)
       {
            arr[i]=arr[i+1];
       }
       *n=*n-1;
    }

}

void sapxeptang(int arr[], int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void sapxepgiam(int arr[], int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

}

void timkiem(int arr[], int n, int k)
{
    int i,dem=0;
    printf("%d xuat hien tai cac vi tri:",k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            printf("%3d",i);
            dem++;
        }
    }
    if(dem==0)
    {
        printf("%d khong xuat hien trong mang");
    }

}
