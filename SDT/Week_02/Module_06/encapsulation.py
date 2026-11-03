class Bank:
    def __init__(self, holder_name, initial_diposit):
        self.holder_name = holder_name #public
        self._branch = 'Bonani 11' # protected
        self.__balance = initial_diposit # private

    def deposit(self, amount):
        self.__balance += amount

    def get_balance(self):
        return self.__balance
    def withdraw(self,amount):
        if amount<self.__balance:
            self.__balance=self.__balance - amount
            return amount
        else:
            return f'Not enough balance'

refsan = Bank("Choto vi", 10000)

print(refsan.holder_name)
refsan.deposit(5000)
print(refsan.get_balance())
# print(dir(refsan))
print(refsan._Bank__balance)