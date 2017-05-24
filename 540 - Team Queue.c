# include <stdio.h>
# include <String.h>
# include <stdlib.h>
 # define MAX 1000010
 # define LEN1 sizeof (struct Queue)
 # define LEN2 sizeof (struct node)
 int element [MAX];
int team [ 1010 ];
struct Queue
{
    int num;
    struct node * Front, * REAR;
} q [ 1010 ];
int Front, REAR;
struct node
{
    int Data;
     struct node * next;
};

void create_queue ( int T)
{
     int t;
     for(t = 0 ; t <= T; t ++ )
    {
        q[t].num = - 1 ;
        q [t].Front = q [t];REAR = (struct node*)malloc(LEN2);
        q [t].Front -> Data = 0 ; q [t] Front-> next =. NULL;
    }
    Front = REAR = 0 ;
    memset (team, - 1 , sizeof (team));
}

void ENQUEUE ( int s, int T)
{
    int num, k;   struct node * Temp;
    num = element [s];

    Temp = ( struct node * ) malloc (LEN2);
    Temp -> Data = s; Temp-> next = NULL;

    if (team [num] == - 1 )
    {

        q [REAR] num. = num; team [num] = REAR;
        REAR = (REAR + 1 )% (T + 1 );

    }

    k = team [num];
    q [k] REAR. -> next = Temp;
    . q [k] REAR = Temp;
    . q [k] Front -> Data + + ;
}

void DEQUEUE ( int T)
{
    struct node * Temp;   int k;
    Temp = q [Front] Front->. next;
    printf ( " % d \ N " , Temp-> Data);
    . q [Front] Front -> Data - ;
    q [Front] Front. -> next = Temp-> next;
    free (temp);
    if (! q [Front]. Front-> Data)
    {
        k = q [Front] num;. team [k] = - 1 ;
        . q [Front] REAR = q [Front] Front;.
        if ((Front + 1 ) = = REAR) Front = REAR = 0 ;
        else Front = (Front + 1 )% (T + 1 );
    }
}

void test_print_queue ( int T)
{
     int t; struct node * Temp;
    printf ( " % d = Front REAR =% d \ N " , Front, REAR);
     if (Front < REAR)
    {
        for (t = Front; t <REAR; t + + )
        {
            Temp = q [t] Front->. next;
            printf ( " team: people =% d% d   " , q [t] num, q [t] Front->.. Data);
             while (Temp)
            {Printf ( " % d " , Temp-> Data); Temp = Temp-> next;}
            printf ( " \ N " );
        }
    }
    else
    {
        for (t = Front; t <= T; t + + )
        {
            Temp = q [t] Front->. next;
            printf ( " team: people =% d% d   " , q [t] num, q [t] Front->.. Data);
             while (Temp)
            {Printf ( " % d " , Temp-> Data); Temp = Temp-> next;}
            printf ( " \ N " );
        }
        for (t = 0 ; t <REAR; t + + )
        {
            Temp = q [t] Front->. next;
            printf ( " team: people =% d% d   " , q [t] num, q [t] Front->.. Data);
             while (Temp)
            {Printf ( " % d " , Temp-> Data); Temp = Temp-> next;}
            printf ( " \ N " );
        }
    }

    for (t = 1 ; t <= T; t + +) printf ( " team (% d) =% d   " , t, team [t]); printf ( " \ N " );
}

int main ()
{
    int k = 0 , t, T, i, N, Temp;   char  String [ 10 ];
     while (scanf ( " % d " !, & T) = EOF && T)
    {
        k + +; printf ( " % d Scenario # \ N " , k);
         for (t = 1 ; t <= T; t + + )
        {
            scanf ( " % d " , & N);   for (i = 1 ; i <= N; i + +) {scanf ( " % d " , & Temp); element [Temp] = t;}

        }
        getchar (); create_queue (T);
        while (scanf ( " % s " , String ) = EOF && strcmp (! String , " STOP " ))
        {
            if (! strcmp ( String , " DEQUEUE " ))
            {
                DEQUEUE (T);

            }
             else
            {
                scanf ( " % d " , & Temp);
                ENQUEUE (temp, T);

            }
        }
        printf ( " \ N " );
    }
    return  0 ;
}
