#include <stdio.h>
#include <conio.h>

int main()
{
    int n,l;        // Choice for Users
    int m = 2;        // Values that are 0 and 1
    int i,j,k;

    label:

    printf("Enter your choice \n 1. 2 Variables \n 2. 3 Variables\n");
    scanf("%d",&n);

    if(n==1)
    {
        label_1:

        printf("Enter Your Choice \n 1. AND Operation \n 2. OR Operation \n 3. XOR Opertion \n 4. NOT Operation \n 5. NAND Operation \n 6. NOR operation \n 7. XNOR Operation \n");
        scanf("%d",&l);

        switch(l)
        {
            case 1:
            {
                printf("The Required output is \n");
                for(i=0;i<m;i++)
                {
                    for(j=0;j<m;j++)
                    {
                        printf("%d  %d = %d\n",i,j,(i&j));
                    }
                }
                break;
            }

            case 2:
            {
                printf("The Required output is \n");
                for(i=0;i<m;i++)
                {
                    for(j=0;j<m;j++)
                    {
                        printf("%d  %d = %d\n",i,j,(i|j));
                    }
                }
                break;
            }

            case 3:
            {
                printf("The Required output is \n");
                for(i=0;i<m;i++)
                {
                    for(j=0;j<m;j++)
                    {
                        printf("%d  %d = %d\n",i,j,(i^j));
                    }
                }
                break;
            }

            case 4:
            {
                printf("The Required output is \n");
                for(i=0;i<m;i++)
                {
                    printf("%d = %d\n",i,!i);
                }
                break;
            }

            case 5:
            {
                printf("The Required output is \n");
                for(i=0;i<m;i++)
                {
                    for(j=0;j<m;j++)
                    {
                        printf("%d  %d = %d\n",i,j,!(i&j));
                    }
                }
                break;
            }

            case 6:
            {
                printf("The Required output is \n");
                for(i=0;i<m;i++)
                {
                    for(j=0;j<m;j++)
                    {
                        printf("%d  %d = %d\n",i,j,!(i|j));
                    }
                }
                break;
            }

            case 7:
            {
                printf("The Required output is \n");
                for(i=0;i<m;i++)
                {
                    for(j=0;j<m;j++)
                    {
                        printf("%d  %d = %d\n",i,j,!(i^j));
                    }
                }
                break;
            }

            default:
            {
                printf("Invalid Choice please choose again !!");
                goto label_1;
            }
        }
    }

     else if(n==2)
    {
        label_2:

        printf("Enter Your Choice \n 1. AND Operation \n 2. OR Operation \n 3. XOR Opertion \n 4. NOT Operation \n 5. NAND Operation \n 6. NOR operation \n 7. XNOR Operation \n");
        scanf("%d",&l);

        switch(l)
        {
            case 1:
            {
                printf("The Required output is \n");
                for(i=0;i<m;i++)
                {
                    for(j=0;j<m;j++)
                    {
                        for(k=0;k<m;k++)
                        {
                           printf("%d  %d  %d = %d\n",i,j,k,(i&j&k));
                        }
                    }
                }
                break;
            }

            case 2:
            {
                printf("The Required output is \n");
                for(i=0;i<m;i++)
                {
                    for(j=0;j<m;j++)
                    {
                        for(k=0;k<m;k++)
                        {
                           printf("%d  %d  %d = %d\n",i,j,k,(i|j|k));
                        }
                    }
                }
                break;
            }

            case 3:
            {
                printf("The Required output is \n");
                for(i=0;i<m;i++)
                {
                    for(j=0;j<m;j++)
                    {
                        for(k=0;k<m;k++)
                        {
                           printf("%d  %d  %d = %d\n",i,j,(i^j^k));
                        }
                    }
                }
                break;
            }

            case 4:
            {
                printf("The Required output is \n");
                for(i=0;i<m;i++)
                {
                    printf("%d = %d\n",i,!i);
                }
                break;
            }

            case 5:
            {
                printf("The Required output is \n");
                for(i=0;i<m;i++)
                {
                    for(j=0;j<m;j++)
                    {
                        for(k=0;k<m;k++)
                        {
                           printf("%d  %d  %d = %d\n",i,j,k,!(i&j&k));
                        }
                    }
                }
                break;
            }

            case 6:
            {
                printf("The Required output is \n");
                for(i=0;i<m;i++)
                {
                    for(j=0;j<m;j++)
                    {
                        for(k=0;k<m;k++)
                        {
                           printf("%d  %d  %d = %d\n",i,j,k,!(i|j|k));
                        }
                    }
                }
                break;
            }

            case 7:
            {
                printf("The Required output is \n");
                for(i=0;i<m;i++)
                {
                    for(j=0;j<m;j++)
                    {
                        for(k=0;k<m;k++)
                        {
                          printf("%d + %d = %d",i,j,k,!(i^j^k));
                        }
                    }
                }
                break;
            }

            default:
            {
                printf("Invalid Choice please choose again !!");
                goto label_2;
            }
        }
    }

    else
    {
        printf("Incorrect Choice Please Try Again !!!\n");
        goto label;
    }
    
    return 0;
}