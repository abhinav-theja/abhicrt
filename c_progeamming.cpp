variable: //////////////////////////////////////////////////////////////////////////////////////////////

a=10 //integer 2 bytes -32,768,to +32,767
b=12.5//float
12.567789999;
///double 8 bytes 3.4 e-308 to 3.4=308 to 3.4+308%lf
  c='a';
  //1byte -128 to +127
 
  str[10]="gitamhyd";
  ///9
  //10 bytes
  %s
  long,short,signed,unsigned
  int 2 bytes
  long int 4 bytes :
  -2146473648 to +2146473647
  unsigned int 0 to 65535
  unsigned char 0 to 255
  %u --unsigned integer
  ASCII
  256 ASCII VALUES
  A =65,,,,,,,,,Z=90
  a=97 ........z=122
  0=48.........9=57
  space=' '=32
  int a=015;
  printf("%o",a);
  printf("%d,a");//decimal equivalent of 15
  int b=0x17;
  printf("%x");//(17base 16
  
  
  Operators:////////////////////////////////////////////////////////////////////////////////////////////
  	
  	1)arithmetic ops:
  		+,-,*,/ and%
  	a=10,b=3,
  	a/b=3
  	a%b=1
  	
  	
  	2)logical ops:
  		and &&
  		or ||
  		not !
    
     exp1  exp2  exp1&&exp2  exp1||exp2  !exp1
     T      T        T           T         F
     T      F        F           T         F
     F      T        F           T         T
     F      F        F           F         T
     
     
     3)Relational Ope:
	 < <= > >= == !=
	 
	 
	 4)Assignment opertors:
	 =
	 +=,-=,*=,/=,%=
	 a+=b-------->a=a+b
	 
	 
	 5)sizeof()
	 used of find the size of datatypes/literals/variables
	 
	 
	 6)conditional ops:
	 exp1?exp2?:exp3;
	    ---
		if(exp1):
         exp2;
		else:
         exp3
     7) Increment or decrement ops:
        a=10;
        ++a;//pre increment
        a++;// post increment
        --a;//pre decrement 
		a--;// post decrement 
	 8)bit wise ops:
        & and
        | or
        ^ xor
        ~ compliment
        << left shift
        >> right shift
        

        a  b  a&b  a|b  a^b
        0  0   0    0    0
        0  1   0    1    1
        1  0   0    1    1
        1  1   1    1    0
