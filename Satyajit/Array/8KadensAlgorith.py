class Solution:
    def maxSubArraySum(self,arr,N):
        curr_max=0
        global_max=float("-inf")
        
        for i in arr:
            curr_max += i
            global_max=max(curr_max,global_max)
            
            if curr_max < 0 :
                curr_max = 0
        
        return global_max
            

import math
def main():
        T=int(input())
        while(T>0):
            
            n=int(input())
            
            arr=[int(x) for x in input().strip().split()]
            
            ob=Solution()
            
            print(ob.maxSubArraySum(arr,n))
            
            T-=1


if __name__ == "__main__":
    main()