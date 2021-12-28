#include<iostream>
using namespace std;

class Sorting
{
    int *arr;
    int n;

    public:


    void initialize_dynamically()
    {
        cout<<"enter the size of the array:";
        cin>>n;
        arr=new int[n];
        cout<<"enter the elements of the array:";
        for (int i=0;i<n;i++)
               cin>>arr[i];
    }

    void delete_stack()
    {
       delete[] arr;
    }

    void display()
    {
        cout<<"Elements of the array:";
        for (int i=0;i<n;i++)
               cout<<arr[i]<<" ";
    }
    void swap(int *x, int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }

    void Bubble()
    {
    int i, j, flag;
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}
    void Insertion()
    {
    int i, j, x;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        x = arr[i];
        while (j > -1 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
    }

    void SelectionSort_new(){

    int i,j,pos=0,min=0;
    for (i=0;i<n-1;i++)
    {
        min=arr[i];
        pos=i;
        for (j=i+1;j<n;j++)
        {
            if (min>arr[j])
            {
                min=arr[j];
                pos=j;
            }
        }

        if (pos!=i)
        swap(&arr[pos],&arr[i]);
    } 
}
void quick_sort()
{
   quick_sort(arr,0,n-1); 
}
  void quick_sort(int arr[],int lb,int ub)
  {
    int pivot=arr[lb];
    int i=lb,j=ub;

    if (lb>=ub)
       return ;
    else{
        while (i<j)
        {
            while (pivot>=arr[i] && i<j)
                  i++;
            while (pivot<arr[j])
                  j--;
            if (i<j)
             swap(&arr[i],&arr[j]);
        }
        swap(&arr[lb],&arr[j]);
        quick_sort(arr,lb,j-1);
        quick_sort(arr,j+1,ub);
    }

}
void merge(int A[], int l, int mid, int h)
{
    int i, j, k;
    int B[h + 1];
    i = l;
    j = mid + 1;
    k = l;
    while (i <= mid && j <= h)
    {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    for (; i <= mid; i++)
        B[k++] = A[i];
    for (; j <= h; j++)
        B[k++] = A[j];
    for (i = l; i <= h; i++)
        A[i] = B[i];
}
void RMergeSort(int A[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        RMergeSort(A, l, mid);
        RMergeSort(A, mid + 1, h);
        merge(A, l, mid, h);
    }
}

void merge_sort()
{
    RMergeSort(arr,0,n-1);
}


    
};

int main()
{

    Sorting s;
    s.initialize_dynamically();
    int choice;
    cout<<"1.bubble sort"<<endl<<"2.insertion_sort"<<endl<<"3.Selection Sort"<<endl<<"4.Quick sort"<<endl<<"5.Merge sort"<<endl<<"6.Initialize again"<<endl<<"7.display"<<endl<<"8.exit"<<endl;
    cin>>choice;
    do
    {
        if (choice==1)
           s.Bubble();
        else if (choice==2)
           s.Insertion();
        else if (choice==3)
          s.SelectionSort_new();
        else if (choice==4)
          s.quick_sort();
        else if (choice==5)
          s.merge_sort();
        else if (choice==6)
        {
            s.delete_stack();
            s.initialize_dynamically();
        }
        else if (choice==7)
          s.display();
        else if (choice==8)
          break;

        cout<<endl<<"1.bubble sort"<<endl<<"2.insertion_sort"<<endl<<"3.Selection Sort"<<endl<<"4.Quick sort"<<endl<<"5.Merge sort"<<endl<<"6.Initialize again"<<endl<<"7.display"<<endl<<"8.exit"<<endl;
        cin>>choice;
    } while (choice<=7);
    
    s.display();

}