from sympy import *
x= Symbol ('x')
g = input ('Enter the function ') #x**3-2*x-5
f= lambdify (x , g )
a= float ( input ('Enter a valus :') ) #2
b= float ( input ('Enter b valus :') ) # 3
N=int( input ('Enter number of iterations :') ) #5
for i in range (1 , N+1 ):
    c=( a*f ( b )-b*f ( a ) )/( f ( b )-f ( a ) )
    if (( f ( a )*f ( c )<0 ) ):
        b=c
    else :
        a=c
    print ('itration %d \t the root %0.3f \t function value %0.3f \n'%(i ,c , f ( c ) ) )