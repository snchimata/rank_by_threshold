#include <stdio.h>

#include <stdlib.h>

#include <string.h>

 

int

main (int ac, char *av[])

{

        char szBuf  [1024];

 

        int     i=0;

 

        long    lClass=1;

 

        float fMySum      =0;

        float fCurrentVal =0;

        float fThreshold  =0.5;

 

        while (fgets (szBuf, sizeof (szBuf)-1,  stdin) != (char *) NULL )

        {

                szBuf [strlen (szBuf) - 1 ] = '\0';

                while (szBuf [i] != ',' && szBuf [i] != '\0')

                        i ++;

                fCurrentVal=atof (szBuf + (i+1));

                fMySum += fCurrentVal;

                fprintf (stdout, "%s,%d\n", szBuf, lClass);

                if (fMySum >= fThreshold)

                {

                        lClass ++;

                        fMySum=0;

                }

        }

        exit (0);

}
