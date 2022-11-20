#include <stdio.h>

int main()
{

    int Q[100], Front = -1, Rear = -1, N, Data;
    printf("Enter size of Queue: ");
    scanf("%d", &N);

    int a, i, z = 1;
    while (z == 1)
    {
        z = 0;
        printf("\nSelect Option For Operation In Circular Queue:\n");
        printf("1.CIR_ENQUEUE\n2.CIR_DEQUEUE\n3.Close\n");
        scanf("%d", &a);
        if (a > 3 || a < 1)
        {
            printf("\nPlease Select Valid Option !\n");
            z = 0;
        }

        switch (a)
        {
        case 1:
            while (a == 1)
            {
                printf("\nQueue Before CIR_ENQUEUE Operation:");
                printf("\nFront=%d", Front);
                printf("\nRear=%d\n", Rear);
                printf("Queue: ");
                i = Front;
                while (i >= -1)
                {
                    if (i == -1)
                    {
                        printf("Empty");
                        break;
                    }
                    else if (i == Rear)
                    {
                        printf("%d ", Q[i]);
                        break;
                    }
                    else if (i == N - 1)
                    {

                        printf("%d ", Q[i]);
                        i = 0;
                    }
                    else
                    {
                        printf("%d ", Q[i]);
                        i++;
                    }
                }

                if ((Front == 0 && Rear == N - 1) || Rear == Front - 1) //(Rear+1)%N==Front
                {
                    printf("\n\nQueue is Overflow !");
                }
                else
                {
                    printf("\n\nEnter Element You Want To CIR_ENQUEUE: ");
                    scanf("%d", &Data);

                    if (Front == -1)
                    {
                        Front = 0;
                    }
                    if (Rear == N - 1)
                    {
                        Rear = 0;
                        Q[Rear] = Data;
                    }
                    else
                    {
                        Rear++;
                        Q[Rear] = Data;
                    }

                    printf("\nQueue After CIR_ENQUEUE Operation:");
                    printf("\nFront=%d", Front);
                    printf("\nRear=%d\n", Rear);
                    printf("Queue: ");
                    i = Front;
                    while (i >= -1)
                    {
                        if (i == -1)
                        {
                            printf("Empty");
                            break;
                        }
                        else if (i == Rear)
                        {
                            printf("%d ", Q[i]);
                            break;
                        }
                        else if (i == N - 1)
                        {

                            printf("%d ", Q[i]);
                            i = 0;
                        }
                        else
                        {
                            printf("%d ", Q[i]);
                            i++;
                        }
                    }
                }

                a = 0;
                while (a == 0)
                {
                    printf("\n\nYour Want To CIR_ENQUEUE Again ? \n1.Yes \n2.Back\n3.Close\n");
                    scanf("%d", &a);
                    if (a == 1)
                    {
                        a = 1;
                    }
                    else if (a == 2)
                    {
                        a = 404;
                        z = 1;
                    }
                    else if (a == 3)
                    {
                        a = 404;
                    }
                    else
                    {
                        printf("\nPlease Select Valid Option !");
                        a = 0;
                    }
                }
            }

            break;

        case 2:
            while (a == 2)
            {
                printf("\nQueue Before CIR_DEQUEUE Operation:");
                printf("\nFront=%d", Front);
                printf("\nRear=%d\n", Rear);
                printf("Queue: ");
                i = Front;
                while (i >= -1)
                {
                    if (i == -1)
                    {
                        printf("Empty");
                        break;
                    }
                    else if (i == Rear)
                    {
                        printf("%d ", Q[i]);
                        break;
                    }
                    else if (i == N - 1)
                    {

                        printf("%d ", Q[i]);
                        i = 0;
                    }
                    else
                    {
                        printf("%d ", Q[i]);
                        i++;
                    }
                }

                if (Front == -1)
                {
                    printf("\n\nQueue is Underflow !");
                }
                else
                {
                    Data = Q[Front];

                    if (Front == Rear)
                    {
                        Front = -1;
                        Rear = -1;
                    }
                    else if (Front == N - 1)
                    {
                        Front = 0;
                    }

                    else
                    {
                        Front++;
                    }

                    printf("\n\nQueue After CIR_DEQUEUE Operation:");
                    printf("\nFront=%d", Front);
                    printf("\nRear=%d\n", Rear);
                    printf("Queue: ");
                    i = Front;
                    while (i >= -1)
                    {
                        if (i == -1)
                        {
                            printf("Empty");
                            break;
                        }
                        else if (i == Rear)
                        {
                            printf("%d ", Q[i]);
                            break;
                        }
                        else if (i == N - 1)
                        {

                            printf("%d ", Q[i]);
                            i = 0;
                        }
                        else
                        {
                            printf("%d ", Q[i]);
                            i++;
                        }
                    }
                }

                a = 0;
                while (a == 0)
                {
                    printf("\n\nYour Want To CIR_DEQUEUE Again ? \n1.Yes \n2.Back\n3.Close\n");
                    scanf("%d", &a);
                    if (a == 1)
                    {

                        a = 2;
                    }
                    else if (a == 2)
                    {
                        a = 404;
                        z = 1;
                    }
                    else if (a == 3)
                    {
                        a = 404;
                    }
                    else
                    {
                        printf("\nPlease Select Valid Option !");
                        a = 0;
                    }
                }
            }

            break;

        default:
            break;
        }
    }

    return 0;
}