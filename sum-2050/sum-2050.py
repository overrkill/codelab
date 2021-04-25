def solve(x):
    sm = 0
    if( x % 2050 == 0 ):
        tmp = x / 2050
        while ( tmp != 0  ):
            sm = sm + tmp % 10
            tmp = tmp / 10
        return sm    
    else:
        return -1   
   
tc = int(input())
   
for i in range(tc):
    nn = int(input())
    print(solve(nn))
