class MyStack:

    def __init__(self):
        self.buffer = deque()
        return

    def push(self, x: int) -> None:
        self.buffer.appendleft(x)
        return

    def pop(self) -> int:
        return self.buffer.popleft()

    def top(self) -> int:
        return self.buffer[0]

    def empty(self) -> bool:
        if len(self.buffer)==0:
            return True
        else:
            return False


# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()