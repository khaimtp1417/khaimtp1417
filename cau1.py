import sympy as sp
x=sp.symbols('x')
#1a
f=4-x*x
y=sp.diff(f,x)
print('1a:',y)
#1b
f=(x-1)**2-1
y=sp.diff(f,x)
print('1b:',y)
#1c
f=1/x**2
y=sp.diff(f,x)
print('1c',y)
#1d
f=(1-x)/2*x
y=sp.diff(f,x)
print('1d:',y)