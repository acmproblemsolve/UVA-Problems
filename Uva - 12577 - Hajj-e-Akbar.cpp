 #include<stdio.h>
 #include<string.h>
int main ()
{
    char input [50];
    int cases = 0;

    while ( scanf ("%s", input)) 
        {
        	if ( strcmp (input, "*" ) == 0 )
        	break;
        if ( strcmp (input, "Hajj" ) == 0 )
             printf ("Case %d: Hajj-e-Akbar\n", ++cases);
        if ( strcmp (input, "Umrah" ) == 0 )
            printf ("Case %d: Hajj-e-Asghar\n", ++cases);
            
        }

    return 0;
}
