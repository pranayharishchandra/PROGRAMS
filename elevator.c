/*
just don't enter the floor where the lift already is present.... and also doing that makes no sense
*/

#include <stdio.h>
int i = 5; // FLOOR WHERE THE LIFT INITIALLY IS

// Printing the sorted list - (inputs by the user + the floor where the lift was already at initially)
void print(int *arr, int n)
{
    printf("\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d", *(arr + j));
    }
    printf("\n\n");
}

int main()
{
    printf("\n+-------------------------------+\n");
    printf("|    lift is at floor no %d      |\n", i);   
    printf("+-------------------------------+\n"); 
    while (1)
    {
        int move; // UP OR DOWN
        int idx_of_i;
        // int move; // UP OR DOWN

        // PRESSING THE LIFT BUTTON FROM OUTSIDE THE LIFT
        printf("Press Button \n'1' for UP \n'0' for DOWN \n -> ");
        scanf("%d", &move);

        // ADDING FLOORS IN THE LIFT
        // assuming every person want to go at differnt floor

        printf("\n        OPENING LIFT GATE \n");
        int n = 0;
        printf("How many floors you want to enter -> ");
        scanf("%d", &n);
        n = n + 1;
        int arr[n];

        for (int insert = 0; insert < n - 1; insert++)
        {
            printf("->");
            scanf("%d", &arr[insert]);
        }
        arr[n - 1] = i; // also adding current floor of lift

        // array before sorting
        // print(arr, n);

        // SORTING THE ARRAY - arr
        for (int a = 0; a < n; ++a)
        {
            for (int b = a + 1; b < n; ++b)
            {
                if (arr[a] > arr[b])
                {
                    int temp = arr[a];
                    arr[a] = arr[b];
                    arr[b] = temp;
                }
            }
        }

        // array after sorting
        // print(arr, n);

        // finding 'i' index in the sorted array

        for (int a = 0; a < n; a++)
        {
            if (arr[a] == i)
            {
                idx_of_i = a;
                break;
            }
        }

        int curr = idx_of_i;
        // printf("index of i %d \n", idx_of_i);

        int k;

        // WHEN UP BUTTON IS PRESSED
        printf("+-------------------------------+\n");
        if (move == 1)
        {
            for (k = i + 1; k <= arr[n - 1]; k++) // ith or current floor to up
            {
                /*
                with 2 digit floor numbers... 
                the RHS boundary of the lift gets distorted... 
                moves 1 space more on right
                so i have added k<10 condition over come this problem
                */
                if (k<10)
                    printf("|              U %d              |\n", k);
                else
                    printf("|              U %d             |\n", k);
                if (arr[curr + 1] == k && arr[curr + 1] != -1)
                {
                    printf("| OPENING LIFT and CLOSING LIFT |\n");
                    arr[curr + 1] = -1;
                    curr++;
                }
                printf("|               |               |\n");
            }
            curr = idx_of_i - 1;

            // printf("index of i %d \n", idx_of_i);

            i = k - 1; // updating i value or lift at floor valur for the next itration

            if (0 != idx_of_i)
            {
                k = k - 2;
                // -2 because i don't want k to be printed again
                // and another -1 to cancel k++ effect done by above loop
                // for loop do k++ at the end of every iteration

                // printf("arr[0] is %d and k is %d \n", arr[0], k);
                // for (k ; k >= arr[0]; k--)
                // this is wrong because the arr[curr = 0] will be updated to -1
                // and this is beause arr[curr] is going till -1
                // but now it's working fine

                int stop = arr[0];

                for (k; k >= stop; k--) // arr[n-1] or top floor to last floor(if it's not the index of i)
                {
                    if (k<10)
                        printf("|              D %d              |\n", k);
                    else
                        printf("|              D %d             |\n", k);
                    if (arr[curr] == k && arr[curr] != -1)
                    {
                        printf("| OPENING LIFT and CLOSING LIFT |\n");
                        arr[curr] = -1;
                        curr--;
                    }
                    printf("|               |               |\n");
                    
                }
                i = k + 1;
            }
            // printf("\n");
        }

        // DOWN BUTTON IS PRESSED
        else
        {
            int k;
            int stop = arr[0];
            curr = idx_of_i - 1;
            for (k = i - 1; k >= stop; k--)
            {
                if (k < 10)
                    printf("|              D %d              |\n", k);
                else
                    printf("|              D %d             |\n", k);
                if (arr[curr] == k && arr[curr] != -1)
                {
                    printf("| OPENING LIFT and CLOSING LIFT |\n");
                    arr[curr] = -1;
                    curr--;
                }
                printf("|               |               |\n");
                
            }

            curr = idx_of_i + 1; // curr will point at next element
                                 // after idx_of_i of array arr inputed by user
            i = k + 1;
            k = k + 2;

            // printf("arr[n-1] = %d and i = %d", arr[n-1] , i);

            i = k + 1; // updating curr floor value for next iteration

            if (n - 1 != idx_of_i) // the last floor is not equal to the floor where the lift initially was
            {
                stop = arr[n - 1];
                for (k; k <= stop; k++)
                {
                    if (k < 10)
                        printf("|              U %d              |\n", k);
                    else
                        printf("|              D %d             |\n", k);
                    // if (arr[curr] == k && arr[curr] != -1)
                    if (arr[curr] == k)
                    {
                        printf("| OPENING LIFT and CLOSING LIFT |\n");
                        // arr[curr + 1] = -1;
                        curr++;
                    }
                    printf("|               |               |\n");                 
                }
                curr = idx_of_i - 1;
            }
            i = k - 1; // updating i value or lift at floor valur for the next itration
        }
        printf("|               V               |\n");
        if (i<10)
            printf("|    lift is at floor no %d      |\n", i);
        else
            printf("|    lift is at floor no %d     |\n", i);  
        printf("+-------------------------------+\n");
    }

    return 0;
}
