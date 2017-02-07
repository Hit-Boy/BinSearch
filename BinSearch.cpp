#include "TXLib.h"
const int S = 10;

void BinSearch(int A[]);

int main()
    {
    int A[S] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    BinSearch(A);
    }

void BinSearch(int A[])
    {
    int Aim = 0;
    scanf("%d", &Aim);
    int St = 0;
    int En = S-1;
    while(true)
        {
        if(Aim > A[(St + En)/2]) St = (St + En)/2 + 1;
        if(Aim == A[(St + En)/2])
            {
            printf("Answer:%d;)", (St + En)/2);
            break;
            }
        if(Aim < A[(St + En)/2]) En = (St + En)/2 - 1;
        if(St == En && Aim != St)
            {
            printf("Sry, no answer for u today, go and suicide");
            break;
            }
        }
    }
