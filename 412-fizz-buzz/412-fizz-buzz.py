class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        res = ['']*n
        for i in range(0,n,3):
            res[i]=str(i+1)
        for i in range(1,n,3):
            res[i]=str(i+1)
        for i in range(2,n,3):
            res[i]="Fizz"
        for i in range(4,n,5):
            if res[i]=="Fizz":
                res[i]+="Buzz"
            else:
                res[i]="Buzz"
        return res