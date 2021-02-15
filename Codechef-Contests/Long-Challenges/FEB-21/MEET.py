from datetime import time
try:
    def hrsandmins(P):
        
        Phrs = P.split(':')
        Pmin = Phrs[1].split(' ')
        
        if 'PM' in Pmin:
            if(int(Phrs[0]) != 12): 
                Phrs[0] = int(Phrs[0]) + 12
        
        P = [int(Phrs[0]), int(Pmin[0])]
        
        if ('AM' in Pmin) and ('12' in Phrs[0]): 
            P = [0, int(Pmin[0])]
        
        return P;
        
    def is_time_between(begin_time, end_time, check_time):
        # If check time is not given, default to current UTC time
        
        if begin_time < end_time:
            if(check_time >= begin_time and check_time <= end_time):
                return 1
            else:
                return 0
                
        if begin_time == end_time:
            if begin_time == check_time:
                return 1
            else:
                return 0
        else:
            # crosses midnight
            if(check_time >= begin_time or check_time <= end_time): 
                return 1
            else:
                return 0 
        
    testcases = int(input())
    
    for _ in range(testcases):
        P = input()
        Nfrnds = int(input())
        
        P = hrsandmins(P)
        
        #print(hrsandmins(P))
        
        ans = []
        
        for i in range(Nfrnds):
            LRi = input()
            Li = LRi[0:8]
            Ri = LRi[9:]
            #print(Li,' ', Ri)
            li = hrsandmins(Li)
            ri = hrsandmins(Ri)
            
            #print('After', li, ' ', ri)
            
            ans.append(is_time_between(time(li[0],li[1]), time(ri[0], ri[1]), time(P[0], P[1])))
        
        ans = tuple(list(ans))  
        ans = map(str, ans)
        
        ans = ''.join(ans)
        print(ans)
        
except:
    pass