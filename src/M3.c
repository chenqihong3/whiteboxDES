#include <stdio.h>
#include <stdlib.h>

int PermutationFinal[64] = {
    40,  8, 48, 16, 56, 24, 64, 32,
    39,  7, 47, 15, 55, 23, 63, 31,
    38,  6, 46, 14, 54, 22, 62, 30,
    37,  5, 45, 13, 53, 21, 61, 29,
    36,  4, 44, 12, 52, 20, 60, 28,
    35,  3, 43, 11, 51, 19, 59, 27,
    34,  2, 42, 10, 50, 18, 58, 26,
    33,  1, 41,  9, 49, 17, 57, 25
};

int DesExpansion[48] = {
    32,  1,  2,  3,  4,  5,  4,  5,
     6,  7,  8,  9,  8,  9, 10, 11,
    12, 13, 12, 13, 14, 15, 16, 17,
    16, 17, 18, 19, 20, 21, 20, 21,
    22, 23, 24, 25, 24, 25, 26, 27,
    28, 29, 28, 29, 30, 31, 32,  1
};

int NotExpansed[16] = {
     2,  3,  6,  7, 10 ,11, 14, 15,
    18, 19, 22, 23, 26, 27, 30, 31
};

int main()
{
    int i,j;
    int tab[64][96];
    FILE * file;
    file = fopen("M3","w");
    for(i=0;i<32;i++)
    {
        for(j=0;j<32;j++)
        {
            if(j!=i)
                tab[i][j]=0;
            else tab[i][j]=1;
        }
    }    
    for(i=32;i<64;i++)
    {
        tab[PermutationInitial[i]-1][i]=1;
    }
	/*for(i=32;i<64;i++)
    {
        for(j=0;j<64;j++)
        {
            tmp[i-32][j]=tab[i][j];
        }
    }	
    for(i=32;i<80;i++)
    {
        for(j=0;j<64;j++)
        {
            tab[i][j]=tmp[NotExpansed[i-80]-1][j];
        }
    }
    for(i=80;i<96;i++)
    {
        for(j=0;j<64;j++)
        {
            tab[i][j]=tmp[DesExpansion[i-32]-1][j];
        }
    }*/
    if(file!=NULL)
    {
        for(i=0;i<64;i++)
        {
            for(j=0;j<96;j++)
            {
                fprintf(file,"%d",tab[i][j]);
            }
            fprintf(file,"\n");
        }
    }
}
