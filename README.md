# Data-structures-in-CPP
Interview prep for Data Strructures
Functions--->
More then one function with same name but differetn parameters
like 
int add(int x,int y,int z);
int add(int x,int y);
Default argumnets---->
int add(int x,int y,int z=0);
By default it will take 0 if two arguments are passed then also it will work anf if three arguments are passed like 
add(10,6,7) then 0 will be overwritten with 7.

-------------->
Pass by value:
nothing changes and activation record is created in the stack
pass by adress :
main actual argument changes and activation record is created in the stack
pass by Reference :
main actual argument changes and activation record is not created in the stack
in machine code main and swap are not separately created they are created in as inline .
