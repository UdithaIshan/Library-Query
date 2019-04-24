#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sort(int array[],int size)
{
    int temp,i,j;
    for(i=0;i<(size-1);i++)
    {
        for(j=0;j<(size-1-i);j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

int main()
{
    int T,N,Q,x,y,k,i,j,p,a[5000],b[1000];

    scanf("%d",&T); //number of test cases

    while(T--)
    {
        scanf("%d",&N); //number of shelves
        for(i=0;i<N;i++)
        {
            scanf("%d",&a[i]); //number of books in shelves
        }
        scanf("%d",&Q);     //number of queries to be performed

        while(Q--)
        {
            scanf("%d",&p);
            if(p==0)            //selection query
            {
                scanf("%d%d%d",&x,&y,&k);
                x--;
                for(i=x,j=0;i<y;i++)
                {
                    b[j]=a[i];
                    j++;
                }
                sort(b,(y-x));
                printf("%d\n",b[k-1]);
                continue;
            }
            else if(p==1)
            {
                scanf("%d%d",&x,&k);
                a[x-1]=k;
            }
        }
    }

}
