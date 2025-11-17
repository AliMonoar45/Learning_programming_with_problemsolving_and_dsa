#include <stdio.h>
void arr_input(int arr[],int sz,int idx){
    if (idx==sz)
    {
        return;
    }
    scanf("%d", &arr[idx]);
    arr_input(arr, sz, idx+1);
}
void arr_output(int arr[], int sz, int idx)
{
    if (idx == sz)
    {
        return;
    }
    printf("%d ", arr[idx]);
    arr_output(arr, sz, idx+1);
}
void copy_arr(int a[],int b[],int sz){
    for (int i = 0; i < sz; i++)
    {
        b[i] = a[i];
    }
}
void short_arr(int arr[],int sz){
    for (int i = 0; i < sz; i++)
    {
        for (int j = i+1; j < sz; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                /* code */
            }
            
        }
        
    }
    
    
}
int absolute(int num){
    if (num<0)
    {
        return -num;
    }else
    {
        return num;
    }
    
    
}
int main() {
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int sz;
        scanf("%d", &sz);
        int a[sz];
        arr_input(a, sz, 0);
        int b[sz];
        copy_arr(a, b, sz);
        short_arr(b, sz);
        int c[sz];
        for (int i = 0; i < sz; i++)
        {
            c[i] = absolute(a[i] - b[i]);
        }
        

        arr_output(c, sz, 0);
        printf("\n");
    }
    
    return 0;
}