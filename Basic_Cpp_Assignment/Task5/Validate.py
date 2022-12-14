### need install sympy
### run: pip install sympy
from sympy import*

x=symbols('x')#定义变量
f=sin(x)#输入积分表达式
jf=integrate(f,(x,1,2))
#integrate(表达式,(变量,下限,上限))即得
print('定积分为:',jf)