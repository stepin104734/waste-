#include "factorial.h"

int check(char t[10])
{
    if(strcmp(t,"wet")==0)
        {
            a=1;
        return(a);
        }
    else if(strcmp(t,"metal")==0)
    {
        b=1;
        return(b+1);
    }
    else if(strcmp(t,"paper")==0)
    {
        c=1;
        return(c+2);
    }
    else if(strcmp(t,"plastic")==0)
    {
        d=1;
        return(d+3);
    }
    else if(strcmp(t,"cloth")==0)
    {
        d=1;
        return(d+3);
    }
    else if(strcmp(t,"wood")==0)
    {
        c=1;
        return(c+2);
    }
    else if(strcmp(t,"ewaste")==0)
    {
        b=1;
        return(b+1);
    }
}
int checkbin(int i)
{
    int b1=i;
    if(b1>=80)
    {
        b1=0;
        return(0);
    }
    else
    {
        return(0);
    }
}
