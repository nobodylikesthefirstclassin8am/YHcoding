#include <stdio.h>
void local (void);
void statics (void);
void global (void);
int x = 10;
void main ()
{
int x = 15;
printf ("%d\n",x); 
{
int x = 27;
printf ("%d\n",x); 
}
statics (); 
local (); 
global ();
statics (); 
}
void local ()
{
int x =125;
printf ("%d\n",x);
x--;
printf ("%d\n",x);
}
void statics ()
{
static int x = 5;
printf ("%d\n",x);
x++;
printf ("%d\n",x);
}
void global ()
{
printf ("%d\n",x);
x *= 8;
printf ("%d\n",x);
}
