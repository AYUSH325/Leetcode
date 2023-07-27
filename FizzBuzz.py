class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        answer = []
        num = 1
        while num <= n:
            if num%15 == 0:
                answer.append('FizzBuzz')
            elif num%3 == 0:
                answer.append('Fizz')
            elif num%5 == 0:
                answer.append('Buzz')
            else:
                answer.append(str(num))
            num += 1
        return answer